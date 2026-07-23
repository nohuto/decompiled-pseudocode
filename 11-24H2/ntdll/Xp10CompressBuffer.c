/*
 * XREFs of Xp10CompressBuffer @ 0x18014CD30
 * Callers:
 *     RtlCompressBufferXp10 @ 0x18014B700 (RtlCompressBufferXp10.c)
 * Callees:
 *     Xp10ComputeAndWriteCrc @ 0x18014D2F8 (Xp10ComputeAndWriteCrc.c)
 *     Xp10ExecuteHuffmanEncode @ 0x18014D41C (Xp10ExecuteHuffmanEncode.c)
 *     Xp10ExecuteLz77PassMinMatchLen3 @ 0x18014D8B0 (Xp10ExecuteLz77PassMinMatchLen3.c)
 *     Xp10ExecuteLz77PassMinMatchLen4 @ 0x18014DFEC (Xp10ExecuteLz77PassMinMatchLen4.c)
 *     Xp10ValidateParametersAndFillFrameHeader @ 0x18014E7EC (Xp10ValidateParametersAndFillFrameHeader.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10CompressBuffer(
        _WORD *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        size_t Size,
        unsigned __int32 *a6,
        __int64 a7)
{
  __int64 v7; // r14
  unsigned int v9; // esi
  __int64 v12; // r12
  __int64 result; // rax
  int v14; // ebx
  int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // r10d
  unsigned int v18; // esi
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v21; // r10d
  int v22; // r8d
  int matched; // eax
  __m128i v24; // xmm6
  unsigned int v25; // r11d
  unsigned int v26; // r9d
  int v27; // ecx
  _BYTE *v28; // r8
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // r9d
  _BYTE *v33; // r8
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // eax
  _BYTE *v37; // r9
  int v38; // ecx
  unsigned int v39; // r8d
  unsigned int v40; // r10d
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  int v45; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-3Dh]
  __int64 v47; // [rsp+58h] [rbp-31h] BYREF
  __m128i v48; // [rsp+68h] [rbp-21h] BYREF
  __int128 v49; // [rsp+78h] [rbp-11h] BYREF

  v7 = a7;
  v9 = Size;
  v45 = 0;
  LODWORD(v47) = 0;
  WORD2(v47) = 0;
  v49 = 0LL;
  memset_thunk_772440563353939046((void *)(a7 + 24), 0, 0x12508uLL);
  LODWORD(Size) = 0;
  v12 = v7 + 75040;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v46 = 1 << (*a1 & 0x1F);
  LODWORD(a7) = 2 * v46;
  memset_thunk_772440563353939046(a4, 0, v9);
  result = Xp10ValidateParametersAndFillFrameHeader(a1, &v47);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)a4 = v47;
  a4[2] = WORD2(v47);
  v48.m128i_i64[0] = (__int64)a4;
  v15 = 0x1FFFFFFF;
  v48.m128i_i32[2] = 48;
  if ( v9 <= 0x1FFFFFFF )
    v15 = v9;
  v16 = 8 * v15;
  v17 = 0;
  v18 = 0;
  v48.m128i_i32[3] = v16;
  v19 = 0;
  v47 = 0LL;
  while ( v19 < a3 )
  {
    memset_thunk_772440563353939046((void *)(v7 + 28), 0, 0xB00uLL);
    memset_thunk_772440563353939046((void *)(v7 + 2844), 0, 0x400uLL);
    v20 = a3 - v19;
    if ( a3 - v19 >= v46 )
      v20 = v46;
    v21 = v20;
    v47 = v20;
    v22 = a2 + v19 + v20;
    if ( (((unsigned __int16)*a1 >> 5) & 7) == 3 )
    {
      matched = Xp10ExecuteLz77PassMinMatchLen3(
                  v7,
                  v19 + (unsigned int)a2,
                  v22,
                  (int)v7 + 75040,
                  v12 + (unsigned int)a7,
                  (__int64)&Size);
    }
    else
    {
      if ( (((unsigned __int16)*a1 >> 5) & 7) != 4 )
        goto LABEL_13;
      matched = Xp10ExecuteLz77PassMinMatchLen4(
                  v7,
                  v19 + (unsigned int)a2,
                  v22,
                  (int)v7 + 75040,
                  v12 + (unsigned int)a7,
                  (__int64)&Size);
    }
    v21 = v47;
    v14 = matched;
LABEL_13:
    if ( v14 < 0 )
      return (unsigned int)v14;
    v24 = v48;
    if ( v48.m128i_i32[2] + 32 > v16 )
      return 3221225507LL;
    v48.m128i_i32[2] += 32;
    result = Xp10ExecuteHuffmanEncode(
               v7,
               v19 + (unsigned int)a2,
               v21,
               (int)v7 + 75040,
               Size,
               (__int64)&v48,
               (__int64)&v45);
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
    v25 = 32;
    v26 = ((v45 & 1) << 29) | (v48.m128i_i32[2] - v17) & 0xFFFFFFF;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12));
    v47 = v24.m128i_i64[0];
    v27 = v17 & 7;
    v28 = (_BYTE *)(v24.m128i_i64[0] + ((unsigned __int64)v17 >> 3));
    v29 = 8 - v27;
    if ( v17 + 32 <= v18 || (v25 = v18 - v17, v18 != v17) )
    {
      v30 = v29;
      if ( v29 >= v25 )
        v30 = v25;
      *v28 |= ((unsigned __int8)(v48.m128i_i8[8] - v17) & (unsigned __int8)byte_1801847A8[4 * v30]) << v27;
      v31 = v25 - (unsigned int)v30;
      v32 = v26 >> v29;
      v33 = v28 + 1;
      if ( (unsigned int)v31 >= 8 )
      {
        v34 = (unsigned __int64)(unsigned int)v31 >> 3;
        do
        {
          *v33 = v32;
          v31 = (unsigned int)(v31 - 8);
          v32 >>= 8;
          ++v33;
          --v34;
        }
        while ( v34 );
      }
      if ( (_DWORD)v31 )
        *v33 |= (unsigned __int8)v32 & byte_1801847A8[4 * v31];
      v17 += v25;
    }
    v19 += v46;
    v16 = v48.m128i_u32[3];
  }
  v35 = v17 - 1;
  v36 = v17;
  v37 = (_BYTE *)(v47 + ((unsigned __int64)(v17 - 1) >> 3));
  v38 = ((_BYTE)v17 - 1) & 7;
  v39 = 1;
  v40 = 8 - v38;
  if ( v36 <= v18 || (v39 = v18 - v35, v18 != v35) )
  {
    v41 = v40;
    if ( v40 >= v39 )
      v41 = v39;
    v42 = v39 - (unsigned int)v41;
    *v37++ |= (byte_1801847A8[4 * v41] & 1) << v38;
    v43 = 1u >> v40;
    if ( (unsigned int)v42 >= 8 )
    {
      v44 = (unsigned __int64)(unsigned int)v42 >> 3;
      do
      {
        *v37 = v43;
        v42 = (unsigned int)(v42 - 8);
        v43 >>= 8;
        ++v37;
        --v44;
      }
      while ( v44 );
    }
    if ( (_DWORD)v42 )
      *v37 |= (unsigned __int8)v43 & byte_1801847A8[4 * v42];
  }
  DWORD2(v49) = 0;
  *(_QWORD *)&v49 = a2;
  HIDWORD(v49) = a3;
  result = Xp10ComputeAndWriteCrc(a1, &v49, &v48, v37);
  if ( (int)result >= 0 )
  {
    *a6 = (unsigned __int32)v48.m128i_i32[2] >> 3;
    return (unsigned int)result;
  }
  return result;
}
