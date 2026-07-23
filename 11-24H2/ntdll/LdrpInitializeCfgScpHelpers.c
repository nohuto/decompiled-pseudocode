/*
 * XREFs of LdrpInitializeCfgScpHelpers @ 0x180102188
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 */

void LdrpInitializeCfgScpHelpers()
{
  __int64 Config; // rbx
  int v1; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(LdrpSystemDllBase);
  RtlImageNtHeaderEx(1u, LdrpSystemDllBase, 0LL, &OutHeaders);
  LOBYTE(v1) = LdrControlFlowGuardEnforced();
  if ( v1 && (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    LdrProtectMrdata(0);
    LdrpGuardCheckIcallNoESFptr = (__int64 (__fastcall *)())LdrpValidateUserCallTarget;
    LdrpGuardDispatchIcallNoESFptr = LdrpDispatchUserCallTarget;
    LdrProtectMrdata(1);
  }
}
