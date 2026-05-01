/*
 * XREFs of AslLogCallPrintf @ 0x1802CE2E0
 * Callers:
 *     AslEnvBuildBasic @ 0x180136F3C (AslEnvBuildBasic.c)
 *     AslRegistryGetStringExpand @ 0x180138500 (AslRegistryGetStringExpand.c)
 *     AslRegistryGetString @ 0x180138F90 (AslRegistryGetString.c)
 *     AslRegistryOpenSubKey @ 0x18013918C (AslRegistryOpenSubKey.c)
 *     AslStringDuplicate @ 0x18013927C (AslStringDuplicate.c)
 *     AslRegistryOpenKey @ 0x180139504 (AslRegistryOpenKey.c)
 *     AslEnvExpandStrings2 @ 0x180139900 (AslEnvExpandStrings2.c)
 *     AslpEnvResolveVars @ 0x180139B50 (AslpEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x180139E34 (AslEnvExpandStrings.c)
 *     AslEnvGetProcessWowInfo @ 0x18013A1F8 (AslEnvGetProcessWowInfo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 (__fastcall *__fastcall AslLogCallPrintf(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = g_AslLogPfnVPrintf;
  if ( g_AslLogPfnVPrintf )
    return (__int64 (__fastcall *)(_QWORD))g_AslLogPfnVPrintf(a1);
  return result;
}
