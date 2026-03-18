/*
 * XREFs of SepExpandSingletonArrays @ 0x1404B576C
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  void *Pool2; // rax
  void *v1; // rbx
  KIRQL v2; // si
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rdi
  void *v6; // rbx

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x600uLL);
    v2 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
    v3 = (_QWORD *)ExAllocatePool2(0x40uLL);
    v4 = v3;
    if ( v3 )
    {
      v5 = SepSingletonGlobal;
      memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
      v4[*((unsigned int *)v5 + 1)] = v1;
      v6 = (void *)*((_QWORD *)v5 + 1);
      ++*((_DWORD *)v5 + 1);
      *((_QWORD *)v5 + 1) = v4;
      ExReleaseSpinLockExclusive(v5, v2);
      ExFreePoolWithTag(v6, 0x74446553u);
      return 0LL;
    }
    ExReleaseSpinLockExclusive(SepSingletonGlobal, v2);
    ExFreePoolWithTag(v1, 0x74446553u);
  }
  return 3221225495LL;
}
