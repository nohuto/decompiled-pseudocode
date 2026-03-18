/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x14048CA70
 * Callers:
 *     MiCheckHoldFaultForHotPatch @ 0x1403E932C (MiCheckHoldFaultForHotPatch.c)
 *     MiWaitForRotateToComplete @ 0x14049A424 (MiWaitForRotateToComplete.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // dl

  v2 = *(_QWORD *)a1;
  v3 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v2, v3);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v2, v3);
  }
}
