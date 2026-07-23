/*
 * XREFs of RtlDecompressBuffer2Xp10 @ 0x1801032B8
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x18014B7A0 (RtlDecompressBufferXp10.c)
 * Callees:
 *     Xp10ExecuteHuffmanDecode @ 0x18010239C (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ScatteredReadBytes @ 0x180103508 (Xp10ScatteredReadBytes.c)
 *     Xp10ReadAndValidateCrc @ 0x18010358C (Xp10ReadAndValidateCrc.c)
 *     Xp10ScatteredCopyBits @ 0x180103660 (Xp10ScatteredCopyBits.c)
 *     Xp10ReadMtfHeader @ 0x18010386C (Xp10ReadMtfHeader.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x18011BC74 (Xp10ValidateFrameHeaderAndFillParameters.c)
 *     Xp10ScatteredNextBuffer @ 0x18011DF2C (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlDecompressBuffer2Xp10(
        _QWORD *a1,
        __int64 a2,
        char **a3,
        unsigned int a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  int *v7; // r14
  char *v8; // rdi
  char *v9; // r8
  char *v10; // r8
  int v11; // esi
  size_t v12; // r8
  size_t v13; // rbx
  __int64 result; // rax
  __int64 v15; // r14
  int v16; // ebx
  int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // edi
  int v23; // [rsp+28h] [rbp-69h] BYREF
  __int16 v24; // [rsp+2Ch] [rbp-65h]
  int v25; // [rsp+30h] [rbp-61h] BYREF
  __int16 v26; // [rsp+34h] [rbp-5Dh]
  __int64 v27; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-51h]
  unsigned int v29; // [rsp+48h] [rbp-49h]
  int v30; // [rsp+4Ch] [rbp-45h]
  char *v31; // [rsp+50h] [rbp-41h] BYREF
  char *v32; // [rsp+58h] [rbp-39h]
  __int64 v33; // [rsp+60h] [rbp-31h]
  __int64 v34; // [rsp+68h] [rbp-29h]
  char **v35; // [rsp+70h] [rbp-21h]
  __int64 v36; // [rsp+78h] [rbp-19h]
  _QWORD v37[2]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v38; // [rsp+98h] [rbp+7h]
  __int64 v39; // [rsp+A0h] [rbp+Fh]
  _QWORD *v40; // [rsp+A8h] [rbp+17h]
  __int64 v41; // [rsp+B0h] [rbp+1Fh]
  unsigned int v42; // [rsp+F0h] [rbp+5Fh] BYREF

  v42 = a4;
  v35 = a3;
  v30 = 0;
  v7 = &v25;
  v34 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v39 = 0LL;
  v38 = 0LL;
  v24 = 0;
  v23 = 0;
  v8 = *a3;
  v9 = a3[1];
  v36 = 1LL;
  v10 = &v9[(_QWORD)v8];
  v41 = 1LL;
  v37[0] = *a1;
  v37[1] = a1[1] + v37[0];
  v11 = 0;
  v25 = 0;
  v26 = 0;
  v32 = v10;
  v27 = -1LL;
  v40 = a1;
  while ( 1 )
  {
    v12 = v10 - v8;
    v13 = (unsigned int)(6 - v11);
    if ( v12 <= v13 )
      v13 = v12;
    memmove(v7, v8, v13);
    v11 += v13;
    v7 = (int *)((char *)v7 + v13);
    v31 = &v8[v13];
    if ( v11 == 6 )
      break;
    if ( !(unsigned int)Xp10ScatteredNextBuffer(&v31) )
      return 3221226050LL;
    v10 = v32;
    v8 = v31;
  }
  result = Xp10ValidateFrameHeaderAndFillParameters(&v25, &v23);
  if ( (int)result < 0 )
    return result;
  v15 = (__int64)a7;
  v16 = 0;
  *a7 = &v23;
  do
  {
    *(_OWORD *)(v15 + 8) = 0LL;
    while ( 1 )
    {
      v27 = -1LL;
      if ( v16 < 0 )
      {
        result = Xp10ReadAndValidateCrc(&v23, v37, &v27);
        *a6 = v37[0] + v38 - v40[2 * v39];
        return result;
      }
      v42 = 0;
      v17 = 32;
      v18 = v29;
      if ( v29 >= 0x20 )
      {
        v20 = v28;
      }
      else
      {
        v19 = Xp10ScatteredReadBytes(&v31, &v42, 4LL);
        v20 = ((unsigned __int64)v42 << v29) | v28;
        v18 = v29 + 8 * v19;
        v17 = 32;
        if ( v18 < 0x20 )
          v17 = v18;
      }
      v29 = v18 - v17;
      v16 = v20 & ((1LL << v17) - 1);
      v28 = v20 >> v17;
      if ( v17 != 32 )
        return 3221226050LL;
      v21 = v16 & 0xFFFFFFF;
      if ( (v16 & 0xFFFFFFFu) < 0x20 || (v16 & 0x10000000) != 0 )
        return 3221226050LL;
      v22 = v21 - 32;
      v27 = (unsigned int)(v21 - 32);
      if ( (v16 & 0x20000000) == 0 )
        break;
      if ( (v16 & 0x40000000) == 0 || (result = Xp10ReadMtfHeader(&v23, v15 + 8, &v27), (int)result >= 0) )
      {
        result = Xp10ExecuteHuffmanDecode((unsigned __int16 **)v15, (__int64)&v27, v37);
        if ( (int)result >= 0 )
          continue;
      }
      return result;
    }
  }
  while ( (v22 & 7) == 0 && (unsigned int)Xp10ScatteredCopyBits(v37, &v27, v22) == v22 );
  return 3221226050LL;
}
