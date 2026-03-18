/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800C9F20
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180077280 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180103560 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180109DB8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801C1748 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801E45EC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x18025BA30 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ApplyConfiguration(COverlayContext *this, char a2, const void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // rcx
  float v12; // xmm1_4
  void (__fastcall *v13)(__int64, float *); // rax
  __m128i v14; // xmm0
  float v15; // xmm1_4
  __int128 v16; // xmm0
  __int64 v17; // rdx
  char *v18; // r15
  char *v19; // rcx
  __int64 v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  char *v24; // rax
  __int64 v25; // rcx
  char *v26; // rcx
  char *v27; // r8
  _BYTE *v28; // rdx
  size_t v29; // r8
  __int64 v30; // r15
  char *v31; // rbx
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r12
  char *v36; // r13
  char *v37; // rcx
  char *v38; // r8
  _BYTE *v39; // rdx
  size_t v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rcx
  char v43; // r13
  char v44; // r14
  __int64 v45; // rcx
  void (__fastcall ***v46)(_QWORD, GUID *, void **); // rbx
  __int64 v47; // r9
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // r15
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rax
  volatile signed __int32 *v60; // r15
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rbx
  unsigned __int64 v66; // r15
  unsigned int v67; // r14d
  __int64 v68; // r15
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  char v72; // r13
  int v73; // r12d
  __int64 v74; // r9
  char v75; // bl
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rcx
  volatile signed __int32 *v80; // rbx
  int v81; // eax
  __int64 v82; // rcx
  CDirectFlipInfo *v83; // rcx
  int v84; // eax
  _QWORD *v85; // r15
  volatile signed __int32 *v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  char v91; // [rsp+41h] [rbp-88h]
  int v92; // [rsp+44h] [rbp-85h]
  char *v93; // [rsp+48h] [rbp-81h] BYREF
  __int64 v94; // [rsp+50h] [rbp-79h] BYREF
  __int64 v95; // [rsp+58h] [rbp-71h] BYREF
  __int64 v96; // [rsp+60h] [rbp-69h] BYREF
  char v97[24]; // [rsp+68h] [rbp-61h] BYREF
  char v98[24]; // [rsp+80h] [rbp-49h] BYREF
  float v99[6]; // [rsp+98h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v101; // [rsp+C0h] [rbp-9h]
  __int64 v102; // [rsp+C8h] [rbp-1h]
  __int64 *v103; // [rsp+D0h] [rbp+7h]
  __int64 v104; // [rsp+D8h] [rbp+Fh]
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  v91 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 32LL))(*(_QWORD *)this + 8LL);
  v6 = *((_QWORD *)this + 1617);
  v7 = v5;
  v96 = v5;
  v8 = *((_QWORD *)this + 1618);
  v94 = v8;
  v9 = v6 + 256;
  v92 = 1;
  while ( v6 != v8 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
    {
      if ( *(_DWORD *)(v9 - 4) > *(_DWORD *)(v9 - 12) && *(_DWORD *)v9 > *(_DWORD *)(v9 - 8) )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 240) + 216LL))(*(_QWORD *)(v9 - 240));
      if ( *(_DWORD *)(v9 + 20) )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 240) + 320LL))(*(_QWORD *)(v9 - 240));
        if ( *(_DWORD *)(v9 + 20) != v10 )
        {
          v11 = *(_QWORD *)this;
          v12 = (float)*(int *)(v9 + 8);
          v13 = *(void (__fastcall **)(__int64, float *))(**(_QWORD **)this + 296LL);
          v99[0] = (float)*(int *)(v9 + 4);
          v14 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 12));
          v99[1] = v12;
          v15 = (float)*(int *)(v9 + 16);
          LODWORD(v99[2]) = _mm_cvtepi32_ps(v14).m128_u32[0];
          v99[3] = v15;
          v13(v11, v99);
          v16 = *(_OWORD *)(v9 - 12);
          *(_DWORD *)(v9 + 20) = v10;
          *(_OWORD *)(v9 + 4) = v16;
        }
      }
    }
    v17 = *(unsigned int *)(v9 - 148);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD, __int64))(**(_QWORD **)(v9 - 240) + 224LL))(
      *(_QWORD *)(v9 - 240),
      v17,
      1LL,
      v9 + 24,
      *(_DWORD *)(v9 - 148),
      v7);
    if ( !*(_BYTE *)(v9 + 113)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 240) + 352LL))(*(_QWORD *)(v9 - 240))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 240) + 360LL))(*(_QWORD *)(v9 - 240))) )
    {
      v18 = (char *)a3[1];
      v19 = (char *)a3[2];
      if ( v18 == v19 )
      {
        v20 = (v18 - (_BYTE *)*a3) >> 3;
        if ( v20 == 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_182;
        v21 = (v19 - (_BYTE *)*a3) >> 3;
        v95 = v20 + 1;
        v22 = v21 >> 1;
        if ( v21 <= 0x1FFFFFFFFFFFFFFFLL - (v21 >> 1) )
        {
          v23 = v20 + 1;
          if ( v22 + v21 >= v20 + 1 )
            v23 = v22 + v21;
          if ( v23 > 0x1FFFFFFFFFFFFFFFLL )
            goto LABEL_181;
        }
        else
        {
          v23 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v24 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v23);
        v25 = *(_QWORD *)(v9 - 248);
        v93 = v24;
        *(_QWORD *)&v24[8 * v20] = v25;
        v26 = v24;
        v27 = (char *)a3[1];
        v28 = *a3;
        if ( v18 == v27 )
        {
          v29 = v27 - v28;
        }
        else
        {
          memmove_0(v24, v28, v18 - v28);
          v28 = v18;
          v29 = (_BYTE *)a3[1] - v18;
          v26 = &v93[8 * v20 + 8];
        }
        memmove_0(v26, v28, v29);
        std::vector<CVectorShape *>::_Change_array((__int64)a3, (__int64)v93, v95, v23);
        v7 = v96;
      }
      else
      {
        *(_QWORD *)v18 = *(_QWORD *)(v9 - 248);
        a3[1] = (char *)a3[1] + 8;
      }
    }
    v8 = v94;
    v6 += 400LL;
    v9 += 400LL;
  }
  v30 = *((_QWORD *)this + 2451);
  if ( v30 && *(_BYTE *)(v30 + 737) )
  {
    v31 = (char *)a3[1];
    v19 = (char *)a3[2];
    if ( v31 == v19 )
    {
      v32 = (v31 - (_BYTE *)*a3) >> 3;
      if ( v32 == 0x1FFFFFFFFFFFFFFFLL )
LABEL_182:
        std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(v19);
      v33 = (v19 - (_BYTE *)*a3) >> 3;
      v94 = v32 + 1;
      v34 = v33 >> 1;
      if ( v33 <= 0x1FFFFFFFFFFFFFFFLL - (v33 >> 1) )
      {
        v35 = v32 + 1;
        if ( v34 + v33 >= v32 + 1 )
          v35 = v34 + v33;
        if ( v35 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_181:
          std::_Throw_bad_array_new_length();
      }
      else
      {
        v35 = 0x1FFFFFFFFFFFFFFFLL;
      }
      v36 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v35);
      v37 = v36;
      *(_QWORD *)&v36[8 * v32] = v30;
      v38 = (char *)a3[1];
      v39 = *a3;
      if ( v31 == v38 )
      {
        v40 = v38 - v39;
      }
      else
      {
        memmove_0(v36, v39, v31 - v39);
        v40 = (_BYTE *)a3[1] - v31;
        v39 = v31;
        v37 = &v36[8 * v32 + 8];
      }
      memmove_0(v37, v39, v40);
      std::vector<CVectorShape *>::_Change_array((__int64)a3, (__int64)v36, v94, v35);
    }
    else
    {
      *(_QWORD *)v31 = v30;
      a3[1] = (char *)a3[1] + 8;
    }
  }
  v41 = 0LL;
  if ( *((int *)this + 4920) <= 0 )
    goto LABEL_74;
  v42 = *((_QWORD *)this + 2468);
  v43 = 1;
  if ( v42
    && *(_QWORD *)(v42 + 8) == *((_QWORD *)this + 2455)
    && *(_QWORD *)(v42 + 16) == *((_QWORD *)this + 2456)
    && *(_QWORD *)(v42 + 24) == *((_QWORD *)this + 2457)
    && (*(_DWORD *)(v42 + 52) == 1) == (*((_DWORD *)this + 4921) == 1) )
  {
    v44 = 1;
    v91 = 1;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2456) + 136LL))(*((_QWORD *)this + 2456)) )
    {
LABEL_74:
      v43 = 0;
      goto LABEL_75;
    }
    v44 = 0;
  }
  if ( *((_QWORD *)this + 1618) != *((_QWORD *)this + 1617)
    || *((_DWORD *)this + 4900)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2456) + 176LL))(*((_QWORD *)this + 2456)) )
  {
    goto LABEL_74;
  }
  v45 = *((_QWORD *)this + 2456);
  v93 = 0LL;
  v46 = (void (__fastcall ***)(_QWORD, GUID *, void **))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 48LL))(v45);
  if ( v46 )
    (**v46)(v46, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v93);
  if ( v93 && (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v93 + 24LL))(v93) )
  {
    v43 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
      goto LABEL_72;
    v47 = 0LL;
    goto LABEL_71;
  }
  if ( *((int *)this + 4921) >= 3 )
  {
    if ( v44
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2468) + 16LL) + 352LL))(*(_QWORD *)(*((_QWORD *)this + 2468) + 16LL)) )
    {
      goto LABEL_66;
    }
    if ( *((_BYTE *)this + 19774) )
    {
      v43 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
        goto LABEL_72;
      v47 = 2LL;
      goto LABEL_71;
    }
  }
  if ( !v44 )
    goto LABEL_72;
