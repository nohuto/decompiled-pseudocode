/*
 * XREFs of PspCaptureUserProcessParameters @ 0x1409D8840
 * Callers:
 *     PsCaptureUserProcessParameters @ 0x1409D8790 (PsCaptureUserProcessParameters.c)
 *     PspCaptureProcessParameters @ 0x1409D87D0 (PspCaptureProcessParameters.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PspCaptureAndValidateUnicodeString @ 0x1409D90AC (PspCaptureAndValidateUnicodeString.c)
 *     PspCopyUnicodeString @ 0x1409D9118 (PspCopyUnicodeString.c)
 *     PspValidateEnvironmentBlock @ 0x1409D9190 (PspValidateEnvironmentBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  ULONG_PTR v20; // rdx
  signed int v21; // r14d
  __int64 Pool2; // rax
  _DWORD *v23; // rdi
  _OWORD *v24; // rcx
  __int64 v25; // rax
  void *v26; // rsi
  bool v27; // zf
  char *v28; // rsi
  size_t v29; // r13
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  void *v32; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-120h]
  __int128 v34; // [rsp+30h] [rbp-118h]
  void *v35; // [rsp+40h] [rbp-108h]
  size_t Size; // [rsp+48h] [rbp-100h] BYREF
  __int64 v37; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-F0h]
  void *Src; // [rsp+60h] [rbp-E8h]
  __int128 v40; // [rsp+68h] [rbp-E0h] BYREF
  __int128 v41; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v42; // [rsp+88h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v48; // [rsp+E8h] [rbp-60h] BYREF

  v6 = (_OWORD *)a2;
  v37 = a3;
  v44 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  Src = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *(_DWORD *)(a2 + 8) & 0xFFFFBFFF;
  LODWORD(v32) = v8;
  v33 = v8;
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
    LODWORD(v32) = v33;
  if ( (a4 & 1) != 0 )
  {
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a5);
    v40 = *(_OWORD *)(ServerSiloGlobals + 968);
    v13 = PspProtectedRuntimeData;
    v34 = PspProtectedRuntimeData;
    epi16 = _mm_extract_epi16((__m128i)PspProtectedRuntimeData, 1);
    v15 = _mm_cvtsi128_si32((__m128i)PspProtectedRuntimeData);
    v16 = (void *)_mm_srli_si128((__m128i)PspProtectedRuntimeData, 8).m128i_u64[0];
    if ( (v17 & 2) == 0 )
    {
      Src = (void *)*((_QWORD *)ServerSiloGlobals + 124);
      Size = *((unsigned __int16 *)ServerSiloGlobals + 493);
    }
    v35 = v16;
  }
  else
  {
    result = PspCaptureAndValidateUnicodeString(a2 + 56, &v40);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned __int16)v40 >= 0x208u )
      return 3221225485LL;
    WORD1(v40) = 520;
    v34 = v6[14];
    v35 = (void *)*((_QWORD *)&v34 + 1);
    if ( *((_QWORD *)&v34 + 1) )
    {
      v15 = v34;
      epi16 = v34;
      WORD1(v34) = v34;
      if ( (_WORD)v34
        && (*((_QWORD *)&v34 + 1) + (unsigned __int64)(unsigned __int16)v34 > 0x7FFFFFFF0000LL
         || *((_QWORD *)&v34 + 1) + (unsigned __int64)(unsigned __int16)v34 < *((_QWORD *)&v34 + 1)) )
      {
        LODWORD(v32) = v33;
        v35 = (void *)*((_QWORD *)&v34 + 1);
        epi16 = WORD1(v34);
        v15 = v34;
      }
    }
    else
    {
      v15 = v34;
      if ( (_WORD)v34 )
        return 3221225485LL;
      LODWORD(v34) = 0;
      epi16 = 0;
    }
    v13 = v34;
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 5, &v42);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 6, &v43);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 7, &v44);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 11, &v45);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 12, &v46);
  if ( (int)result < 0 )
    return result;
  result = PspCaptureAndValidateUnicodeString(v6 + 13, &v47);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v18 = (_DWORD *)(a3 + 4);
    if ( (*(_DWORD *)(a3 + 4) & 2) != 0 )
    {
      v41 = *(_OWORD *)(a3 + 8);
      goto LABEL_27;
    }
  }
  else
  {
    v18 = (_DWORD *)(a3 + 4);
  }
  result = PspCaptureAndValidateUnicodeString(v6 + 65, &v41);
  if ( (int)result < 0 )
    return result;
LABEL_27:
  if ( a3 && (*v18 & 4) != 0 )
    v48 = *(_OWORD *)(a3 + 24);
  else
    v48 = 0LL;
  v19 = (epi16
       + WORD1(v42)
       + WORD1(v43)
       + WORD1(v44)
       + WORD1(v45)
       + WORD1(v46)
       + WORD1(v47)
       + WORD1(v41)
       + (unsigned __int64)WORD1(v48)
       + WORD1(v40)
       + 1097LL) & 0xFFFFFFFFFFFFFFFEuLL;
  v38 = v19;
  if ( a3 && (*v18 & 1) != 0 )
  {
    v30 = *(unsigned int *)(a3 + 48);
    v31 = (v19 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v19 = v31 + 8 * v30;
    if ( v19 >= v31 )
    {
      v38 = v31 + 8 * v30;
      goto LABEL_30;
    }
    return 3221225485LL;
  }
LABEL_30:
  v20 = -1LL;
  if ( v19 + Size >= v19 )
    v20 = v19 + Size;
  v21 = v19 + Size < v19 ? 0xC0000095 : 0;
  if ( v19 + Size < v19 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(0x41uLL, v20, 0x62507350u);
  v23 = (_DWORD *)Pool2;
  v37 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v24 = (_OWORD *)Pool2;
  v25 = 8LL;
  do
  {
    *v24 = *v6;
    v24[1] = v6[1];
    v24[2] = v6[2];
    v24[3] = v6[3];
    v24[4] = v6[4];
    v24[5] = v6[5];
    v24[6] = v6[6];
    v24 += 8;
    *(v24 - 1) = v6[7];
    v6 += 8;
    --v25;
  }
  while ( v25 );
  *v24 = *v6;
  v24[1] = v6[1];
  v24[2] = v6[2];
  v24[3] = v6[3];
  *((_QWORD *)v24 + 8) = *((_QWORD *)v6 + 8);
  v26 = v35;
  if ( v21 < 0 )
    goto LABEL_37;
  v23[2] = (_DWORD)v32;
  v23[1] = v19;
  *v23 = v19;
  v32 = v23 + 274;
  if ( a3 && (*(_DWORD *)(a3 + 4) & 8) != 0 )
    v23[271] = *(_DWORD *)(a3 + 52);
  v21 = PspCopyUnicodeString(&v40, v23 + 14, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v42, v23 + 20, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v43, v23 + 24, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v44, v23 + 28, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v45, v23 + 44, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v46, v23 + 48, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  v21 = PspCopyUnicodeString(&v47, v23 + 52, &v32);
  if ( v21 < 0 )
    goto LABEL_37;
  PspCopyUnicodeString(&v41, v23 + 260, &v32);
  if ( a3 && (*(_DWORD *)(a3 + 4) & 4) != 0 )
  {
    PspCopyUnicodeString(&v48, v23 + 264, &v32);
    v23[272] = *(_DWORD *)(a3 + 56);
  }
  else
  {
    *((_OWORD *)v23 + 66) = 0LL;
  }
  *((_OWORD *)v23 + 14) = v13;
  v27 = v26 == 0LL;
  v28 = (char *)v32;
  if ( !v27 )
  {
    *((_QWORD *)v23 + 29) = v32;
    memmove(v28, v35, v15);
    if ( v28 )
    {
      v28 += v15;
      v32 = v28;
    }
  }
  *((_QWORD *)v23 + 134) = 0LL;
  v23[270] = 0;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 4) & 1) != 0 )
    {
      v28 = (char *)((unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v32 = v28;
      *((_QWORD *)v23 + 134) = v28;
      v23[270] = *(_DWORD *)(a3 + 48);
      memmove(v28, *(const void **)(a3 + 40), 8LL * *(unsigned int *)(a3 + 48));
      if ( v28 )
      {
        v28 += 8 * *(unsigned int *)(a3 + 48);
        v32 = v28;
      }
    }
  }
  v29 = (char *)v23 - v28 + v19;
  if ( v29 )
  {
    memset_0(v28, 0, v29);
    if ( v28 )
    {
      v28 += v29;
      v32 = v28;
    }
  }
  memmove(v28, Src, Size);
  if ( (a4 & 3) == 1 || (v21 = PspValidateEnvironmentBlock(v28, &Size), v21 >= 0) )
  {
    if ( (a4 & 1) != 0 )
    {
      *((_QWORD *)v23 + 2) = 0LL;
      *((_QWORD *)v23 + 4) = 0LL;
      *((_QWORD *)v23 + 5) = 0LL;
      *((_QWORD *)v23 + 6) = 0LL;
    }
    *((_QWORD *)v23 + 16) = v28;
    *((_QWORD *)v23 + 126) = Size;
    *((_QWORD *)v23 + 127) = 0LL;
    *a1 = v23;
    return 0LL;
  }
  else
  {
LABEL_37:
    ExFreePoolWithTag(v23, 0);
    return (unsigned int)v21;
  }
}
