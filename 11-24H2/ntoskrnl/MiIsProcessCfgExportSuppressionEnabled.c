/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140A71924
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140AB1148 (MiValidateUserCallTarget.c)
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
