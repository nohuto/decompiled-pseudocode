/*
 * XREFs of MiProcessCommitIntact @ 0x140402340
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1404F9FF8 (MiIsVadEligibleForCommitRelease.c)
 */

__int64 __fastcall MiProcessCommitIntact(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _KPROCESS *Process; // rdx
  unsigned int *p_FreezeCount; // r8
  struct _LIST_ENTRY *Address; // rax

  v1 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) == 1 )
    p_FreezeCount = (unsigned int *)&unk_140E38760;
  else
    p_FreezeCount = &Process[2].FreezeCount;
  if ( (HIBYTE(LODWORD(Process[2].ContextSwitches)) & 0x30) == 0x30
    && *(_QWORD *)p_FreezeCount
    && a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1, (__int64)Process, (__int64)p_FreezeCount);
    Address = MiLocateAddress(a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      v1 = 0;
    MiUnlockVadTree(1, 0x11u);
  }
  return v1;
}
