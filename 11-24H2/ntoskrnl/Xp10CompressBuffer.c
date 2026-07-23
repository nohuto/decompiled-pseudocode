/*
 * XREFs of Xp10CompressBuffer @ 0x1407899D4
 * Callers:
 *     RtlCompressBufferXp10 @ 0x140787FE0 (RtlCompressBufferXp10.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     Xp10ComputeAndWriteCrc @ 0x140789F84 (Xp10ComputeAndWriteCrc.c)
 *     Xp10ExecuteHuffmanEncode @ 0x14078A7E0 (Xp10ExecuteHuffmanEncode.c)
 *     Xp10ExecuteLz77PassMinMatchLen3 @ 0x14078AC7C (Xp10ExecuteLz77PassMinMatchLen3.c)
 *     Xp10ExecuteLz77PassMinMatchLen4 @ 0x14078B3D4 (Xp10ExecuteLz77PassMinMatchLen4.c)
 *     Xp10ValidateParametersAndFillFrameHeader @ 0x14078CB44 (Xp10ValidateParametersAndFillFrameHeader.c)
 */

__int64 __fastcall Xp10CompressBuffer(
        _WORD *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        size_t Size,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v12; // r12
  __int64 result; // rax
  int v14; // ebx
  int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // r10d
  unsigned int v18; // esi
  unsigned int v19; // r15d
  unsigned int v20; // eax
  unsigned int v21; // r10d
  int v22; // r8d
  int matched; // eax
  unsigned int v24; // r11d
  int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // edi
  _BYTE *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r9d
  _BYTE *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // eax
  _BYTE *v36; // r9
  int v37; // ecx
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // edx
  unsigned __int64 v43; // rax
  int v44; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-3Dh]
  __int64 v46; // [rsp+58h] [rbp-31h] BYREF
  __int128 v47; // [rsp+68h] [rbp-21h] BYREF
  __int128 v48; // [rsp+78h] [rbp-11h] BYREF
  __int128 v49; // [rsp+88h] [rbp-1h]

  v7 = a7;
  v8 = Size;
  v44 = 0;
  LODWORD(v46) = 0;
  WORD2(v46) = 0;
  v48 = 0LL;
  memset_0((void *)(a7 + 24), 0, 0x12508uLL);
  LODWORD(Size) = 0;
  v12 = v7 + 75040;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v45 = 1 << (*a1 & 0x1F);
  LODWORD(a7) = 2 * v45;
  memset_0(a4, 0, v8);
  result = Xp10ValidateParametersAndFillFrameHeader(a1, &v46);
  v14 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)a4 = v46;
  a4[2] = WORD2(v46);
  *(_QWORD *)&v47 = a4;
  v15 = 0x1FFFFFFF;
  DWORD2(v47) = 48;
  if ( v8 <= 0x1FFFFFFF )
    v15 = v8;
  v16 = 8 * v15;
  v17 = 0;
  v18 = 0;
  HIDWORD(v47) = v16;
  v19 = 0;
  v46 = 0LL;
  while ( v19 < a3 )
  {
    memset_0((void *)(v7 + 28), 0, 0xB00uLL);
    memset_0((void *)(v7 + 2844), 0, 0x400uLL);
    v20 = a3 - v19;
    if ( a3 - v19 >= v45 )
      v20 = v45;
    v21 = v20;
    v46 = v20;
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
    v21 = v46;
    v14 = matched;
LABEL_13:
    if ( v14 < 0 )
      return (unsigned int)v14;
    v49 = v47;
    if ( DWORD2(v47) + 32 > v16 )
      return 3221225507LL;
    DWORD2(v47) += 32;
    result = Xp10ExecuteHuffmanEncode(
               v7,
               v19 + (unsigned int)a2,
               v21,
               (int)v7 + 75040,
               Size,
               (__int64)&v47,
               (__int64)&v44);
    v14 = result;
    if ( (int)result < 0 )
      return result;
    v17 = DWORD2(v49);
    v24 = 32;
    v18 = HIDWORD(v49);
    v25 = BYTE8(v49) & 7;
    v46 = v49;
    v26 = ((v44 & 1) << 29) | (DWORD2(v47) - DWORD2(v49)) & 0xFFFFFFF;
    v27 = 8 - v25;
    v28 = (_BYTE *)(v49 + ((unsigned __int64)DWORD2(v49) >> 3));
    if ( (unsigned int)(DWORD2(v49) + 32) <= HIDWORD(v49)
      || (v24 = HIDWORD(v49) - DWORD2(v49), HIDWORD(v49) != DWORD2(v49)) )
    {
      v29 = v27;
      if ( v27 >= v24 )
        v29 = v24;
      *v28 |= ((unsigned __int8)(BYTE8(v47) - BYTE8(v49)) & (unsigned __int8)byte_140033A40[4 * v29]) << v25;
      v30 = v24 - (unsigned int)v29;
      v31 = v26 >> v27;
      v32 = v28 + 1;
      if ( (unsigned int)v30 >= 8 )
      {
        v33 = (unsigned __int64)(unsigned int)v30 >> 3;
        do
        {
          *v32 = v31;
          v30 = (unsigned int)(v30 - 8);
          v31 >>= 8;
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      if ( (_DWORD)v30 )
        *v32 |= (unsigned __int8)v31 & byte_140033A40[4 * v30];
      v17 += v24;
    }
    v19 += v45;
    v16 = HIDWORD(v47);
  }
  v34 = v17 - 1;
  v35 = v17;
  v36 = (_BYTE *)(v46 + ((unsigned __int64)(v17 - 1) >> 3));
  v37 = ((_BYTE)v17 - 1) & 7;
  v38 = 1;
  v39 = 8 - v37;
  if ( v35 <= v18 || (v38 = v18 - v34, v18 != v34) )
  {
    v40 = v39;
    if ( v39 >= v38 )
      v40 = v38;
    v41 = v38 - (unsigned int)v40;
    *v36++ |= (byte_140033A40[4 * v40] & 1) << v37;
    v42 = 1u >> v39;
    if ( (unsigned int)v41 >= 8 )
    {
      v43 = (unsigned __int64)(unsigned int)v41 >> 3;
      do
      {
        *v36 = v42;
        v41 = (unsigned int)(v41 - 8);
        v42 >>= 8;
        ++v36;
        --v43;
      }
      while ( v43 );
    }
    if ( (_DWORD)v41 )
      *v36 |= (unsigned __int8)v42 & byte_140033A40[4 * v41];
  }
  DWORD2(v48) = 0;
  *(_QWORD *)&v48 = a2;
  HIDWORD(v48) = a3;
  result = Xp10ComputeAndWriteCrc(a1, &v48, &v47, v36);
  if ( (int)result >= 0 )
  {
    *a6 = DWORD2(v47) >> 3;
    return (unsigned int)result;
  }
  return result;
}
