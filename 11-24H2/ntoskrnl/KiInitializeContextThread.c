/*
 * XREFs of KiInitializeContextThread @ 0x1403FF414
 * Callers:
 *     KiStartIdleThread @ 0x1405C07E0 (KiStartIdleThread.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     KxContextToKframes @ 0x1403FF870 (KxContextToKframes.c)
 *     RtlLocateSupervisorFeature @ 0x1403FFE20 (RtlLocateSupervisorFeature.c)
 *     ExBuildPasidMsrForThread @ 0x1403FFF2C (ExBuildPasidMsrForThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *ExtendedFeature; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _QWORD *v15; // rbx
  _QWORD *v16; // r11
  __int64 v17; // rax
  _QWORD *v18; // r13
  unsigned int *v19; // r9
  unsigned __int64 *v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r11
  _BYTE v29[48]; // [rsp+30h] [rbp-518h] BYREF
  int v30; // [rsp+60h] [rbp-4E8h]
  __int16 v31; // [rsp+68h] [rbp-4E0h]
  __int16 v32; // [rsp+72h] [rbp-4D6h]

  v2 = *(_QWORD *)(a1 + 40);
  ExtendedFeature = 0LL;
  v5 = (v2 - (unsigned int)KiXSaveAreaLength) & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = v5;
  if ( (_DWORD)KiIptSaveAreaLength )
    *(_QWORD *)(a1 + 1112) = v5 + MEMORY[0xFFFFF78000000718];
  v8 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(a1 + 1064) & 0x40000;
  if ( v8 )
    v5 = *(_QWORD *)(a1 + 96);
  v9 = (_QWORD *)(v7 - 80);
  memset_0(v9, 0, v2 - (_QWORD)v9);
  *v9 = v2;
  v9[1] = v2 - (unsigned int)KeKernelStackSize;
  *(_DWORD *)(v5 + 24) = 8064;
  v10 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    v11 = 9LL;
    v12 = v29;
    v13 = *(_OWORD **)(a2 + 32);
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    v15 = v9 - 90;
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v30 = v30 & 6 | 0x100001;
    v31 = 51;
    v32 = 43;
    memset_0(v9 - 90, 0, 0x140uLL);
    memset_0(v9 - 50, 0, 0x190uLL);
    *((_BYTE *)v9 - 357) = 1;
    KxContextToKframes((_DWORD)v9 - 400, (_DWORD)v9 - 720, (unsigned int)v29, v30, 1);
    v16 = v9 - 50;
    *v15 = *(_QWORD *)(a2 + 24);
    v15[1] = *(_QWORD *)(a2 + 16);
    v17 = *(_QWORD *)(a2 + 8);
    v18 = v9 - 98;
    v15[2] = v17;
    v15[39] = &KiStartUserThreadReturn;
    *(v9 - 91) = &KiStartUserThread;
    *(_WORD *)v5 = 639;
    *((_DWORD *)v9 - 89) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v5 + 512) = 1LL;
    v19 = (unsigned int *)(a1 + 116);
    v20 = (unsigned __int64 *)(a1 + 592);
    v21 = 2048LL;
    v22 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 0x801;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v22 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 1;
    *v20 = v22;
  }
  else
  {
    v19 = (unsigned int *)(a1 + 116);
    *(v9 - 6) = *(_QWORD *)(a2 + 24);
    v20 = (unsigned __int64 *)(a1 + 592);
    v21 = 2048LL;
    *(v9 - 5) = *(_QWORD *)(a2 + 16);
    v16 = 0LL;
    *(v9 - 4) = *(_QWORD *)(a2 + 8);
    *(v9 - 7) = KxStartSystemThread;
    *(v9 - 1) = 0LL;
    v26 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL | 0x800;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v26 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL;
    *v20 = v26;
    v27 = *(_DWORD *)(a2 + 60);
    v18 = v9 - 14;
    if ( (v27 & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 562) = 0;
      goto LABEL_14;
    }
  }
  *(_BYTE *)(a1 + 562) = 1;
LABEL_14:
  *((_BYTE *)v18 + 40) = 1;
  result = (__int64)(v16 + 16);
  v18[6] = v16 + 16;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = MEMORY[0xFFFFF780000003EC];
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = 0x8000000000000003uLL;
      *(_QWORD *)(v5 + 520) = 0x8000000000000003uLL;
    }
  }
  v24 = 0LL;
  v25 = ((unsigned __int64)*v19 >> 9) & 0x800;
  if ( _bittest64(&KeFeatureBits, 0x38u) )
  {
    if ( MEMORY[0xFFFFF780000003D8] )
    {
      result = *(unsigned int *)v20;
      if ( (result & 0x400) != 0 )
      {
        result = ExBuildPasidMsrForThread(a1);
        v24 = result;
        if ( (int)result < 0 )
          v25 |= v28;
      }
    }
  }
  if ( v25 )
  {
    *(_QWORD *)(v5 + 512) |= v25;
    *(_QWORD *)(v5 + 520) |= v25;
    if ( (v25 & v21) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 48) & 0x100040) == 0x100040 )
        ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(v10 + 1232), 0xBu, 0LL);
      result = (__int64)RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v5 + 512), 0xBu, 0LL);
      *(_OWORD *)result = *ExtendedFeature;
    }
  }
  if ( (v25 & 0x400) != 0 )
  {
    result = (__int64)RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v5 + 512), 0xAu, 0LL);
    *(_QWORD *)result = v24;
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 88) = v18;
  *(_QWORD *)(a1 + 96) = v5;
  return result;
}
