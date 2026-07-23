/*
 * XREFs of KiInitializeContextThread @ 0x140262EF4
 * Callers:
 *     KiStartIdleThread @ 0x1405BF130 (KiStartIdleThread.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140262A60 (RtlLocateExtendedFeature2.c)
 *     KxContextToKframes @ 0x140263370 (KxContextToKframes.c)
 *     RtlLocateSupervisorFeature @ 0x140263920 (RtlLocateSupervisorFeature.c)
 *     ExBuildPasidMsrForThread @ 0x14064C888 (ExBuildPasidMsrForThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiInitializeContextThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *ExtendedFeature2; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  __int64 v10; // r11
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  unsigned int *v17; // r9
  unsigned __int64 *v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  _QWORD *v25; // [rsp+30h] [rbp-528h]
  __int64 v26; // [rsp+38h] [rbp-520h]
  _BYTE v27[48]; // [rsp+40h] [rbp-518h] BYREF
  int v28; // [rsp+70h] [rbp-4E8h]
  __int16 v29; // [rsp+78h] [rbp-4E0h]
  __int16 v30; // [rsp+82h] [rbp-4D6h]

  v2 = *(_QWORD *)(a1 + 40);
  ExtendedFeature2 = 0LL;
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
  v26 = v10;
  if ( v10 )
  {
    v11 = 9LL;
    v12 = v27;
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
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v28 = v28 & 6 | 0x100001;
    v15 = v9 - 90;
    v25 = v9 - 50;
    v29 = 51;
    v16 = v9 - 98;
    v30 = 43;
    memset_0(v9 - 90, 0, 0x140uLL);
    memset_0(v9 - 50, 0, 0x190uLL);
    *((_BYTE *)v9 - 357) = 1;
    KxContextToKframes((_DWORD)v9 - 400, (_DWORD)v9 - 720, (unsigned int)v27, v28, 1);
    *v15 = *(_QWORD *)(a2 + 24);
    v15[1] = *(_QWORD *)(a2 + 16);
    v15[2] = *(_QWORD *)(a2 + 8);
    v15[39] = &KiStartUserThreadReturn;
    *(v9 - 91) = &KiStartUserThread;
    *(_WORD *)v5 = 639;
    *((_DWORD *)v9 - 89) = 8064;
    if ( (KeFeatureBits & 0x800000) != 0 )
      *(_QWORD *)(v5 + 512) = 1LL;
    v17 = (unsigned int *)(a1 + 116);
    v10 = v26;
    v18 = (unsigned __int64 *)(a1 + 592);
    v19 = 2048LL;
    v20 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 0x801;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v20 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFDuLL | KeEnabledSupervisorXStateFeatures & 0x400 | 1;
    *v18 = v20;
  }
  else
  {
    v16 = v9 - 14;
    *(v9 - 6) = *(_QWORD *)(a2 + 24);
    v17 = (unsigned int *)(a1 + 116);
    v18 = (unsigned __int64 *)(a1 + 592);
    *(v9 - 5) = *(_QWORD *)(a2 + 16);
    v19 = 2048LL;
    *(v9 - 4) = *(_QWORD *)(a2 + 8);
    *(v9 - 7) = KxStartSystemThread;
    *(v9 - 1) = 0LL;
    v25 = 0LL;
    v24 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL | 0x800;
    if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
      v24 = v8 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL;
    *v18 = v24;
    if ( (*(_DWORD *)(a2 + 60) & 0x10) == 0 )
    {
      *(_BYTE *)(a1 + 562) = 0;
      goto LABEL_14;
    }
  }
  *(_BYTE *)(a1 + 562) = 1;
LABEL_14:
  result = (__int64)(v25 + 16);
  *((_BYTE *)v16 + 40) = 1;
  v16[6] = v25 + 16;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    result = MEMORY[0xFFFFF780000003EC];
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = 0x8000000000000003uLL;
      *(_QWORD *)(v5 + 520) = 0x8000000000000003uLL;
    }
  }
  v22 = 0LL;
  v23 = ((unsigned __int64)*v17 >> 9) & 0x800;
  if ( _bittest64(&KeFeatureBits, 0x38u) )
  {
    if ( MEMORY[0xFFFFF780000003D8] )
    {
      result = *(unsigned int *)v18;
      if ( (result & 0x400) != 0 )
      {
        result = ExBuildPasidMsrForThread(a1);
        v22 = result;
        if ( (int)result < 0 )
          v23 |= 0x400uLL;
      }
    }
  }
  if ( v23 )
  {
    *(_QWORD *)(v5 + 512) |= v23;
    *(_QWORD *)(v5 + 520) |= v23;
    if ( (v23 & v19) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 48) & 0x100040) == 0x100040 )
        ExtendedFeature2 = RtlLocateExtendedFeature2((_DWORD *)(v10 + 1232), 0xBu, 0xFFFFF780000003D8uLL, 0LL);
      result = (__int64)RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v5 + 512), 0xBu, 0LL);
      *(_OWORD *)result = *(_OWORD *)ExtendedFeature2;
    }
  }
  if ( (v23 & 0x400) != 0 )
  {
    result = (__int64)RtlLocateSupervisorFeature((PXSAVE_AREA_HEADER)(v5 + 512), 0xAu, 0LL);
    *(_QWORD *)result = v22;
  }
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)(a1 + 96) = v5;
  return result;
}
