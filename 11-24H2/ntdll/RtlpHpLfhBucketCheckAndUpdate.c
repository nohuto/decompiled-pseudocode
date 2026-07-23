/*
 * XREFs of RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x1800D68F0 (RtlpHpLfhBucketActivate.c)
 */

__int64 __fastcall RtlpHpLfhBucketCheckAndUpdate(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v5; // rsi
  signed __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  signed __int64 v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  v3 = 0LL;
  v5 = 8LL * a2 + 448;
  if ( (*(_QWORD *)(v5 + a1) & 1) == 0 )
    v3 = *(_QWORD *)(v5 + a1);
  if ( v3 )
    return v3;
  do
  {
    v10 = *(_QWORD *)(v5 + a1);
    v6 = v10;
    v7 = v10;
    if ( (v10 & 1) == 0 )
      break;
    v3 = BYTE2(v10);
    LOBYTE(v3) = BYTE2(v10) & 0x1F;
    if ( WORD1(v10) > 0xFF00u )
      break;
    if ( (unsigned __int8)v3 > 0x10u )
      break;
    WORD1(v10) += 33;
    v7 = v10;
  }
  while ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + a1), v10, v6) );
  v8 = v7 >> 16;
  if ( (unsigned __int16)v8 > 0xFF00u || (v8 & 0x1F) > 0x10 )
    RtlpHpLfhBucketActivate(a1, a2, v3);
  if ( (*(_QWORD *)(v5 + a1) & 1) == 0 )
    return *(_QWORD *)(v5 + a1);
  return v2;
}
