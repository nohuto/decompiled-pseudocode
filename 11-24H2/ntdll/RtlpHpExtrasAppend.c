/*
 * XREFs of RtlpHpExtrasAppend @ 0x18009EC10
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009EE8C (RtlpHpLargeAllocGetMetadata.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasAppend(
        _RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __m128i *v7; // rdx
  __m128i *v9; // rsi
  unsigned __int64 v10; // rsi
  int v11; // eax
  _RTL_SRWLOCK *v12; // r9
  unsigned __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  char v17; // r11
  unsigned __int8 v18; // dl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v22; // rax
  __int64 Metadata; // rbx
  __int64 v24; // rdx
  unsigned int v25; // ecx

  v7 = (__m128i *)(a2 + a3);
  if ( (a6 & 0x2000) != 0 )
    *v7 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  if ( (a6 & 0x20000F08) == 0 )
    return 0LL;
  v9 = v7 + 1;
  if ( (a6 & 0x2000) == 0 )
    v9 = v7;
  v10 = ((unsigned __int64)&v9->m128i_u64[1] + 7) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_OWORD *)v10 = 0LL;
  *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & 0xF | (16 * (BYTE1(a6) & 0xFE));
  *(_BYTE *)(v10 + 3) = a5 >> 4;
  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v22 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_1801CD918) >> 20));
    if ( !v22 || (v11 = v22 - 1, v11 == 2) )
    {
      RtlAcquireSRWLockShared(a1 + 8);
      Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
      RtlReleaseSRWLockShared(a1 + 8);
      *(_QWORD *)(Metadata + 32) |= 1uLL;
      return v10;
    }
  }
  v12 = &a1[24 * v11 + 40];
  v13 = a2 & v12->Value;
  if ( (_RTL_SRWLOCK *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v13 + 0x10) ^ v13) != v12
    || (v14 = (char)v12[1].0,
        v15 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v14),
        v16 = -32LL * *(unsigned __int8 *)(v15 + 26) + v15,
        v17 = *(_BYTE *)(v16 + 24),
        (v17 & 3) != 3)
    || v13 + ((__int64)(v16 - v13) >> 5 << v14) != a2 && (v17 & 0xCu) < 8 )
  {
    v16 = 0LL;
  }
  v18 = *(_BYTE *)(v16 + 24) & 0xC;
  if ( v18 < 8u )
  {
    *(_WORD *)(v16 + 8) |= 1u;
    return v10;
  }
  v19 = (v16 & v12->Value) + ((__int64)(v16 - (v16 & v12->Value)) >> 5 << *(_BYTE *)&v12[1].0);
  if ( v18 == 8 )
  {
    v20 = (unsigned __int16)qword_1801CCEC8 ^ *(unsigned __int16 *)(v19 + 40) ^ (unsigned __int64)(unsigned __int16)(v19 >> 12);
    *(_WORD *)(v20 + a2 - 2) |= 0x4000u;
    return v10;
  }
  v24 = a2 - 16;
  if ( (*(_BYTE *)(v12[4].Value + 4) & 1) != 0 )
  {
    if ( (a2 & 0xFFF) == 0 )
      v24 = a2 - 32;
    v25 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - 16;
    if ( ((v24 + 32) & 0xFFF) == 0 )
      v25 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - 32;
  }
  else
  {
    v25 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - 16;
  }
  *(_WORD *)(v25 + a2 - 2) |= 0x4000u;
  return v10;
}
