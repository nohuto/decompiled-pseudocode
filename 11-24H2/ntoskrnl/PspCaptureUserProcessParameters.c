/*
 * XREFs of PspCaptureUserProcessParameters @ 0x1409DEA90
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x1409DE9E0 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x1409DEA20 (PspCaptureProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspCaptureAndValidateUnicodeString @ 0x1409DF2FC (PspCaptureAndValidateUnicodeString.c)
 *     PspCopyUnicodeString @ 0x1409DF368 (PspCopyUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x1409DF3E0 (PspValidateEnvironmentBlock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCaptureUserProcessParameters(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  _OWORD *v6; // rsi
  unsigned int v8; // edi
  char *v9; // rcx
  size_t v10; // rax
  __int64 result; // rax
  char *ServerSiloGlobals; // rax
  __int128 v13; // xmm6
  unsigned __int16 epi16; // r14
  unsigned __int16 v15; // r12
  void *v16; // xmm0_8
  char v17; // r9
  _DWORD *v18; // rdi
  unsigned __int64 v19; // r13
  signed int v20; // r14d
  __int64 Pool2; // rax
  _DWORD *v22; // rdi
  _OWORD *v23; // rcx
  __int64 v24; // rax
  void *v25; // rsi
  bool v26; // zf
  char *v27; // rsi
  size_t v28; // r13
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  void *v31; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-120h]
  __int128 v33; // [rsp+30h] [rbp-118h]
  void *v34; // [rsp+40h] [rbp-108h]
  size_t Size; // [rsp+48h] [rbp-100h] BYREF
  __int64 v36; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-F0h]
  void *Src; // [rsp+60h] [rbp-E8h]
  __int128 v39; // [rsp+68h] [rbp-E0h] BYREF
  __int128 v40; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v42; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v47; // [rsp+E8h] [rbp-60h] BYREF

  v6 = (_OWORD *)a2;
  v36 = a3;
  v43 = 0LL;
  v39 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  Src = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  LODWORD(v31) = v8;
  v32 = v8;
  if ( ((v8 ^ 1) & 0xF4010E11) != 0 )
    return 3221225485LL;
  if ( (v8 & ((v8 & 0xFF000060) - 1) & 0x1000060) != 0 )
    return 3221225485LL;
  v9 = *(char **)(a2 + 128);
  Src = v9;
  v10 = *(_QWORD *)(a2 + 1008);
  Size = v10;
  if ( !v10 || (v10 & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int64)&v9[v10] > 0x7FFFFFFF0000LL || &v9[v10] < v9 )
    LODWORD(v31) = v32;
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a5);
    v39 = *(_OWORD *)(ServerSiloGlobals + 968);
    v13 = PspProtectedRuntimeData;
    v33 = PspProtectedRuntimeData;
    epi16 = _mm_extract_epi16((__m128i)PspProtectedRuntimeData, 1);
    v15 = _mm_cvtsi128_si32((__m128i)PspProtectedRuntimeData);
    v16 = (void *)_mm_srli_si128((__m128i)PspProtectedRuntimeData, 8).m128i_u64[0];
    if ( (v17 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 124);
      Size = *((unsigned __int16 *)ServerSiloGlobals + 493);
    }
    v34 = v16;
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v39);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v39 >= 0x208u )
      return 3221225485LL;
    WORD1(v39) = 520;
    v33 = v6[14];
    v34 = (void *)*((_QWORD *)&v33 + 1);
    if ( *((_QWORD *)&v33 + 1) )
    {
      v15 = v33;
      epi16 = v33;
      WORD1(v33) = v33;
      if ( (_WORD)v33
        && (*((_QWORD *)&v33 + 1) + (unsigned __int64)(unsigned __int16)v33 > 0x7FFFFFFF0000LL
         || *((_QWORD *)&v33 + 1) + (unsigned __int64)(unsigned __int16)v33 < *((_QWORD *)&v33 + 1)) )
      {
        LODWORD(v31) = v32;
        v34 = (void *)*((_QWORD *)&v33 + 1);
        epi16 = WORD1(v33);
        v15 = v33;
      }
    }
    else
    {
      v15 = v33;
      if ( (_WORD)v33 )
        return 3221225485LL;
      LODWORD(v33) = 0;
      epi16 = 0;
    }
    v13 = v33;
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 5, &v41);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 6, &v42);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 7, &v43);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 11, &v44);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 12, &v45);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 13, &v46);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v18 = (_DWORD *)(a3 + 4);
    if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    {
      v40 = *(_OWORD *)(a3 + 8);
      goto LABEL_27;
    }
  }
  else
  {
    v18 = (_DWORD *)(a3 + 4);
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 65, &v40);
  if ( (int)result < 0 )
    return result;
LABEL_27:
  if ( a3 && (*v18 & 4) != 0 )
    v47 = *(_OWORD *)(a3 + 24);
  else
    v47 = 0LL;
  v19 = (epi16
       + WORD1(v41)
       + WORD1(v42)
       + WORD1(v43)
       + WORD1(v44)
       + WORD1(v45)
       + WORD1(v46)
       + WORD1(v40)
       + (unsigned __int64)WORD1(v47)
       + WORD1(v39)
       + 1097LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v37 = v19;
  if ( a3 && (*v18 & 1) != 0 )
  {
    v29 = *(unsigned int *)(a3 + 48);
    v30 = (v19 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v30 + 8 * v29;
    if ( v19 < v30 )
      return 3221225485LL;
    v37 = v30 + 8 * v29;
  }
  v20 = v19 + Size < v19 ? 0xC0000095 : 0;
  if ( v19 + Size < v19 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(0x41uLL);
  v22 = (_DWORD *)Pool2;
  v36 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v23 = (_OWORD *)Pool2;
  v24 = 8LL;
  do
  {
    *v23 = *v6;
    v23[1] = v6[1];
    v23[2] = v6[2];
    v23[3] = v6[3];
    v23[4] = v6[4];
    v23[5] = v6[5];
    v23[6] = v6[6];
    v23 += 8;
    *(v23 - 1) = v6[7];
    v6 += 8;
    --v24;
  }
  while ( v24 );
  *v23 = *v6;
  v23[1] = v6[1];
  v23[2] = v6[2];
  v23[3] = v6[3];
  *((_QWORD *)v23 + 8) = *((_QWORD *)v6 + 8);
  v25 = v34;
  if ( v20 < 0 )
    goto LABEL_35;
  v22[2] = (_DWORD)v31;
  v22[1] = v19;
  *v22 = v19;
  v31 = v22 + 274;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 8) != 0 )
    v22[271] = *(_DWORD *)(a3 + 52);
  v20 = PspCopyUnicodeString(&v39, v22 + 14, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v41, v22 + 20, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v42, v22 + 24, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v43, v22 + 28, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v44, v22 + 44, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v45, v22 + 48, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  v20 = PspCopyUnicodeString(&v46, v22 + 52, &v31);
  if ( v20 < 0 )
    goto LABEL_35;
  PspCopyUnicodeString(&v40, v22 + 260, &v31);
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
  {
    PspCopyUnicodeString(&v47, v22 + 264, &v31);
    v22[272] = *(_DWORD *)(a3 + 56);
  }
  else
  {
    *((_OWORD *)v22 + 66) = 0LL;
  }
  *((_OWORD *)v22 + 14) = v13;
  v26 = v25 == 0LL;
  v27 = (char *)v31;
  if ( !v26 )
  {
    *((_QWORD *)v22 + 29) = v31;
    memmove(v27, v34, v15);
    if ( v27 )
    {
      v27 += v15;
      v31 = v27;
    }
  }
  *((_QWORD *)v22 + 134) = 0LL;
  v22[270] = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
    {
      v27 = (char *)((unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v31 = v27;
      *((_QWORD *)v22 + 134) = v27;
      v22[270] = *(_DWORD *)(a3 + 48);
      memmove(v27, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v27 )
      {
        v27 += 8 * *(unsigned int *)(a3 + 48);
        v31 = v27;
      }
    }
  }
  v28 = (char *)v22 - v27 + v19;
  if ( v28 )
  {
    memset_0(v27, 0, v28);
    if ( v27 )
    {
      v27 += v28;
      v31 = v27;
    }
  }
  memmove(v27, Src, Size);
  if ( (a4 & 3) == 1 || (v20 = PspValidateEnvironmentBlock(v27, &Size), v20 >= 0) )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_QWORD *)v22 + 2) = 0LL;
      *((_QWORD *)v22 + 4) = 0LL;
      *((_QWORD *)v22 + 5) = 0LL;
      *((_QWORD *)v22 + 6) = 0LL;
    }
    *((_QWORD *)v22 + 16) = v27;
    *((_QWORD *)v22 + 126) = Size;
    *((_QWORD *)v22 + 127) = 0LL;
    *a1 = v22;
    return 0LL;
  }
  else
  {
LABEL_35:
    ExFreePoolWithTag(v22, 0);
    return (unsigned int)v20;
  }
}
