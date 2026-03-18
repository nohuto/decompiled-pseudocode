/*
 * XREFs of MiLockPoolCommitWs @ 0x1402E3A94
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiLockPoolCommitWs(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rcx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v3 = *(_QWORD *)(v1 + 72);
  *(_BYTE *)(v1 + 103) = CurrentIrql;
  return MiLockWorkingSetSharedAtDpc(v3);
}
