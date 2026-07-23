/*
 * XREFs of MiDeleteSubsectionPages @ 0x140203EB8
 * Callers:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(__int64 *BugCheckParameter2)
{
  __int64 v1; // rsi
  void *v2; // rdi
  __int64 v4; // rdx
  bool v5; // zf
  BOOL v6; // r12d
  __int64 v7; // r13
  volatile LONG *v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rdx
  KIRQL v12; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

  v1 = *BugCheckParameter2;
  v2 = (void *)BugCheckParameter2[1];
  memset(v18, 0, sizeof(v18));
  v4 = *(_WORD *)(v1 + 60) & 0x3FF;
  v5 = *(_QWORD *)(v1 + 64) == 0LL;
  v19 = 0LL;
  v6 = !v5;
  v7 = *((_QWORD *)qword_140E300C8 + v4);
  if ( v2 )
    MiPurgeSubsection((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v2, (__int64)v18);
  if ( (*(_DWORD *)(v1 + 56) & 0xA0) == 0x80 )
  {
    v8 = (volatile LONG *)(v1 + 72);
    v9 = MiDecrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    v10 = 0;
    v12 = ExAcquireSpinLockExclusive(v8);
    while ( *((_DWORD *)BugCheckParameter2 + 26) )
    {
      LOBYTE(v11) = v12;
      MiReleaseSpinLockExclusive(v8, v11);
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v14, v16, v17) )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
      ExAcquireSpinLockExclusive(v8);
    }
    if ( v2 )
    {
      MiUpdateSystemProtoPtesTree(BugCheckParameter2 + 15, 2LL);
      BugCheckParameter2[1] = 0LL;
    }
    LOBYTE(v11) = v12;
    MiReleaseSpinLockExclusive(v8, v11);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    if ( v9 )
      MiReturnCrossPartitionSectionCharges(v7, v6, v9);
  }
  return v19;
}
