/*
 * XREFs of RtlpCrc32c @ 0x1404498E0
 * Callers:
 *     RtlCrc32 @ 0x1404493B0 (RtlCrc32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCrc32c(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned int i; // r8d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // al
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi

  v3 = a2;
  for ( i = ~a3; v3; --v3 )
  {
    if ( ((unsigned __int8)a1 & 7) == 0 )
      break;
    v10 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    i = _mm_crc32_u8(i, v10);
  }
  if ( v3 >= 0x40 )
  {
    v11 = v3 >> 6;
    v3 += -64LL * (v3 >> 6);
    do
    {
      v12 = *a1;
      v13 = a1[1];
      v14 = a1[2];
      v15 = a1[3];
      v16 = a1[4];
      v17 = a1[5];
      v18 = a1[6];
      v19 = a1[7];
      a1 += 8;
      i = _mm_crc32_u64(
            _mm_crc32_u64(
              _mm_crc32_u64(
                _mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(_mm_crc32_u64(i, v12), v13), v14), v15), v16),
                v17),
              v18),
            v19);
      --v11;
    }
    while ( v11 );
  }
  if ( v3 >= 8 )
  {
    v6 = v3 >> 3;
    v3 += -8LL * (v3 >> 3);
    do
    {
      v7 = *a1++;
      i = _mm_crc32_u64(i, v7);
      --v6;
    }
    while ( v6 );
  }
  for ( ; v3; --v3 )
  {
    v8 = *(_BYTE *)a1;
    a1 = (unsigned __int64 *)((char *)a1 + 1);
    i = _mm_crc32_u8(i, v8);
  }
  return ~i;
}
