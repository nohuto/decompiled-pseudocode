/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18009BCC0
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18003A2A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180064A6C (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1801A4110 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D8340 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801F12E8 (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x1802503E0 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168 (-ForceSoftwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ @ 0x18026C58C (-IsCursorVisibleInSoftware@COverlayContext@@AEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ApplyConfiguration(COverlayContext *this, char a2, const void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // rcx
  float v13; // xmm1_4
  void (__fastcall *v14)(__int64, float *); // rax
  __m128i v15; // xmm0
  float v16; // xmm1_4
  __int128 v17; // xmm0
  __int64 v18; // rdx
  char *v19; // r15
  char *v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r12
  char *v25; // rax
  __int64 v26; // rcx
  char *v27; // rcx
  char *v28; // r8
  _BYTE *v29; // rdx
  size_t v30; // r8
  char IsEnabled; // al
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rbx
  __int64 v38; // r13
  char *v39; // rcx
  __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r15
  char *v44; // r12
  char *v45; // rcx
  char *v46; // r8
  _BYTE *v47; // rdx
  size_t v48; // r8
  __int64 v49; // rsi
  __int64 v50; // rdx
  char v51; // r15
  char v52; // r14
  __int64 v53; // rcx
  void (__fastcall ***v54)(_QWORD, GUID *, void **); // rbx
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rcx
  _QWORD *v58; // r15
  volatile signed __int32 *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  volatile signed __int32 *v68; // r15
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // r15
  unsigned int v75; // r14d
  __int64 v76; // r15
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  char v80; // r13
  int v81; // r12d
  __int64 v82; // r9
  char v83; // bl
  __int64 v84; // rbx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  volatile signed __int32 *v88; // rbx
  int v89; // eax
  __int64 v90; // rcx
  CDirectFlipInfo *v91; // rcx
  int v92; // eax
  _QWORD *v93; // r15
  volatile signed __int32 *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  char v98; // [rsp+40h] [rbp-89h]
  char v100; // [rsp+42h] [rbp-87h]
  int v101; // [rsp+44h] [rbp-85h]
  char *v102; // [rsp+48h] [rbp-81h] BYREF
  __int64 v103; // [rsp+50h] [rbp-79h] BYREF
  __int64 v104; // [rsp+58h] [rbp-71h] BYREF
  __int64 v105; // [rsp+60h] [rbp-69h] BYREF
  char v106[24]; // [rsp+68h] [rbp-61h] BYREF
  char v107[24]; // [rsp+80h] [rbp-49h] BYREF
  float v108[6]; // [rsp+98h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+B0h] [rbp-19h] BYREF
  __int64 *v110; // [rsp+C0h] [rbp-9h]
  __int64 v111; // [rsp+C8h] [rbp-1h]
  __int64 *v112; // [rsp+D0h] [rbp+7h]
  __int64 v113; // [rsp+D8h] [rbp+Fh]
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  v98 = 0;
  v100 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 19088)
    && (!*((_BYTE *)this + 19208) || *((_BYTE *)this + 19209) != *((_BYTE *)this + 19089)) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 256LL))(*(_QWORD *)this);
    if ( *(_BYTE *)(v5 + 256) )
      *(_BYTE *)(v5 + 257) = 1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 32LL))(*(_QWORD *)this + 8LL);
  v7 = *((_QWORD *)this + 1585);
  v8 = v6;
  v105 = v6;
  v9 = *((_QWORD *)this + 1586);
  v103 = v9;
  v10 = v7 + 256;
  v101 = 1;
  while ( v7 != v9 )
  {
    if ( *(_DWORD *)(v10 - 4) > *(_DWORD *)(v10 - 12) && *(_DWORD *)v10 > *(_DWORD *)(v10 - 8) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 - 240) + 216LL))(*(_QWORD *)(v10 - 240));
    if ( *(_DWORD *)(v10 + 20) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 - 240) + 320LL))(*(_QWORD *)(v10 - 240));
      if ( *(_DWORD *)(v10 + 20) != v11 )
      {
        v12 = *(_QWORD *)this;
        v13 = (float)*(int *)(v10 + 8);
        v14 = *(void (__fastcall **)(__int64, float *))(**(_QWORD **)this + 296LL);
        v108[0] = (float)*(int *)(v10 + 4);
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 12));
        v108[1] = v13;
        v16 = (float)*(int *)(v10 + 16);
        LODWORD(v108[2]) = _mm_cvtepi32_ps(v15).m128_u32[0];
        v108[3] = v16;
        v14(v12, v108);
        v17 = *(_OWORD *)(v10 - 12);
        *(_DWORD *)(v10 + 20) = v11;
        *(_OWORD *)(v10 + 4) = v17;
      }
    }
    v18 = *(unsigned int *)(v10 - 148);
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD, __int64))(**(_QWORD **)(v10 - 240) + 224LL))(
      *(_QWORD *)(v10 - 240),
      v18,
      1LL,
      v10 + 24,
      *(_DWORD *)(v10 - 148),
      v8);
    if ( !*(_BYTE *)(v10 + 112)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 - 240) + 352LL))(*(_QWORD *)(v10 - 240))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 - 240) + 360LL))(*(_QWORD *)(v10 - 240))) )
    {
      v19 = (char *)a3[1];
      v20 = (char *)a3[2];
      if ( v19 == v20 )
      {
        v21 = (v19 - (_BYTE *)*a3) >> 3;
        if ( v21 == 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_199;
        v22 = (v20 - (_BYTE *)*a3) >> 3;
        v104 = v21 + 1;
        v23 = v22 >> 1;
        if ( v22 <= 0x1FFFFFFFFFFFFFFFLL - (v22 >> 1) )
        {
          v24 = v21 + 1;
          if ( v23 + v22 >= v21 + 1 )
            v24 = v23 + v22;
          if ( v24 > 0x1FFFFFFFFFFFFFFFLL )
            goto LABEL_198;
        }
        else
        {
          v24 = 0x1FFFFFFFFFFFFFFFLL;
        }
        v25 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v24);
        v26 = *(_QWORD *)(v10 - 248);
        v102 = v25;
        *(_QWORD *)&v25[8 * v21] = v26;
        v27 = v25;
        v28 = (char *)a3[1];
        v29 = *a3;
        if ( v19 == v28 )
        {
          v30 = v28 - v29;
        }
        else
        {
          memmove_0(v25, v29, v19 - v29);
          v29 = v19;
          v30 = (_BYTE *)a3[1] - v19;
          v27 = &v102[8 * v21 + 8];
        }
        memmove_0(v27, v29, v30);
        std::vector<CVectorShape *>::_Change_array((__int64)a3, (__int64)v102, v104, v24);
        v8 = v105;
      }
      else
      {
        *(_QWORD *)v19 = *(_QWORD *)(v10 - 248);
        a3[1] = (char *)a3[1] + 8;
      }
    }
    v9 = v103;
    v7 += 392LL;
    v10 += 392LL;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl);
  v32 = 0x7D6343EB1A1F58D1LL;
  if ( IsEnabled )
  {
    v33 = *((_QWORD *)this + 2403);
    if ( v33 )
    {
      v34 = *((_QWORD *)this + 1585);
      if ( 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1586) - v34) >> 3)
        && !*((_BYTE *)this + 19582)
        && (v35 = *(_QWORD *)(v33 + 704)) != 0
        && *(_QWORD *)(v35 + 176)
        && *(_BYTE *)(v35 + 81)
        && *(_DWORD *)(v34 + 376) )
      {
        COverlayContext::ForceSoftwareCursor(this);
      }
      else if ( !COverlayContext::IsCursorVisibleInSoftware(this)
             && (*((float *)this + 4830) <= *((float *)this + 4828) || *((float *)this + 4831) <= *((float *)this + 4829)) )
      {
        v36 = *((_QWORD *)this + 2403);
        if ( !*(_BYTE *)(v36 + 745) )
        {
          v37 = (char *)a3[1];
          v38 = *((_QWORD *)this + 2403);
          v39 = (char *)a3[2];
          if ( v37 == v39 )
          {
            v40 = (v37 - (_BYTE *)*a3) >> 3;
            if ( v40 == 0x1FFFFFFFFFFFFFFFLL )
LABEL_199:
              std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
            v41 = (v39 - (_BYTE *)*a3) >> 3;
            v103 = v40 + 1;
            v42 = v41 >> 1;
            if ( v41 <= 0x1FFFFFFFFFFFFFFFLL - (v41 >> 1) )
            {
              v43 = v40 + 1;
              if ( v42 + v41 >= v40 + 1 )
                v43 = v42 + v41;
              if ( v43 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_198:
                std::_Throw_bad_array_new_length();
            }
            else
            {
              v43 = 0x1FFFFFFFFFFFFFFFLL;
            }
            v44 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v43);
            v45 = v44;
            *(_QWORD *)&v44[8 * v40] = v38;
            v46 = (char *)a3[1];
            v47 = *a3;
            if ( v37 == v46 )
            {
              v48 = v46 - v47;
            }
            else
            {
              memmove_0(v44, v47, v37 - v47);
              v48 = (_BYTE *)a3[1] - v37;
              v45 = &v44[8 * v40 + 8];
              v47 = v37;
            }
            memmove_0(v45, v47, v48);
            std::vector<CVectorShape *>::_Change_array((__int64)a3, (__int64)v44, v103, v43);
          }
          else
          {
            *(_QWORD *)v37 = v36;
            a3[1] = (char *)a3[1] + 8;
          }
        }
      }
    }
  }
  v49 = 0LL;
  if ( *((int *)this + 4862) <= 0 )
  {
    v51 = 0;
    goto LABEL_92;
  }
  v50 = *((_QWORD *)this + 2439);
  v51 = 1;
  v98 = 1;
  if ( v50
    && *(_QWORD *)(v50 + 8) == *((_QWORD *)this + 2426)
    && *(_QWORD *)(v50 + 16) == *((_QWORD *)this + 2427)
    && *(_QWORD *)(v50 + 24) == *((_QWORD *)this + 2428)
    && (*(_DWORD *)(v50 + 52) == 1) == (*((_DWORD *)this + 4863) == 1) )
  {
    v52 = 1;
    v100 = 1;
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2427) + 136LL))(
           *((_QWORD *)this + 2427),
           v50,
           v32) )
    {
LABEL_90:
      v51 = 0;
      v98 = 0;
      goto LABEL_92;
    }
    v52 = 0;
  }
  if ( *((_QWORD *)this + 1586) != *((_QWORD *)this + 1585)
    || *((_DWORD *)this + 4804)
    || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 2427) + 176LL))(
         *((_QWORD *)this + 2427),
         v50,
         v32) )
  {
    goto LABEL_90;
  }
  v53 = *((_QWORD *)this + 2427);
  v102 = 0LL;
  v54 = (void (__fastcall ***)(_QWORD, GUID *, void **))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 48LL))(v53);
  if ( v54 )
    (**v54)(v54, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, (void **)&v102);
  if ( v102 && (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v102 + 24LL))(v102) )
  {
    v51 = 0;
    v98 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
      goto LABEL_88;
    v55 = 0LL;
    goto LABEL_87;
  }
  if ( *((int *)this + 4863) >= 3 )
  {
    if ( v52
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2439) + 16LL) + 352LL))(*(_QWORD *)(*((_QWORD *)this + 2439) + 16LL)) )
    {
      goto LABEL_82;
    }
    if ( *((_BYTE *)this + 19584) )
    {
      v51 = 0;
      v98 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
        goto LABEL_88;
      v55 = 2LL;
      goto LABEL_87;
    }
  }
  if ( !v52 )
    goto LABEL_88;
