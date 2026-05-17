/*
 * XREFs of LdrpInitializeCfgScpHelpers @ 0x180107258
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180009600 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 */

__int64 LdrpInitializeCfgScpHelpers()
{
  __int64 Config; // rbx
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(LdrpSystemDllBase);
  RtlImageNtHeaderEx(1, LdrpSystemDllBase, 0LL, &v2);
  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    result = 0x4000LL;
    if ( (*(_WORD *)(v2 + 94) & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
    {
      LdrProtectMrdata(0);
      LdrpGuardCheckIcallNoESFptr = (__int64 (__fastcall *)())LdrpValidateUserCallTarget;
      LdrpGuardDispatchIcallNoESFptr = LdrpDispatchUserCallTarget;
      return LdrProtectMrdata(1);
    }
  }
  return result;
}
