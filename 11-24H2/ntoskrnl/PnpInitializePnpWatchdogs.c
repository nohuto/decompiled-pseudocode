/*
 * XREFs of PnpInitializePnpWatchdogs @ 0x140C2336C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1404B53A4 (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PnpOpenCCSPnpRegKey @ 0x140C23448 (PnpOpenCCSPnpRegKey.c)
 */

NTSTATUS PnpInitializePnpWatchdogs()
{
  NTSTATUS result; // eax
  int v1; // eax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  result = PnpOpenCCSPnpRegKey(&Handle);
  if ( result >= 0 )
  {
    v2 = 0;
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogBugcheckEnabled", &v2) < 0 )
      v1 = 2;
    else
      v1 = v2 != 0;
    v2 = 0;
    PnpWatchdogBugcheckConfig = v1;
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogFirstChanceInMs", &v2) < 0
      || (PnpWatchdogTimeoutFirstChance = v2, v2 - 1 > 0xFFFFFFFD) )
    {
      PnpWatchdogTimeoutFirstChance = 3000;
    }
    if ( (int)PnpGetRegistryDword(Handle, (__int64)L"WatchdogSecondChanceInMs", &v2) < 0
      || (PnpWatchdogTimeoutSecondChance = v2, PnpWatchdogTimeoutFirstChance >= v2) )
    {
      PnpWatchdogTimeoutSecondChance = 360000;
    }
    return ZwClose(Handle);
  }
  return result;
}
