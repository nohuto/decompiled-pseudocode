/*
 * XREFs of MiLockPoolCommitWs @ 0x14020C760
 * Callers:
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
