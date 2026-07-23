/*
 * XREFs of MiValidateUserCallTarget @ 0x140AB1148
 * Callers:
 *     MmValidateUserCallTarget @ 0x1406F463C (MmValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x1404A97CC (CfgAddressToBitState.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140A71924 (MiIsProcessCfgExportSuppressionEnabled.c)
 */

__int64 __fastcall MiValidateUserCallTarget(unsigned __int64 a1, __int64 a2)
{
  char v3; // di
  unsigned int v4; // ebx
  _KPROCESS *Process; // rbp
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  bool v9; // zf

  v3 = a1;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = CfgAddressToBitState(a1, *(const signed __int64 **)a2);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 == 1;
    }
    else
    {
      if ( (unsigned int)MiIsProcessCfgExportSuppressionEnabled((__int64)Process) )
        return v4;
      v9 = (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
    }
    if ( v9 )
      return 1;
  }
  return v4;
}
