/*
 * XREFs of PopSetMemoryOverwriteRequestAction @ 0x140B5DA44
 * Callers:
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     HalSetEnvironmentVariableEx @ 0x1404395E0 (HalSetEnvironmentVariableEx.c)
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopSetMemoryOverwriteRequestAction()
{
  _BYTE v0[4]; // [rsp+30h] [rbp-30h] BYREF
  int v1; // [rsp+34h] [rbp-2Ch] BYREF
  int v2; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  v3[0] = -502711874;
  v3[1] = 1102983892;
  v3[2] = 2139705505;
  v3[3] = 697881733;
  if ( !PopErrataSkipMemoryOverwriteRequestControlLockAction )
  {
    v0[0] = -1;
    v1 = 1;
    if ( (int)HalGetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (__int64)v3, (__int64)v0, &v1, (__int64)&v2) >= 0
      && v1 == 1 )
    {
      v0[0] &= 0xEEu;
      HalSetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", (int)v3, (__int64)v0, 1, v2);
    }
  }
}
