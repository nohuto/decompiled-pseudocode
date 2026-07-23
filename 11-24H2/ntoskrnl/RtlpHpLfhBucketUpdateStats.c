/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x1404BF608
 * Callers:
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530 (RtlpHpLfhBucketCheckAndUpdate.c)
 * Callees:
 *     RtlpHpLfhBucketActivate @ 0x1406038AC (RtlpHpLfhBucketActivate.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 v5; // rsi
  __int64 v6; // rbx
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h]

  v3 = a2;
  v5 = a2;
  v6 = 0LL;
  do
  {
    v7 = *(_QWORD *)(a1 + 8 * v3 + 448);
    v8 = v7;
    v11 = v7;
    if ( (v7 & 1) == 0 )
      break;
    if ( a3 )
    {
      if ( WORD1(v7) > 0xFF00u || (BYTE2(v7) & 0x1Fu) > 0x10 )
        goto LABEL_12;
      WORD1(v11) = WORD1(v7) + 33;
      goto LABEL_9;
    }
    if ( WORD1(v7) > 1u )
    {
      WORD1(v11) = WORD1(*(_QWORD *)(a1 + 8 * v3 + 448)) - 1;
LABEL_9:
      v8 = v11;
    }
  }
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v3 + 448), v8, v7) != v7 );
  if ( !a3 )
    goto LABEL_15;
LABEL_12:
  v9 = v8 >> 16;
  if ( (v9 & 0x1F) > 0x10 || (unsigned __int16)v9 > 0xFF00u )
    RtlpHpLfhBucketActivate(a1, (unsigned int)v3);
LABEL_15:
  if ( (*(_QWORD *)(a1 + 8 * v5 + 448) & 1) == 0 )
    return *(_QWORD *)(a1 + 8 * v5 + 448);
  return v6;
}
