/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140A77804
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AB6E70 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1192LL) )
    return (*(_DWORD *)(a1 + 1872) >> 1) & 1;
  else
    return 0LL;
}