LABEL_66:
  if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 2468)) )
  {
    v48 = *((_DWORD *)this + 4921);
    if ( v48 >= 3 && v48 != 4 )
    {
      v43 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v47 = 1LL;
LABEL_71:
        McTemplateU0xq_EventWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 2456) + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
          (unsigned int)*(_QWORD *)(*((_QWORD *)this + 2456) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2456) + 40LL)) << 32),
          v47);
      }
    }
  }
LABEL_72:
  if ( v93 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v93 + 16LL))(v93);
LABEL_75:
  v49 = *((_QWORD *)this + 2468);
  if ( v49 && (*(_DWORD *)(v49 + 48) != 3 || !a2 && (!v43 || !v91)) )
  {
    if ( *(_DWORD *)(v49 + 52) != 1 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v49 + 16) + 488LL))(
        *(_QWORD *)(v49 + 16),
        1LL,
        0LL);
    v50 = (_QWORD *)*((_QWORD *)this + 2468);
    if ( v50 )
    {
      CDirectFlipInfo::Reset(*((CDirectFlipInfo **)this + 2468));
      v51 = (volatile signed __int32 *)v50[5];
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        }
      }
      v52 = v50[2];
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      operator delete(v50, 0x70uLL);
    }
    *((_QWORD *)this + 2468) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v53 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
              *(_QWORD *)this + 8LL,
              v97);
      McTemplateU0xq_EventWriteTransfer(
        v54,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        *(unsigned int *)(v53 + 8),
        0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
  }
  if ( !*((_QWORD *)this + 2468) && v43 )
  {
    ProcessHeap = GetProcessHeap();
    v56 = HeapAlloc(ProcessHeap, 0, 0x70uLL);
    v57 = v56;
    if ( !v56 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *v56 = *((_QWORD *)this + 2454);
    v56[1] = *((_QWORD *)this + 2455);
    v58 = *((_QWORD *)this + 2456);
    v56[2] = v58;
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    v59 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2456) + 64LL))(*((_QWORD *)this + 2456));
    v57[4] = 0LL;
    v57[5] = 0LL;
    v57[3] = v59;
    *((_DWORD *)v57 + 12) = 1;
    *((_DWORD *)v57 + 13) = *((_DWORD *)this + 4921);
    v57[7] = 0LL;
    *((_OWORD *)v57 + 4) = 0LL;
    v57[10] = 0LL;
    v57[11] = 0LL;
    v57[12] = 0LL;
    *((_DWORD *)v57 + 26) = 0x1000000;
    *((_WORD *)v57 + 54) = 0;
    v60 = (volatile signed __int32 *)v57[5];
    v57[4] = 0LL;
    v57[5] = 0LL;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v60)(v60);
        if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
      }
    }
    *((_DWORD *)v57 + 12) = 2;
    *((_QWORD *)this + 2468) = v57;
    v94 = 0LL;
    std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(&v94);
    if ( *(int *)(*((_QWORD *)this + 2468) + 52LL) >= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    LOBYTE(v61) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 2468) + 16LL) + 488LL))(
      *(_QWORD *)(*((_QWORD *)this + 2468) + 16LL),
      1LL,
      v61);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v62 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
              *(_QWORD *)this + 8LL,
              v98);
      LODWORD(v95) = 1;
      v102 = 8LL;
      v104 = 4LL;
      v96 = *(unsigned int *)(v62 + 8);
      v101 = &v96;
      v103 = &v95;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        v63,
        3u,
        &v100);
    }
  }
  v64 = *((_QWORD *)this + 2468);
  if ( v64 )
  {
    if ( v43 )
    {
      v77 = *((_DWORD *)this + 4921);
      *(_DWORD *)(v64 + 52) = v77;
      if ( v77 < 3 )
      {
        v80 = *(volatile signed __int32 **)(v64 + 40);
        *(_QWORD *)(v64 + 40) = 0LL;
        *(_QWORD *)(v64 + 32) = 0LL;
      }
      else
      {
        v78 = *((_QWORD *)this + 2459);
        if ( v78 )
          _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
        v79 = *((_QWORD *)this + 2459);
        v80 = *(volatile signed __int32 **)(v64 + 40);
        *(_QWORD *)(v64 + 32) = *((_QWORD *)this + 2458);
        *(_QWORD *)(v64 + 40) = v79;
      }
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v80)(v80);
          if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
        }
      }
    }
    if ( *(int *)(*((_QWORD *)this + 2468) + 52LL) >= 3 && !a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    v81 = CDirectFlipInfo::Activate(*((CDirectFlipInfo **)this + 2468));
    v82 = *((_QWORD *)this + 2468);
    if ( v81 < 0 )
    {
      if ( !v82 )
        goto LABEL_179;
      if ( *(_DWORD *)(v82 + 52) != 1 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v82 + 16) + 488LL))(
          *(_QWORD *)(v82 + 16),
          1LL,
          0LL);
      v85 = (_QWORD *)*((_QWORD *)this + 2468);
      if ( v85 )
      {
        CDirectFlipInfo::Reset(*((CDirectFlipInfo **)this + 2468));
        v86 = (volatile signed __int32 *)v85[5];
        if ( v86 )
        {
          if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v86)(v86);
            if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
          }
        }
        v87 = v85[2];
        if ( v87 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
        operator delete(v85, 0x70uLL);
      }
      *((_QWORD *)this + 2468) = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v88 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
                *(_QWORD *)this + 8LL,
                v99);
        McTemplateU0xq_EventWriteTransfer(
          v89,
          &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
          *(unsigned int *)(v88 + 8),
          0LL);
      }
    }
    else
    {
      if ( !CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)v82) )
        goto LABEL_179;
      v83 = (CDirectFlipInfo *)*((_QWORD *)this + 2468);
      if ( !v83 )
        goto LABEL_179;
      v84 = *((_DWORD *)v83 + 13);
      if ( v84 == 4 )
      {
        CDirectFlipInfo::RenderingRealizationChanged(v83);
        goto LABEL_179;
      }
      if ( v84 != 1 )
        goto LABEL_179;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    goto LABEL_179;
  }
  v65 = *((_QWORD *)this + 1617);
  v66 = 0x8F5C28F5C28F5C29uLL * ((*((_QWORD *)this + 1618) - v65) >> 4);
  v94 = v66;
  if ( !*((_BYTE *)this + 19472) && (_DWORD)v66 == 1 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      if ( !*(_BYTE *)(v65 + 364)
        && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *(_DWORD *)(*(_QWORD *)v65 + 40LL) <= 1u)
        && *(_DWORD *)(v65 + 360) == 2
        && (*(_DWORD *)(v65 + 236) <= *(_DWORD *)(v65 + 228) || *(_DWORD *)(v65 + 240) <= *(_DWORD *)(v65 + 232)) )
      {
        v92 = 0;
        v67 = 0;
      }
      else
      {
        v92 = 1;
        v67 = 0;
      }
      goto LABEL_124;
    }
    if ( !*(_BYTE *)(v65 + 364) )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 11) <= 1u )
      {
        v92 = 0;
        v67 = 0;
      }
      else
      {
        v67 = 0;
      }
      goto LABEL_124;
    }
  }
  v67 = 0;
  if ( (_DWORD)v66 )
  {
LABEL_124:
    v68 = 0LL;
    do
    {
      v69 = *(_QWORD *)(v41 + *((_QWORD *)this + 1617) + 16);
      v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 368LL))(v69);
      v71 = *((_QWORD *)this + 1617);
      v72 = 0;
      v73 = v70;
      v74 = v41 + v71;
      v75 = *(_BYTE *)(v41 + v71 + 365);
      if ( *(_DWORD *)(v41 + v71 + 380) != v67 + v92 || *(_BYTE *)(v74 + 369) && (v70 < 3 || !*(_BYTE *)(v74 + 370)) )
        v72 = 1;
      if ( v75 )
      {
        if ( !v72
          && v70 != -1
          && *((_BYTE *)this + 19777)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + v71 + 16) + 120LL))(*(_QWORD *)(v41 + v71 + 16))
          && !CCommonRegistryData::m_fDisableIndependentFlip )
        {
          COverlayContext::EnsureIndependentFlipState(
            this,
            (struct COverlayContext::OverlayPlaneInfo *)(v68 + *((_QWORD *)this + 1617)),
            v75);
          if ( v73 >= 3 )
            goto LABEL_143;
          goto LABEL_141;
        }
        v75 = 0;
      }
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v68 + *((_QWORD *)this + 1617)),
        v75);
      if ( v72 )
        goto LABEL_142;
LABEL_141:
      v76 = *((_QWORD *)this + 1617);
      if ( *(_DWORD *)(v41 + v76 + 388) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + v76 + 16) + 320LL))(*(_QWORD *)(v41 + v76 + 16)) )
LABEL_142:
        *(_BYTE *)(v41 + *((_QWORD *)this + 1617) + 372) = 1;
LABEL_143:
      ++v67;
      v68 += 400LL;
      v41 += 400LL;
    }
    while ( v67 < (unsigned int)v94 );
  }
LABEL_179:
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19632));
}
