/*
 * XREFs of RtlpCrc32c @ 0x18011B0E0
 * Callers:
 *     RtlCrc32 @ 0x1800F3610 (RtlCrc32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCrc32c(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned int i; // r8d
  unsigned __int8 v6; // al
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al

  v3 = a2;
  for ( i = ~a3; v3; --v3 )
  {
    if ( ((unsigned __int8)a1 & 7) == 0 )
      break;
    v6 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    i = _mm_crc32_u8(i, v6);
  }
  if ( v3 >= 0x40 )
  {
    v7 = v3 >> 6;
    v3 += -64LL * (v3 >> 6);
    do
    {
      v8 = *a1;
      v9 = a1[1];
      v10 = a1[2];
      v11 = a1[3];
      v12 = a1[4];
      v13 = a1[5];
      v14 = a1[6];
      v15 = a1[7];
      a1 += 8;
      i = _mm_crc32_u64(
            _mm_crc32_u64(
              _mm_crc32_u64(
                _mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(i, v8), v9), v10), v11), v12),
                v13),
              v14),
            v15);
      --v7;
    }
    while ( v7 );
  }
  if ( v3 >= 8 )
  {
    v16 = v3 >> 3;
    v3 += -8LL * (v3 >> 3);
    do
    {
      v17 = *a1++;
      i = _mm_crc32_u64(i, v17);
      --v16;
    }
    while ( v16 );
  }
  for ( ; v3; --v3 )
  {
    v18 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    i = _mm_crc32_u8(i, v18);
  }
  return ~i;
}
