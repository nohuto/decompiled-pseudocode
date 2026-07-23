/*
 * XREFs of KitpInitAitSampleRate @ 0x140C455A0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetSystemInformation @ 0x1406AAB30 (ZwSetSystemInformation.c)
 *     KitpOpenRegKey @ 0x1407C161C (KitpOpenRegKey.c)
 *     KitpReadUlongFromKey @ 0x1407C1670 (KitpReadUlongFromKey.c)
 */

NTSTATUS __fastcall KitpInitAitSampleRate(__int64 a1, __int64 a2)
{
  const char *v2; // rcx
  __int64 v3; // rdx
  NTSTATUS result; // eax
  int SystemInformation; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  SystemInformation = 0;
  Handle = 0LL;
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 216);
    if ( (!v2 || !strstr(v2, "SAFEBOOT:"))
      && KitpOpenRegKey((__int64)v2, a2, &Handle) >= 0
      && KitpReadUlongFromKey(Handle, v3, &SystemInformation) < 0 )
    {
      SystemInformation = 0;
    }
  }
  result = ZwSetSystemInformation(SystemAitSamplingValue, &SystemInformation, 4u);
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