LABEL_82:
  if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 2439)) )
  {
    v56 = *((_DWORD *)this + 4863);
    if ( v56 >= 3 && v56 != 4 )
    {
      v51 = 0;
      v98 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v55 = 1LL;
LABEL_87:
        McTemplateU0xq_EventWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 2427) + 40LL),
          &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
          (unsigned int)*(_QWORD *)(*((_QWORD *)this + 2427) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 2427) + 40LL)) << 32),
          v55);
      }
    }
  }
LABEL_88:
  if ( v102 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v102 + 16LL))(v102);
LABEL_92:
  v57 = *((_QWORD *)this + 2439);
  if ( v57 && (*(_DWORD *)(v57 + 48) != 3 || !a2 && (!v51 || !v100)) )
  {
    if ( *(_DWORD *)(v57 + 52) != 1 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v57 + 16) + 488LL))(
        *(_QWORD *)(v57 + 16),
        1LL,
        0LL);
    v58 = (_QWORD *)*((_QWORD *)this + 2439);
    if ( v58 )
    {
      CDirectFlipInfo::Reset(*((CDirectFlipInfo **)this + 2439));
      v59 = (volatile signed __int32 *)v58[5];
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
          if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        }
      }
      v60 = v58[2];
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      operator delete(v58, 0x70uLL);
    }
    *((_QWORD *)this + 2439) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v61 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
              *(_QWORD *)this + 8LL,
              v106);
      McTemplateU0xq_EventWriteTransfer(
        v62,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        *(unsigned int *)(v61 + 8),
        0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    v51 = v98;
  }
  if ( !*((_QWORD *)this + 2439) && v51 )
  {
    ProcessHeap = GetProcessHeap();
    v64 = HeapAlloc(ProcessHeap, 0, 0x70uLL);
    v65 = v64;
    if ( !v64 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *v64 = *((_QWORD *)this + 2425);
    v64[1] = *((_QWORD *)this + 2426);
    v66 = *((_QWORD *)this + 2427);
    v64[2] = v66;
    if ( v66 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
    v67 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2427) + 64LL))(*((_QWORD *)this + 2427));
    v65[4] = 0LL;
    v65[5] = 0LL;
    v65[3] = v67;
    *((_DWORD *)v65 + 12) = 1;
    *((_DWORD *)v65 + 13) = *((_DWORD *)this + 4863);
    v65[7] = 0LL;
    *((_OWORD *)v65 + 4) = 0LL;
    v65[10] = 0LL;
    v65[11] = 0LL;
    v65[12] = 0LL;
    *((_DWORD *)v65 + 26) = 0x1000000;
    *((_WORD *)v65 + 54) = 0;
    v68 = (volatile signed __int32 *)v65[5];
    v65[4] = 0LL;
    v65[5] = 0LL;
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v68)(v68);
        if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      }
    }
    *((_DWORD *)v65 + 12) = 2;
    *((_QWORD *)this + 2439) = v65;
    v103 = 0LL;
    std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(&v103);
    if ( *(int *)(*((_QWORD *)this + 2439) + 52LL) >= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    LOBYTE(v69) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 2439) + 16LL) + 488LL))(
      *(_QWORD *)(*((_QWORD *)this + 2439) + 16LL),
      1LL,
      v69);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v70 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
              *(_QWORD *)this + 8LL,
              v107);
      LODWORD(v104) = 1;
      v111 = 8LL;
      v113 = 4LL;
      v105 = *(unsigned int *)(v70 + 8);
      v110 = &v105;
      v112 = &v104;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        v71,
        3u,
        &v109);
    }
  }
  v72 = *((_QWORD *)this + 2439);
  if ( v72 )
  {
    if ( v98 )
    {
      v85 = *((_DWORD *)this + 4863);
      *(_DWORD *)(v72 + 52) = v85;
      if ( v85 < 3 )
      {
        v88 = *(volatile signed __int32 **)(v72 + 40);
        *(_QWORD *)(v72 + 40) = 0LL;
        *(_QWORD *)(v72 + 32) = 0LL;
      }
      else
      {
        v86 = *((_QWORD *)this + 2430);
        if ( v86 )
          _InterlockedIncrement((volatile signed __int32 *)(v86 + 8));
        v87 = *((_QWORD *)this + 2430);
        v88 = *(volatile signed __int32 **)(v72 + 40);
        *(_QWORD *)(v72 + 32) = *((_QWORD *)this + 2429);
        *(_QWORD *)(v72 + 40) = v87;
      }
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v88)(v88);
          if ( _InterlockedExchangeAdd(v88 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
        }
      }
    }
    if ( *(int *)(*((_QWORD *)this + 2439) + 52LL) >= 3 && !a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    v89 = CDirectFlipInfo::Activate(*((CDirectFlipInfo **)this + 2439));
    v90 = *((_QWORD *)this + 2439);
    if ( v89 < 0 )
    {
      if ( !v90 )
        goto LABEL_196;
      if ( *(_DWORD *)(v90 + 52) != 1 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v90 + 16) + 488LL))(
          *(_QWORD *)(v90 + 16),
          1LL,
          0LL);
      v93 = (_QWORD *)*((_QWORD *)this + 2439);
      if ( v93 )
      {
        CDirectFlipInfo::Reset(*((CDirectFlipInfo **)this + 2439));
        v94 = (volatile signed __int32 *)v93[5];
        if ( v94 )
        {
          if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v94)(v94);
            if ( _InterlockedExchangeAdd(v94 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 8LL))(v94);
          }
        }
        v95 = v93[2];
        if ( v95 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
        operator delete(v93, 0x70uLL);
      }
      *((_QWORD *)this + 2439) = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v96 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
                *(_QWORD *)this + 8LL,
                v108);
        McTemplateU0xq_EventWriteTransfer(
          v97,
          &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
          *(unsigned int *)(v96 + 8),
          0LL);
      }
    }
    else
    {
      if ( !CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)v90) )
        goto LABEL_196;
      v91 = (CDirectFlipInfo *)*((_QWORD *)this + 2439);
      if ( !v91 )
        goto LABEL_196;
      v92 = *((_DWORD *)v91 + 13);
      if ( v92 == 4 )
      {
        CDirectFlipInfo::RenderingRealizationChanged(v91);
        goto LABEL_196;
      }
      if ( v92 != 1 )
        goto LABEL_196;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    goto LABEL_196;
  }
  v73 = *((_QWORD *)this + 1585);
  v74 = 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1586) - v73) >> 3);
  v103 = v74;
  if ( !*((_BYTE *)this + 19088) && (_DWORD)v74 == 1 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      if ( !*(_BYTE *)(v73 + 364)
        && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *(_DWORD *)(*(_QWORD *)v73 + 40LL) <= 1u)
        && *(_DWORD *)(v73 + 360) == 2
        && (*(_DWORD *)(v73 + 236) <= *(_DWORD *)(v73 + 228) || *(_DWORD *)(v73 + 240) <= *(_DWORD *)(v73 + 232)) )
      {
        v101 = 0;
        v75 = 0;
      }
      else
      {
        v101 = 1;
        v75 = 0;
      }
      goto LABEL_141;
    }
    if ( !*(_BYTE *)(v73 + 364) )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 11) <= 1u )
      {
        v101 = 0;
        v75 = 0;
      }
      else
      {
        v75 = 0;
      }
      goto LABEL_141;
    }
  }
  v75 = 0;
  if ( (_DWORD)v74 )
  {
LABEL_141:
    v76 = 0LL;
    do
    {
      v77 = *(_QWORD *)(*((_QWORD *)this + 1585) + v49 + 16);
      v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 368LL))(v77);
      v79 = *((_QWORD *)this + 1585);
      v80 = 0;
      v81 = v78;
      v82 = v79 + v49;
      v83 = *(_BYTE *)(v79 + v49 + 365);
      if ( *(_DWORD *)(v79 + v49 + 376) != v75 + v101 || *(_BYTE *)(v82 + 368) && (v78 < 3 || !*(_BYTE *)(v82 + 369)) )
        v80 = 1;
      if ( v83 )
      {
        if ( !v80
          && v78 != -1
          && *((_BYTE *)this + 19587)
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v79 + v49 + 16) + 120LL))(*(_QWORD *)(v79 + v49 + 16))
          && !CCommonRegistryData::m_fDisableIndependentFlip )
        {
          COverlayContext::EnsureIndependentFlipState(
            this,
            (struct COverlayContext::OverlayPlaneInfo *)(v76 + *((_QWORD *)this + 1585)),
            v83);
          if ( v81 >= 3 )
            goto LABEL_160;
          goto LABEL_158;
        }
        v83 = 0;
      }
      COverlayContext::EnsureIndependentFlipState(
        this,
        (struct COverlayContext::OverlayPlaneInfo *)(v76 + *((_QWORD *)this + 1585)),
        v83);
      if ( v80 )
        goto LABEL_159;
LABEL_158:
      v84 = *((_QWORD *)this + 1585);
      if ( *(_DWORD *)(v84 + v49 + 384) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v84 + v49 + 16) + 320LL))(*(_QWORD *)(v84 + v49 + 16)) )
LABEL_159:
        *(_BYTE *)(*((_QWORD *)this + 1585) + v49 + 371) = 1;
LABEL_160:
      ++v75;
      v76 += 392LL;
      v49 += 392LL;
    }
    while ( v75 < (unsigned int)v103 );
  }
LABEL_196:
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19400));
}
