/*
 * XREFs of MiDeletePfnBitMaps @ 0x1407FB37C
 * Callers:
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 */

ULONG *__fastcall MiDeletePfnBitMaps(__int64 a1)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rsi
  __int64 v5; // r14
  __int64 *v6; // r14
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  __int64 v9; // rsi
  ULONG *result; // rax
  __int64 v11; // rcx

  v1 = MiPageSizes;
  v2 = qword_140E2DD20 + 1;
  v3 = (_QWORD *)(a1 + 16336);
  v5 = 2LL;
  do
  {
    MiDeleteSparseRange(*v3, (unsigned int)((((v2 / *v1 + (v2 % *v1 != 0) + 7LL) >> 3) + 4095) >> 12));
    *v3 = 0LL;
    ++v1;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  v6 = MiLargePageCoalesceCandidateBitmapShifts;
  v7 = 3LL;
  v8 = (_QWORD *)(a1 + 16400);
  do
  {
    MiDeleteSparseRange(*v8, (unsigned int)((((v2 / (1LL << *v6) + (v2 % (1LL << *v6) != 0) + 7LL) >> 3) + 4095) >> 12));
    *v8 = 0LL;
    ++v6;
    v8 += 2;
    --v7;
  }
  while ( v7 );
  MiDeleteSparseRange(*(_QWORD *)(a1 + 16440), (unsigned int)((4 * ((v2 >> 18) + ((v2 & 0x3FFFF) != 0)) + 4095) >> 12));
  *(_QWORD *)(a1 + 16440) = 0LL;
  v9 = (unsigned int)((2 * ((v2 >> 9) + ((v2 & 0x1FF) != 0)) + 4095) >> 12);
  MiDeleteSparseRange(*(_QWORD *)(a1 + 0x4000), v9);
  *(_QWORD *)(a1 + 0x4000) = 0LL;
  result = &MiSystemPartition;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    MiDeleteSparseRange(*(_QWORD *)(a1 + 16376), (unsigned int)((2 * ((v2 >> 4) + ((v2 & 0xF) != 0)) + 4095) >> 12));
    v11 = *(_QWORD *)(a1 + 17728);
    *(_QWORD *)(a1 + 16376) = 0LL;
    result = (ULONG *)MiDeleteSparseRange(v11, (unsigned int)v9);
    *(_QWORD *)(a1 + 17728) = 0LL;
  }
  return result;
}
