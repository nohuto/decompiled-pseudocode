/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007CA00
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14007C920 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FFB50 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401166B0 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140133350 (-EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140194880 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227360 (-EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228AD0 (-EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228CD0 (-EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402292A0 (-EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007DA70 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007FE34 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJN@$0BIC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022CA34 (-Marshal@-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJN@.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BJB@$0BIB@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022CA64 (-Marshal@-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BJB@.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  char *v8; // rcx
  int v9; // eax
  char *v10; // rcx
  char *v11; // rcx
  int *v12; // r15
  int v13; // eax
  unsigned int v14; // eax
  unsigned int *v15; // rsi
  unsigned int *v16; // r14
  unsigned int *v17; // rsi
  unsigned int *v18; // r14
  char *v20; // rcx
  _DWORD *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  char *v25; // rcx
  char *v26; // rcx
  __int64 v27; // rax
  char *v28; // rcx
  char *v29; // rcx
  char *v30; // rcx
  char *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  char *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  char *v37; // rcx
  char *v38; // rcx
  char *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  char *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  char *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  char *v48; // rcx
  char *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  char *v52; // rcx
  char *v53; // rcx
  char *v54; // rcx
  char *v55; // rcx
  char *v56; // rcx
  char *v57; // rcx
  void *v58; // [rsp+60h] [rbp+40h] BYREF

  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitPendingRemoves(this, a2) )
  {
    return 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x2000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v58) )
      return 0;
    v28 = (char *)v58;
    *(_DWORD *)v58 = 12;
    *(_QWORD *)(v28 + 4) = 0LL;
    *((_DWORD *)v28 + 1) = 391;
    *((_DWORD *)v28 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v4 = *((_DWORD *)this + 4);
  }
  v5 = 1;
  if ( (v4 & 0x4000) != 0 )
  {
    v6 = *((_QWORD *)this + 22);
    v7 = 0LL;
    v58 = 0LL;
    while ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 16) & 0x10) == 0 )
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v58) )
          return 0;
        v8 = (char *)v58;
        *(_DWORD *)v58 = 24;
        *(_OWORD *)(v8 + 4) = 0LL;
        *((_DWORD *)v8 + 5) = 0;
        *((_DWORD *)v8 + 1) = 389;
        *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v8 + 3) = *(_DWORD *)(v6 + 32);
        if ( v7 )
          v9 = *(_DWORD *)(v7 + 32);
        else
          v9 = 0;
        *((_DWORD *)v8 + 4) = v9;
        v8[20] = 1;
        *(_DWORD *)(v6 + 16) |= 0x10u;
      }
      v7 = v6;
      v6 = *(_QWORD *)(v6 + 184);
    }
    *((_DWORD *)this + 4) &= ~0x4000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v58) )
      return 0;
    v10 = (char *)v58;
    *(_DWORD *)v58 = 24;
    *(_OWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 1) = 405;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v10 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)v10 + 4) = *((_DWORD *)this + 19);
    *((_DWORD *)v10 + 5) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x80u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x200000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v58) )
      return 0;
    v11 = (char *)v58;
    *(_DWORD *)v58 = 20;
    *(_OWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 1) = 414;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 21);
    *((_DWORD *)v11 + 4) = *((_DWORD *)this + 22);
    *((_DWORD *)this + 4) &= ~0x200000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x1000000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v58) )
      return 0;
    v38 = (char *)v58;
    *(_DWORD *)v58 = 24;
    *(_OWORD *)(v38 + 4) = 0LL;
    *((_DWORD *)v38 + 5) = 0;
    *((_DWORD *)v38 + 1) = 410;
    *((_DWORD *)v38 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v38 + 3) = *((_DWORD *)this + 23);
    *((_DWORD *)v38 + 4) = *((_DWORD *)this + 24);
    *((_DWORD *)v38 + 5) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x1000000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x2000000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v58) )
      return 0;
    v30 = (char *)v58;
    *(_DWORD *)v58 = 20;
    *(_OWORD *)(v30 + 4) = 0LL;
    *((_DWORD *)v30 + 1) = 411;
    *((_DWORD *)v30 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v30 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)v30 + 4) = *((_DWORD *)this + 27);
    *((_DWORD *)this + 4) &= ~0x2000000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x100) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v26 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v26 + 4) = 0LL;
    *((_DWORD *)v26 + 3) = 0;
    *((_DWORD *)v26 + 1) = 416;
    *((_DWORD *)v26 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v26 + 3) = 0;
    v27 = *((_QWORD *)this + 17);
    if ( v27 )
      *((_DWORD *)v26 + 3) = *(_DWORD *)(v27 + 32);
    *((_DWORD *)this + 4) &= ~0x100u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x200) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v58) )
      return 0;
    v42 = (char *)v58;
    *(_DWORD *)v58 = 20;
    *(_OWORD *)(v42 + 4) = 0LL;
    *((_DWORD *)v42 + 1) = 417;
    *((_DWORD *)v42 + 2) = *((_DWORD *)this + 8);
    v43 = *((_QWORD *)this + 18);
    if ( v43 )
      v44 = *(_DWORD *)(v43 + 32);
    else
      v44 = 0;
    *((_DWORD *)v42 + 3) = v44;
    v42[16] = *((_BYTE *)this + 308) >> 7;
    *((_DWORD *)this + 4) &= ~0x200u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x400) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v31 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v31 + 4) = 0LL;
    *((_DWORD *)v31 + 3) = 0;
    *((_DWORD *)v31 + 1) = 400;
    *((_DWORD *)v31 + 2) = *((_DWORD *)this + 8);
    v32 = *((_QWORD *)this + 19);
    if ( v32 )
      v33 = *(_DWORD *)(v32 + 32);
    else
      v33 = 0;
    *((_DWORD *)v31 + 3) = v33;
    *((_DWORD *)this + 4) &= ~0x400u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x4000000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v45 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v45 + 4) = 0LL;
    *((_DWORD *)v45 + 3) = 0;
    *((_DWORD *)v45 + 1) = 419;
    *((_DWORD *)v45 + 2) = *((_DWORD *)this + 8);
    v46 = *((_QWORD *)this + 28);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 32);
    else
      v47 = 0;
    *((_DWORD *)v45 + 3) = v47;
    *((_DWORD *)this + 4) &= ~0x4000000u;
  }
  v12 = (int *)((char *)this + 360);
  v13 = *((_DWORD *)this + 90);
  if ( (v13 & 4) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v49 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v49 + 4) = 0LL;
    *((_DWORD *)v49 + 3) = 0;
    *((_DWORD *)v49 + 1) = 394;
    *((_DWORD *)v49 + 2) = *((_DWORD *)this + 8);
    v50 = *((_QWORD *)this + 29);
    if ( v50 )
      v51 = *(_DWORD *)(v50 + 32);
    else
      v51 = 0;
    *((_DWORD *)v49 + 3) = v51;
    *v12 &= ~4u;
    v13 = *v12;
  }
  if ( (v13 & 8) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v58) )
      return 0;
    v52 = (char *)v58;
    *(_DWORD *)v58 = 28;
    *(_OWORD *)(v52 + 4) = 0LL;
    *(_QWORD *)(v52 + 20) = 0LL;
    *((_DWORD *)v52 + 1) = 395;
    *((_DWORD *)v52 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v52 + 12) = *((_OWORD *)this + 15);
    *v12 &= ~8u;
  }
  v14 = *((_DWORD *)this + 4);
  if ( (v14 & 0x1000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v22 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v22 + 4) = 0LL;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 1) = 396;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    v23 = *((_QWORD *)this + 20);
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 32);
    else
      v24 = 0;
    *((_DWORD *)v22 + 3) = v24;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x800) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v34 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v34 + 4) = 0LL;
    *((_DWORD *)v34 + 3) = 0;
    *((_DWORD *)v34 + 1) = 398;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    v35 = *((_QWORD *)this + 21);
    if ( v35 )
      v36 = *(_DWORD *)(v35 + 32);
    else
      v36 = 0;
    *((_DWORD *)v34 + 3) = v36;
    *((_DWORD *)this + 4) &= ~0x800u;
    v14 = *((_DWORD *)this + 4);
  }
  if ( (v14 & 0x8000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v58) )
      return 0;
    v20 = (char *)v58;
    *(_DWORD *)v58 = 52;
    v21 = v20 + 12;
    *(_OWORD *)(v20 + 4) = 0LL;
    *(_OWORD *)(v20 + 20) = 0LL;
    *(_OWORD *)(v20 + 36) = 0LL;
    *((_DWORD *)v20 + 1) = 412;
    *((_DWORD *)v20 + 2) = *((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 65) != -1 )
    {
      *v21 |= 2u;
      *((_DWORD *)v20 + 4) = *((_DWORD *)this + 65);
    }
    if ( *((_DWORD *)this + 64) != -1 )
    {
      *v21 |= 4u;
      *((_DWORD *)v20 + 5) = *((_DWORD *)this + 64);
    }
    if ( *((_DWORD *)this + 66) != -1 )
    {
      *v21 |= 8u;
      *((_DWORD *)v20 + 8) = *((_DWORD *)this + 66);
    }
    if ( *((_DWORD *)this + 67) != -1 )
    {
      *v21 |= 0x10u;
      *((_DWORD *)v20 + 9) = *((_DWORD *)this + 67);
    }
    if ( *((_DWORD *)this + 68) != -1 )
    {
      *((_DWORD *)v20 + 3) |= 0x20u;
      *((_DWORD *)v20 + 10) = *((_DWORD *)this + 68);
    }
    if ( *((_DWORD *)this + 69) != -1 )
    {
      *((_DWORD *)v20 + 3) |= 0x40u;
      *((_DWORD *)v20 + 11) = *((_DWORD *)this + 69);
    }
    v14 = *((_DWORD *)this + 4) & 0xFFFF7FFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x10000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v29 = (char *)v58;
    v15 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v29 + 4) = 0LL;
    *((_DWORD *)v29 + 3) = 0;
    *((_DWORD *)v29 + 1) = 407;
    *((_DWORD *)v29 + 2) = *((_DWORD *)this + 8);
    v29[12] = (*((_BYTE *)this + 308) & 0x10) != 0;
    v29[13] = (*((_BYTE *)this + 308) & 8) != 0;
    v29[14] = *((_BYTE *)this + 309) & 1;
    v29[15] = (*((_BYTE *)this + 309) & 2) != 0;
    v14 = *((_DWORD *)this + 4) & 0xFFFEFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  else
  {
    v15 = (unsigned int *)((char *)this + 32);
  }
  if ( (v14 & 0x20000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v53 = (char *)v58;
    *(_DWORD *)v58 = 16;
    v16 = (unsigned int *)((char *)this + 32);
    *(_QWORD *)(v53 + 4) = 0LL;
    *((_DWORD *)v53 + 3) = 0;
    *((_DWORD *)v53 + 1) = 390;
    *((_DWORD *)v53 + 2) = *v15;
    v53[12] = (*((_BYTE *)this + 308) & 0x20) != 0;
    v14 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  else
  {
    v16 = v15;
  }
  if ( (v14 & 0x80000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v54 = (char *)v58;
    *(_DWORD *)v58 = 16;
    v16 = (unsigned int *)((char *)this + 32);
    *(_QWORD *)(v54 + 4) = 0LL;
    *((_DWORD *)v54 + 3) = 0;
    *((_DWORD *)v54 + 1) = 409;
    *((_DWORD *)v54 + 2) = *v15;
    v54[12] = (*((_BYTE *)this + 308) & 2) != 0;
    v54[13] = (*((_BYTE *)this + 308) & 4) != 0;
    v14 = *((_DWORD *)this + 4) & 0xFFF7FFFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x40000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v58) )
      return 0;
    v55 = (char *)v58;
    v16 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 36;
    *(_OWORD *)(v55 + 4) = 0LL;
    *(_OWORD *)(v55 + 20) = 0LL;
    *((_DWORD *)v55 + 1) = 403;
    *((_DWORD *)v55 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v55 + 7) = *((_DWORD *)this + 75);
    *(_OWORD *)(v55 + 12) = *(_OWORD *)((char *)this + 284);
    *((_DWORD *)v55 + 8) = *((_DWORD *)this + 76);
    v14 = *((_DWORD *)this + 4) & 0xFFFBFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x100000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v39 = (char *)v58;
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v39 + 4) = 0LL;
    *((_DWORD *)v39 + 3) = 0;
    *((_DWORD *)v39 + 1) = 404;
    *((_DWORD *)v39 + 2) = *v16;
    v40 = *((_QWORD *)this + 27);
    if ( v40 )
      v41 = *(_DWORD *)(v40 + 32);
    else
      v41 = 0;
    *((_DWORD *)v39 + 3) = v41;
    v16 = (unsigned int *)((char *)this + 32);
    v14 = *((_DWORD *)this + 4) & 0xFFEFFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x400000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v37 = (char *)v58;
    v17 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v37 + 4) = 0LL;
    *((_DWORD *)v37 + 3) = 0;
    *((_DWORD *)v37 + 1) = 406;
    *((_DWORD *)v37 + 2) = *v16;
    *((_DWORD *)v37 + 3) = *((_DWORD *)this + 28);
    v14 = *((_DWORD *)this + 4) & 0xFFBFFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  else
  {
    v17 = v16;
  }
  if ( (v14 & 0x800000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v25 = (char *)v58;
    v17 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 1) = 418;
    *((_DWORD *)v25 + 2) = *v16;
    v25[12] = (*((_BYTE *)this + 308) & 0x40) != 0;
    v14 = *((_DWORD *)this + 4) & 0xFF7FFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x8000000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v56 = (char *)v58;
    v17 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v56 + 4) = 0LL;
    *((_DWORD *)v56 + 3) = 0;
    *((_DWORD *)v56 + 1) = 388;
    *((_DWORD *)v56 + 2) = *((_DWORD *)this + 8);
    v56[12] = *((_BYTE *)this + 308) & 1;
    v14 = *((_DWORD *)this + 4) & 0xF7FFFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  if ( (v14 & 0x10000000) != 0 )
  {
    v58 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v58) )
      return 0;
    v57 = (char *)v58;
    v18 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v58 = 16;
    *(_QWORD *)(v57 + 4) = 0LL;
    *((_DWORD *)v57 + 3) = 0;
    *((_DWORD *)v57 + 1) = 393;
    *((_DWORD *)v57 + 2) = *v17;
    *((_DWORD *)v57 + 3) = *((_DWORD *)this + 70);
    v14 = *((_DWORD *)this + 4) & 0xEFFFFFFF;
    *((_DWORD *)this + 4) = v14;
  }
  else
  {
    v18 = v17;
  }
  if ( (v14 & 0x20000000) != 0 )
  {
    v58 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v58) )
    {
      v48 = (char *)v58;
      *(_DWORD *)v58 = 28;
      *(_OWORD *)(v48 + 4) = 0LL;
      *(_QWORD *)(v48 + 20) = 0LL;
      *((_DWORD *)v48 + 1) = 399;
      *((_DWORD *)v48 + 2) = *v17;
      *((_DWORD *)v48 + 3) = *((_DWORD *)this + 29);
      *((_DWORD *)v48 + 4) = *((_DWORD *)this + 30);
      *((_DWORD *)v48 + 5) = *((_DWORD *)this + 31);
      *((_DWORD *)v48 + 6) = *((_DWORD *)this + 32);
      *((_DWORD *)this + 4) &= ~0x20000000u;
      goto LABEL_45;
    }
    return 0;
  }
LABEL_45:
  if ( !(unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,413,386>::Marshal(
                           (char *)this + 312,
                           a2,
                           *v17,
                           (char *)this + 360)
    || !(unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,2,401,385>::Marshal(
                           (char *)this + 336,
                           a2,
                           *v18,
                           (char *)this + 360) )
  {
    return 0;
  }
  return v5;
}
