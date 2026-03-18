/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18009A6D0
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180096BA0 (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800BA8B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012B790 (-clear_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext.c)
 *     ?Grow@?$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180185C98 (-Grow@-$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1801D9D60 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?Grow@?$CWatermarkStack@M$01$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801DC2F4 (-Grow@-$CWatermarkStack@M$01$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801E394C (-Grow@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(CPreComputeContext *this, struct CVisualTree *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // eax
  void **v10; // rbx
  unsigned int i; // edi
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // r15d
  int v18; // r9d
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r9
  int v23; // r12d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // rbx
  unsigned int v52; // eax
  CPreComputeContext::SubTreeContext *v53; // rbx
  CPreComputeContext::SubTreeContext *v54; // rdi
  __int64 v55; // r8
  int v56; // eax
  void *v57; // rdi
  int v58; // r9d
  int v59; // eax
  int v60; // eax
  void *v61; // r12
  int v62; // r9d
  void *v63; // rdi
  int v64; // eax
  void *v65; // rdi
  int v66; // r9d
  __int64 v67; // r15
  int v68; // eax
  CVisualTreePath *v69; // rbx
  DwmDbg::DbgString *v70; // rax
  void *v71; // [rsp+38h] [rbp-49h] BYREF
  char *v72; // [rsp+40h] [rbp-41h] BYREF
  int v73; // [rsp+48h] [rbp-39h]
  int v74; // [rsp+4Ch] [rbp-35h]
  _BYTE v75[16]; // [rsp+50h] [rbp-31h] BYREF
  char **v76; // [rsp+60h] [rbp-21h]
  __int64 v77; // [rsp+68h] [rbp-19h]
  void **v78; // [rsp+70h] [rbp-11h]
  __int64 v79; // [rsp+78h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    LODWORD(v71) = (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2);
    v72 = (char *)a2;
    v76 = &v72;
    v77 = 8LL;
    v78 = &v71;
    v79 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start,
      v55,
      3LL,
      v75);
  }
  if ( g_pComposition != (CGlobalComposition *)-1008LL && *((_BYTE *)g_pComposition + 1016) )
    *((_BYTE *)g_pComposition + 1018) = 1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5) )
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      0LL);
  *((_DWORD *)this + 272) = 0;
  if ( *((_DWORD *)this + 272) != *((_DWORD *)this + 273)
    || (v56 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Grow((char *)this + 1080), v17 = v56, v56 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)this + 135) + 4LL * (unsigned int)(*((_DWORD *)this + 272))++) = 0;
    v4 = *((_DWORD *)this + 275);
    if ( v4 <= *((_DWORD *)this + 272) )
      v4 = *((_DWORD *)this + 272);
    *((_DWORD *)this + 275) = v4;
    *((_DWORD *)this + 354) = 0;
    *((_DWORD *)this + 278) = 0;
    if ( *((_DWORD *)this + 278) == *((_DWORD *)this + 279)
      && (v59 = CWatermarkStack<float,2,2,10>::Grow((char *)this + 1104), v59 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v59,
        (_DWORD)this + 1104);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 138) + 4LL * *((unsigned int *)this + 278)) = 1065353216;
      v5 = *((_DWORD *)this + 281);
      if ( v5 <= ++*((_DWORD *)this + 278) )
        v5 = *((_DWORD *)this + 278);
      *((_DWORD *)this + 281) = v5;
    }
    *((_DWORD *)this + 284) = 0;
    if ( *((_DWORD *)this + 284) == *((_DWORD *)this + 285)
      && (v64 = CWatermarkStack<void *,2,2,10>::Grow((char *)this + 1128), v64 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v64,
        (_DWORD)this + 1128);
    }
    else
    {
      v6 = *((unsigned int *)this + 284);
      v7 = *((_QWORD *)this + 141);
      *(_DWORD *)(v7 + 8 * v6) = 0;
      *(float *)(v7 + 8 * v6 + 4) = FLOAT_N1_0;
      v8 = *((_DWORD *)this + 287);
      if ( v8 <= ++*((_DWORD *)this + 284) )
        v8 = *((_DWORD *)this + 284);
      *((_DWORD *)this + 287) = v8;
    }
    *((_DWORD *)this + 290) = 0;
    if ( *((_DWORD *)this + 290) == *((_DWORD *)this + 291)
      && (v60 = CWatermarkStack<void *,2,2,10>::Grow((char *)this + 1152), v60 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v60,
        (_DWORD)this + 1152);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 144) + 8LL * *((unsigned int *)this + 290)) = 0LL;
      v9 = *((_DWORD *)this + 293);
      if ( v9 <= ++*((_DWORD *)this + 290) )
        v9 = *((_DWORD *)this + 290);
      *((_DWORD *)this + 293) = v9;
    }
    v10 = (void **)((char *)this + 1184);
    for ( i = 0; i < *((_DWORD *)this + 302); ++i )
    {
      v42 = *((_QWORD *)*v10 + 2 * i);
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v12 = *v10;
    *((_DWORD *)this + 302) = 0;
    if ( v12 != *((void **)this + 149) )
    {
      operator delete(v12);
      *((_QWORD *)this + 148) = *((_QWORD *)this + 149);
      *((_DWORD *)this + 301) = *((_DWORD *)this + 300);
    }
    v13 = *((_QWORD *)this + 147);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_QWORD *)this + 147) = 0LL;
    }
    v14 = (void *)*((_QWORD *)this + 160);
    *((_DWORD *)this + 326) = 0;
    if ( v14 != *((void **)this + 161) )
    {
      operator delete(v14);
      *((_QWORD *)this + 160) = *((_QWORD *)this + 161);
      *((_DWORD *)this + 325) = *((_DWORD *)this + 324);
    }
    *((_BYTE *)this + 1568) = 0;
    if ( dword_180404D50 )
    {
      v67 = *((_QWORD *)a2 + 9);
      if ( (*(_BYTE *)(v67 + 107) & 5) != 0 || *(int *)(v67 + 264) > 0 || *(int *)(v67 + 268) > 0 )
      {
        DwmDbg::DbgString::DbgString(&v72, word_180336D88);
        v69 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v75, a2);
        v70 = DwmDbg::DbgString::DbgString((char **)&v71, "PreCompute-StartWalk");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v70, v67, a2, v69);
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v75);
      }
    }
    v15 = *((_QWORD *)a2 + 9);
    *((_QWORD *)this + 194) = a2;
    v17 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((char *)this + 1496, *((_QWORD *)a2 + 9), v15, this);
    v18 = v17;
    if ( v17 < 0 )
    {
      v52 = 195;
      goto LABEL_104;
    }
    v19 = *((_DWORD *)this + 272);
    if ( v19 )
      *((_DWORD *)this + 272) = v19 - 1;
    v20 = *((_DWORD *)this + 274);
    v21 = 64LL;
    v22 = 0xFFFFFFFFLL;
    v23 = -2147024882;
    if ( v20 != 10 )
    {
      v24 = v20 + 1;
      goto LABEL_36;
    }
    v44 = *((_DWORD *)this + 275);
    v45 = 64LL;
    if ( v44 > 0x40 )
      v45 = v44;
    if ( (unsigned __int64)(3 * v45) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else
    {
      if ( (unsigned int)(3 * v45) > *((_DWORD *)this + 273) )
      {
LABEL_78:
        *((_DWORD *)this + 275) = 0;
        v24 = 0;
        v23 = -2147024882;
LABEL_36:
        *((_DWORD *)this + 274) = v24;
        v25 = *((_DWORD *)this + 356);
        if ( v25 != 10 )
        {
          v26 = v25 + 1;
          goto LABEL_38;
        }
        v43 = *((_DWORD *)this + 357);
        if ( v43 > 0x40 )
          v21 = v43;
        if ( (unsigned __int64)(3 * v21) > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
        }
        else
        {
          if ( (unsigned int)(3 * v21) > *((_DWORD *)this + 355) )
          {
LABEL_73:
            *((_DWORD *)this + 357) = 0;
            v26 = 0;
LABEL_38:
            *((_DWORD *)this + 356) = v26;
            v27 = *((_DWORD *)this + 278);
            if ( v27 )
              *((_DWORD *)this + 278) = v27 - 1;
            v28 = *((_DWORD *)this + 280);
            if ( v28 != 10 )
            {
              v29 = v28 + 1;
              goto LABEL_42;
            }
            v48 = *((_DWORD *)this + 281);
            v49 = 2LL;
            if ( v48 > 2 )
              v49 = v48;
            v16 = (unsigned int)v49;
            if ( (unsigned __int64)(3 * v49) > 0xFFFFFFFF )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
            }
            else
            {
              if ( (unsigned int)(3 * v49) > *((_DWORD *)this + 279) )
              {
LABEL_88:
                *((_DWORD *)this + 281) = 0;
                v29 = 0;
LABEL_42:
                *((_DWORD *)this + 280) = v29;
                v30 = *((_DWORD *)this + 284);
                if ( v30 )
                  *((_DWORD *)this + 284) = v30 - 1;
                v31 = *((_DWORD *)this + 286);
                if ( v31 != 10 )
                {
                  v32 = v31 + 1;
                  goto LABEL_46;
                }
                v46 = *((_DWORD *)this + 287);
                v47 = 2LL;
                if ( v46 > 2 )
                  v47 = v46;
                if ( (unsigned __int64)(3 * v47) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
                }
                else
                {
                  if ( (unsigned int)(3 * v47) > *((_DWORD *)this + 285) )
                  {
LABEL_83:
                    *((_DWORD *)this + 287) = 0;
                    v32 = 0;
LABEL_46:
                    *((_DWORD *)this + 286) = v32;
                    v33 = *((_DWORD *)this + 290);
                    if ( v33 )
                      *((_DWORD *)this + 290) = v33 - 1;
                    v34 = *((_DWORD *)this + 292);
                    if ( v34 == 10 )
                    {
                      v50 = *((_DWORD *)this + 293);
                      v51 = 2LL;
                      if ( v50 > 2 )
                        v51 = v50;
                      if ( (unsigned __int64)(3 * v51) > 0xFFFFFFFF )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
                        v35 = 0;
                        *((_DWORD *)this + 293) = 0;
                      }
                      else if ( (unsigned int)(3 * v51) <= *((_DWORD *)this + 291) )
                      {
                        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v51 <= 8 )
                        {
                          v23 = -2147024809;
                        }
                        else
                        {
                          v63 = MIDL_user_allocate(8 * v51);
                          if ( v63 )
                          {
                            operator delete(*((void **)this + 144));
                            *((_QWORD *)this + 144) = v63;
                            *((_DWORD *)this + 293) = 0;
                            v35 = 0;
                            *((_DWORD *)this + 291) = v51;
                            goto LABEL_50;
                          }
                        }
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x11Eu, 0LL);
                        *((_DWORD *)this + 293) = 0;
                        v35 = 0;
                      }
                      else
                      {
                        *((_DWORD *)this + 293) = 0;
                        v35 = 0;
                      }
                    }
                    else
                    {
                      v35 = v34 + 1;
                    }
LABEL_50:
                    *((_DWORD *)this + 292) = v35;
                    goto LABEL_51;
                  }
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v47 <= 8 )
                  {
                    v66 = -2147024809;
                  }
                  else
                  {
                    v65 = MIDL_user_allocate(8 * v47);
                    if ( v65 )
                    {
                      operator delete(*((void **)this + 141));
                      v22 = 0xFFFFFFFFLL;
                      *((_QWORD *)this + 141) = v65;
                      *((_DWORD *)this + 285) = v47;
                      goto LABEL_83;
                    }
                    v66 = -2147024882;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x11Eu, 0LL);
                }
                v22 = 0xFFFFFFFFLL;
                goto LABEL_83;
              }
              v71 = 0LL;
              v68 = HrMalloc(4uLL, (unsigned int)v49, &v71);
              if ( v68 >= 0 )
              {
                operator delete(*((void **)this + 138));
                *((_QWORD *)this + 138) = v71;
                *((_DWORD *)this + 279) = v49;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x11Eu, 0LL);
              }
            }
            v22 = 0xFFFFFFFFLL;
            goto LABEL_88;
          }
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 <= 0x10 )
          {
            v58 = -2147024809;
          }
          else
          {
            v57 = MIDL_user_allocate(16LL * (unsigned int)v21);
            if ( v57 )
            {
              operator delete(*((void **)this + 176));
              v22 = 0xFFFFFFFFLL;
              *((_QWORD *)this + 176) = v57;
              *((_DWORD *)this + 355) = v21;
              goto LABEL_73;
            }
            v58 = -2147024882;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x11Eu, 0LL);
        }
        v22 = 0xFFFFFFFFLL;
        goto LABEL_73;
      }
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v45 <= 4 )
      {
        v62 = -2147024809;
      }
      else
      {
        v61 = MIDL_user_allocate(4 * v45);
        if ( v61 )
        {
          operator delete(*((void **)this + 135));
          v22 = 0xFFFFFFFFLL;
          *((_QWORD *)this + 135) = v61;
          *((_DWORD *)this + 273) = v45;
          goto LABEL_78;
        }
        v62 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x11Eu, 0LL);
    }
    v22 = 0xFFFFFFFFLL;
    goto LABEL_78;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v56,
    (_DWORD)this + 1080);
  v18 = v17;
  v52 = 158;
