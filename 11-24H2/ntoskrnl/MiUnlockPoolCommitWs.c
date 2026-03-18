/*
 * XREFs of MiUnlockPoolCommitWs @ 0x1402EA9E4
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MiUnlockPoolCommitWs(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 72), v1);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  result = MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 72), 0x11u);
  v5 = *(unsigned __int8 *)(a1 + 103);
  if ( (_BYTE)v5 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 103);
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    }
    __writecr8(v5);
  }
  return result;
}
