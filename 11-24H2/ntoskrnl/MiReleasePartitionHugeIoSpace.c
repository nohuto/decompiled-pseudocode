/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x1406717FC
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x14068B28C (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140671594 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 */

__int64 __fastcall MiReleasePartitionHugeIoSpace(ULONG_PTR BugCheckParameter2)
{
  unsigned __int16 *v2; // rsi
  __int64 v3; // r8
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // r8
  _QWORD *i; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *j; // rax
  __int64 v13; // rbx
  __int64 result; // rax
  ULONG_PTR v15; // r9

  v2 = **(unsigned __int16 ***)(*(_QWORD *)(BugCheckParameter2 + 184) + 72LL);
  do
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 16664);
    if ( v3 )
      MiAllocatePartitionPhysicalPages(BugCheckParameter2, (_DWORD)v2, (_DWORD)v3 << 18, 0, 769);
    v4 = ExAcquireSpinLockShared(&dword_140E2FED0);
    v5 = (_QWORD *)qword_140E2FF20;
    v6 = v4;
    i = 0LL;
    while ( v5 )
    {
      i = v5;
      v5 = (_QWORD *)*v5;
    }
    while ( i )
    {
      v8 = (_QWORD **)i[1];
      v9 = i;
      v10 = i;
      if ( v8 )
      {
        v11 = *v8;
        for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
          i = v11;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v10 )
            break;
          v10 = i;
        }
      }
      if ( ((*(_QWORD *)(qword_140E2FFC0 + 8LL * (v9[3] & 0x3FFFFF)) >> 4) & 0x7FFLL) == *(_WORD *)BugCheckParameter2 )
      {
        MiReleaseSpinLockShared(&dword_140E2FED0, v6);
        MiMoveBadHugeRangeCrossPartition(v9[3], (_WORD *)BugCheckParameter2, v2);
        v6 = ExAcquireSpinLockShared(&dword_140E2FED0);
        i = 0LL;
        for ( j = (_QWORD *)qword_140E2FF20; j; j = (_QWORD *)*j )
          i = j;
      }
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 16664);
    result = MiReleaseSpinLockShared(&dword_140E2FED0, v6);
  }
  while ( v13 );
  v15 = *(_QWORD *)(BugCheckParameter2 + 424);
  if ( v15 )
    KeBugCheckEx(0x1Au, 0x4100AuLL, BugCheckParameter2, v15, *(_QWORD *)(BugCheckParameter2 + 16664));
  return result;
}
