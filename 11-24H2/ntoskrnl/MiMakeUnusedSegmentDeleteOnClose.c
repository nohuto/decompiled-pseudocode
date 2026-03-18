/*
 * XREFs of MiMakeUnusedSegmentDeleteOnClose @ 0x140672268
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14068A0B4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkUnusedControlArea @ 0x14036FCB8 (MiUnlinkUnusedControlArea.c)
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiMakeUnusedSegmentDeleteOnClose(__int64 a1)
{
  volatile LONG *v1; // rdi
  _QWORD *v3; // rbp
  KIRQL v4; // r14
  _QWORD **v5; // rsi
  _QWORD *i; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int64 inserted; // rax
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rbx

  v1 = (volatile LONG *)(a1 + 1728);
  v3 = 0LL;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v5 = (_QWORD **)(a1 + 2096);
LABEL_2:
  for ( i = *v5; ; i = v9 )
  {
    v7 = i;
    if ( i == v5 )
      break;
    v8 = (__int64)(i - 1);
    if ( (__int64)*(i - 1) < 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        MiUnlinkUnusedControlArea(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
        *(_DWORD *)(v8 + 56) |= 0x40000u;
        inserted = MiInsertUnusedSegment(v8);
        v13 = (_DWORD *)(v8 + 72);
        v14 = inserted;
        MiReleaseSpinLockExclusive(v13, v4);
        if ( v14 )
          MiReturnCrossPartitionSectionCharges(a1, 1, v14);
      }
      else
      {
        MiReleaseSpinLockExclusive(v1, v4);
      }
      v3 = 0LL;
      ExAcquireSpinLockExclusive(v1);
      goto LABEL_2;
    }
    if ( i == v3 )
      return MiReleaseSpinLockExclusive(v1, v4);
    v9 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i
      || (v10 = (_QWORD *)i[1], (_QWORD *)*v10 != i)
      || (*v10 = v9, v9[1] = v10, v11 = *(_QWORD **)(a1 + 2104), (_QWORD **)*v11 != v5) )
    {
      __fastfail(3u);
    }
    *i = v5;
    i[1] = v11;
    *v11 = i;
    if ( v3 )
      v7 = v3;
    *(_QWORD *)(a1 + 2104) = i;
    v3 = v7;
  }
  return MiReleaseSpinLockExclusive(v1, v4);
}
