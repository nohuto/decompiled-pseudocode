/*
 * XREFs of MiDeleteSubsectionPages @ 0x14044A8C4
 * Callers:
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  void *v2; // rdi
  __int64 v4; // rdx
  bool v5; // zf
  BOOL v6; // r12d
  __int64 v7; // r13
  volatile LONG *v8; // rsi
  __int64 v9; // r14
  int v10; // ebp
  KIRQL v11; // r15
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)BugCheckParameter2;
  v2 = *(void **)(BugCheckParameter2 + 8);
  memset(v13, 0, sizeof(v13));
  v4 = *(_WORD *)(v1 + 60) & 0x3FF;
  v5 = *(_QWORD *)(v1 + 64) == 0LL;
  v14 = 0LL;
  v6 = !v5;
  v7 = *((_QWORD *)qword_140E2FD48 + v4);
  if ( v2 )
    MiPurgeSubsection(
      (__int64 *)BugCheckParameter2,
      (unsigned __int64)v2,
      (unsigned __int64)v2 + 8 * *(unsigned int *)(BugCheckParameter2 + 44),
      2,
      (__int64)v13);
  if ( (*(_DWORD *)(v1 + 56) & 0xA0) == 0x80 )
  {
    v8 = (volatile LONG *)(v1 + 72);
    v9 = MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, 0);
    v10 = 0;
    v11 = ExAcquireSpinLockExclusive(v8);
    while ( *(_DWORD *)(BugCheckParameter2 + 104) )
    {
      MiReleaseSpinLockExclusive(v8, v11);
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
      ExAcquireSpinLockExclusive(v8);
    }
    if ( v2 )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 120, 2);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    }
    MiReleaseSpinLockExclusive(v8, v11);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    if ( v9 )
      MiReturnCrossPartitionSectionCharges(v7, v6, v9);
  }
  return v14;
}
