/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x1406729CC
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x140672764 (MiMoveBadHugeRangeCrossPartition.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 */

__int64 __fastcall MiReleasePartitionHugeIoSpace(ULONG_PTR BugCheckParameter2)
{
  unsigned __int16 *v2; // rsi
  __int64 v3; // r8
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *i; // rdx
  _QWORD **v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *j; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  ULONG_PTR v16; // r9

  v2 = **(unsigned __int16 ***)(*(_QWORD *)(BugCheckParameter2 + 184) + 72LL);
  do
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 16664);
    if ( v3 )
      MiAllocatePartitionPhysicalPages(BugCheckParameter2, (_DWORD)v2, (_DWORD)v3 << 18, 0, 769);
    v4 = ExAcquireSpinLockShared(&dword_140E30010);
    v6 = (_QWORD *)qword_140E30060;
    LOBYTE(v7) = v4;
    i = 0LL;
    while ( v6 )
    {
      i = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( i )
    {
      v9 = (_QWORD **)i[1];
      v10 = i;
      v11 = i;
      if ( v9 )
      {
        v12 = *v9;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
      if ( ((*(_QWORD *)(qword_140E30100 + 8LL * (v10[3] & 0x3FFFFF)) >> 4) & 0x7FFLL) == *(_WORD *)BugCheckParameter2 )
      {
        MiReleaseSpinLockShared(&dword_140E30010, v7, v7, v5);
        MiMoveBadHugeRangeCrossPartition(v10[3], (_WORD *)BugCheckParameter2, v2);
        LOBYTE(v7) = ExAcquireSpinLockShared(&dword_140E30010);
        i = 0LL;
        for ( j = (_QWORD *)qword_140E30060; j; j = (_QWORD *)*j )
          i = j;
      }
    }
    v14 = *(_QWORD *)(BugCheckParameter2 + 16664);
    result = MiReleaseSpinLockShared(&dword_140E30010, v7, v7, v5);
  }
  while ( v14 );
  v16 = *(_QWORD *)(BugCheckParameter2 + 424);
  if ( v16 )
    KeBugCheckEx(0x1Au, 0x4100AuLL, BugCheckParameter2, v16, *(_QWORD *)(BugCheckParameter2 + 16664));
  return result;
}
