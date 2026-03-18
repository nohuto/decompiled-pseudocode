/*
 * XREFs of MiOkToSetPteDirtyForNotValidFault @ 0x140396740
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiOkToSetPteDirtyForNotValidFault(__int64 a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // rax
  _KAB_UM_PROCESS_TREE *Trees; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( a1 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 )
      return 0;
    Trees = Process[4].AutoBoostState.Trees;
    if ( Trees )
    {
      if ( (_KAB_UM_PROCESS_TREE *)Trees[1].Tree.Root != &Trees[1] )
        return 0;
    }
  }
  return result;
}
