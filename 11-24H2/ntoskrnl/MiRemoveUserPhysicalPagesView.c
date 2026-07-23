/*
 * XREFs of MiRemoveUserPhysicalPagesView @ 0x140683FF8
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 * Callees:
 *     MiUnlockAweVadsExclusive @ 0x14026783C (MiUnlockAweVadsExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14026788C (MiLockAweVadsExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

_QWORD *__fastcall MiRemoveUserPhysicalPagesView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile _KAFFINITY_EX *ActiveProcessors; // rdi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  KIRQL v8; // bl

  if ( (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  ActiveProcessors = CurrentThread->ApcState.Process[2].ActiveProcessors;
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  while ( v5 )
  {
    v7 = v5[3];
    if ( v6 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
    {
      if ( v6 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) )
        break;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
  RtlAvlRemoveNode(&ActiveProcessors[4].StaticBitmap[5], (__int64)v5);
  MiReleaseSpinLockExclusive(&ActiveProcessors[4].StaticBitmap[8], v8);
  MiUnlockAweVadsExclusive((__int64)CurrentThread);
  v5[2] = 0LL;
  return v5;
}