LABEL_104:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v52, 0LL);
  v53 = *(CPreComputeContext::SubTreeContext **)this;
  v54 = (CPreComputeContext::SubTreeContext *)*((_QWORD *)this + 1);
  while ( v53 != v54 )
  {
    CPreComputeContext::SubTreeContext::EndWalk(v53, v17);
    v53 = (CPreComputeContext::SubTreeContext *)((char *)v53 + 352);
  }
LABEL_51:
  v36 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5);
  if ( v36 )
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      0LL);
  *((_BYTE *)this + 1568) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64, __int64, __int64))(*(_QWORD *)a2 + 184LL))(
         a2,
         v16,
         v36,
         v22) )
  {
    v38 = *((_QWORD *)this + 179);
    if ( *((_DWORD *)this + 364) )
    {
      v72 = *(char **)v38;
      v73 = *(_DWORD *)(v38 + 8);
      v74 = 0;
      UpdateWindowInputSinkHints(&v72);
    }
    v39 = (void *)*((_QWORD *)this + 179);
    *((_DWORD *)this + 364) = 0;
    if ( v39 != *((void **)this + 180) )
    {
      operator delete(v39);
      *((_QWORD *)this + 179) = *((_QWORD *)this + 180);
      *((_DWORD *)this + 363) = *((_DWORD *)this + 362);
    }
    if ( *((_DWORD *)this + 372) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 183));
    v40 = (void *)*((_QWORD *)this + 183);
    *((_DWORD *)this + 372) = 0;
    if ( v40 != *((void **)this + 184) )
    {
      operator delete(v40);
      *((_QWORD *)this + 183) = *((_QWORD *)this + 184);
      *((_DWORD *)this + 371) = *((_DWORD *)this + 370);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v72 = (char *)a2;
    v76 = &v72;
    v77 = 8LL;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, ":", v37, 2LL, v75);
  }
  return (unsigned int)v17;
}
