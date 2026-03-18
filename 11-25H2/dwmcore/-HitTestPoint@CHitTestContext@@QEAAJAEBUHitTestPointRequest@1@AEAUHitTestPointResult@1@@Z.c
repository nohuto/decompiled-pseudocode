/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1801362F0
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180135800 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800B4E20 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180137020 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180137700 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180137940 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180137B90 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180137C00 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x1801380E0 (-GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801B3400 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x180214EDC (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18025986C (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CHitTestContext *this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  struct CHitTestContext::HitTestPointResult *v3; // r15
  unsigned int *v4; // r14
  CHitTestContext *v5; // r13
  HANDLE v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int64 *v18; // r8
  int v19; // eax
  CVisual *v20; // rsi
  __int128 v21; // xmm6
  HWND v22; // rcx
  __int128 v23; // xmm7
  __int64 v24; // rbx
  __int128 v25; // xmm8
  __int64 v26; // rdi
  __int128 v27; // xmm9
  unsigned int v28; // eax
  HWND (__fastcall *v29)(CVisual *__hidden); // rax
  bool v30; // zf
  _DWORD *v31; // r8
  unsigned int v32; // edx
  _BYTE *v33; // rax
  unsigned int i; // ecx
  __int64 v35; // rax
  __int64 *v36; // r14
  __int64 v37; // r14
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rsi
  __int64 v40; // r8
  unsigned int v41; // ebx
  unsigned int v43; // r12d
  __int64 v44; // r8
  bool v45; // r15
  HANDLE CurrentProcess; // rbx
  HANDLE v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  bool v51; // al
  HWND TopLevelWindow; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 (__fastcall *v56)(__int64, __int64, __int64); // rax
  int v57; // eax
  __int64 v58; // r8
  __int64 (__fastcall *v59)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 (__fastcall *v63)(__int64, _QWORD, _QWORD); // rax
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r13
  struct CInteraction *InteractionInternal; // rax
  __int64 v68; // rdx
  int v69; // r15d
  void *InputHandle; // rax
  _DWORD *v71; // r8
  unsigned int v72; // edx
  _BYTE *v73; // rax
  __int64 j; // rcx
  __int64 v75; // rax
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  const struct CVisualTree *v79; // r15
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v81; // rax
  __int64 v82; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v84; // r10
  __int64 v85; // rcx
  int v86; // eax
  int InputType; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  DWORD dwDesiredAccess[2]; // [rsp+20h] [rbp-E0h]
  bool v91; // [rsp+40h] [rbp-C0h]
  char v92; // [rsp+41h] [rbp-BFh]
  __int64 v93; // [rsp+48h] [rbp-B8h] BYREF
  HWND v94; // [rsp+50h] [rbp-B0h]
  __int64 v95; // [rsp+58h] [rbp-A8h]
  int v96; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v97; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v98; // [rsp+70h] [rbp-90h] BYREF
  __int64 v99; // [rsp+78h] [rbp-88h] BYREF
  const struct CHitTestContext::HitTestPointRequest *v100; // [rsp+80h] [rbp-80h]
  CHitTestContext *v101; // [rsp+88h] [rbp-78h]
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  struct CHitTestContext::HitTestPointResult *v103; // [rsp+98h] [rbp-68h] BYREF
  CVisual *v104; // [rsp+A0h] [rbp-60h]
  int v105; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v106; // [rsp+ACh] [rbp-54h]
  int v107; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+C0h] [rbp-40h] BYREF
  int *v109; // [rsp+D0h] [rbp-30h]
  __int64 v110; // [rsp+D8h] [rbp-28h]
  unsigned int *v111; // [rsp+E0h] [rbp-20h]
  __int64 v112; // [rsp+E8h] [rbp-18h]
  struct CHitTestContext::HitTestPointResult **v113; // [rsp+F0h] [rbp-10h]
  __int64 v114; // [rsp+F8h] [rbp-8h]
  int v115; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v103 = a3;
  v3 = a3;
  v4 = (unsigned int *)a2;
  v100 = a2;
  v5 = this;
  v101 = this;
  v98 = 0;
  v95 = 0LL;
  v6 = 0LL;
  hSourceHandle = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v53 = *(_QWORD *)a2;
    v114 = 8LL;
    v110 = 4LL;
    v112 = 4LL;
    v54 = *(_QWORD *)(v53 + 72);
    LODWORD(v93) = *((_DWORD *)a2 + 3);
    v96 = *((_DWORD *)a2 + 2);
    v109 = &v96;
    v111 = (unsigned int *)&v93;
    v113 = (struct CHitTestContext::HitTestPointResult **)&v99;
    v99 = v54;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_TREE_WALK_Start,
      (__int64)a3,
      4u,
      &v108);
  }
  v7 = v4[4];
  v8 = v4[5];
  if ( v7 == 4 )
  {
    v9 = 5;
  }
  else
  {
    switch ( v7 )
    {
      case 1u:
        v9 = 1;
        break;
      case 2u:
        v9 = 2;
        break;
      case 3u:
        v9 = 4;
        break;
      case 5u:
        v9 = 3;
        break;
      case 6u:
        v9 = 7;
        break;
      default:
        v9 = 0;
        break;
    }
  }
  *((_DWORD *)v5 + 22) = v9;
  v10 = 0;
  *((_DWORD *)v5 + 54) = 0;
  *(_QWORD *)((char *)v5 + 92) = 0LL;
  if ( (v8 & 1) == 0 )
    goto LABEL_6;
  *((_DWORD *)v5 + 22) = 6;
  if ( (v8 & 0x100) != 0 )
  {
    if ( (v8 & 4) == 0 )
    {
      v10 = 16;
      if ( (v8 & 2) == 0 )
        v10 = 32;
      *((_DWORD *)v5 + 23) = v10;
      goto LABEL_6;
    }
  }
  else if ( (v8 & 4) == 0 )
  {
    v10 = 4;
    if ( (v8 & 2) == 0 )
      v10 = 8;
    *((_DWORD *)v5 + 23) = v10;
    goto LABEL_6;
  }
  v10 = 2 - ((v8 & 2) != 0);
  *((_DWORD *)v5 + 23) = v10;
LABEL_6:
  if ( (v8 & 8) != 0 )
  {
    v10 |= 0x100u;
    *((_DWORD *)v5 + 23) = v10;
  }
  if ( !v10 )
    *((_DWORD *)v5 + 23) = 1024;
  v11 = 0;
  if ( (v8 & 0x40) != 0 )
  {
    *((_DWORD *)v5 + 24) = 256;
    v11 = 256;
  }
  if ( (v8 & 0x80u) != 0 )
    *((_DWORD *)v5 + 24) = v11 | 0x200;
  if ( (v8 & 0x10) != 0 )
  {
    *((_DWORD *)v5 + 54) |= 1u;
    v12 = *((_DWORD *)v5 + 54);
  }
  else
  {
    v12 = 0;
  }
  if ( (v8 & 0x20) == 0 )
  {
    *((_DWORD *)v5 + 54) |= 2u;
    v12 = *((_DWORD *)v5 + 54);
  }
  v13 = _mm_cvtsi32_si128(v4[3]);
  v14 = _mm_cvtsi32_si128(v4[2]);
  v15 = *(_QWORD *)v4;
  *((_QWORD *)v5 + 13) = 0LL;
  *((_DWORD *)v5 + 54) = v12;
  *((_QWORD *)v5 + 14) = 0LL;
  *((_BYTE *)v5 + 120) = 0;
  *((_DWORD *)v5 + 21) = _mm_cvtepi32_ps(v13).m128_u32[0];
  *((_DWORD *)v5 + 20) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v16 = *((_QWORD *)v5 + 16);
  if ( v16 != *((_QWORD *)v5 + 17) )
    *((_QWORD *)v5 + 17) = v16;
  *((_QWORD *)v5 + 19) = 0LL;
  *((_QWORD *)v5 + 20) = 0LL;
  if ( *((_DWORD *)v5 + 44) == *((_DWORD *)v5 + 45)
    && (*(_QWORD *)dwDesiredAccess = (char *)v5 + 168,
        v86 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Grow((char *)v5 + 168),
        v86 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v86);
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)v5 + 21) + 4LL * *((unsigned int *)v5 + 44)) = 0;
    v17 = *((_DWORD *)v5 + 47);
    if ( v17 <= ++*((_DWORD *)v5 + 44) )
      v17 = *((_DWORD *)v5 + 44);
    *((_DWORD *)v5 + 47) = v17;
  }
  v18 = *(unsigned __int64 **)(v15 + 72);
  *((_QWORD *)v5 + 8) = v15;
  v19 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(
          (__int64)v5 + 8,
          *(__int64 **)(v15 + 72),
          v18,
          v5,
          *(_QWORD *)dwDesiredAccess);
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x22Fu, 0LL);
  v20 = (CVisual *)*((_QWORD *)v5 + 13);
  if ( !v20 )
  {
LABEL_45:
    InputTraceLogging::DWM::HitTestTreeWalkResult(v4[4], v4[5], *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 2), v6, v95);
    v41 = v98;
    goto LABEL_46;
  }
  v21 = _xmm;
  v22 = 0LL;
  v23 = _xmm;
  v24 = 0LL;
  v25 = _xmm;
  v26 = 0LL;
  v27 = *(__int128 *)&_xmm.r;
  v104 = *(CVisual **)(*(_QWORD *)v4 + 72LL);
  v115 = 10666;
  v99 = 0LL;
  v28 = *((_DWORD *)v5 + 22);
  v91 = v28 == 0;
  v93 = 0LL;
  v94 = 0LL;
  v97 = v28;
  v92 = 0;
  v96 = 10666;
  do
  {
    if ( v22 )
      goto LABEL_31;
    v29 = *(HWND (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v20 + 304LL);
    if ( v29 == CVisual::GetHwnd )
    {
      v30 = (*((_BYTE *)v20 + 104) & 0x40) == 0;
      v22 = 0LL;
      v94 = 0LL;
      if ( v30 )
        goto LABEL_31;
      TopLevelWindow = (HWND)CVisual::GetTopLevelWindow(v20);
    }
    else if ( v29 == CWindowNode::GetHwnd )
    {
      TopLevelWindow = CWindowNode::GetHwnd(v20);
    }
    else
    {
      TopLevelWindow = (HWND)((__int64 (__fastcall *)(CVisual *, HWND (__fastcall *)(CVisual *__hidden), HWND (__fastcall *)(CWindowNode *__hidden)))v29)(
                               v20,
                               CVisual::GetHwnd,
                               CWindowNode::GetHwnd);
    }
    v22 = TopLevelWindow;
    v94 = TopLevelWindow;
LABEL_31:
    v31 = (_DWORD *)*((_QWORD *)v20 + 29);
    if ( (*v31 & 0x1000000) == 0 )
      goto LABEL_38;
    v32 = v31[1];
    v33 = v31 + 2;
    for ( i = 0; i < v32; ++v33 )
    {
      if ( *v33 == 8 )
        break;
      ++i;
    }
    v35 = (unsigned int)v31[1];
    if ( i >= (unsigned int)v35 )
      v36 = 0LL;
    else
      v36 = (__int64 *)((char *)v31 + 8LL * i - (((_BYTE)v35 + 15) & 7) + v35 + 15);
    v37 = *v36;
    if ( !v37 )
    {
LABEL_37:
      v22 = v94;
      goto LABEL_38;
    }
    v43 = *((_DWORD *)v5 + 22);
    LODWORD(v93) = v43;
    if ( v43 == 6 )
    {
      v55 = *((unsigned int *)v5 + 23);
      v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v37 + 72) + 88LL);
      if ( (char *)v56 == (char *)&CInteraction::SupportsInteractionType )
        v57 = CInteractionProcessor::SupportsInteractionType(v37 + 360, 6LL, v55);
      else
        v57 = v56(v37 + 72, 6LL, v55);
      if ( !v57 )
      {
        v43 = 5;
        LODWORD(v93) = 5;
      }
    }
    else
    {
      LODWORD(v93) = v43;
      if ( v43 == 4 )
      {
        v44 = *((unsigned int *)v5 + 24);
        if ( !(_DWORD)v44
          || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v37 + 72) + 88LL))(
               v37 + 72,
               4LL,
               v44,
               0LL) )
        {
LABEL_54:
          v45 = 1;
        }
        else
        {
          v45 = 0;
        }
        LODWORD(v93) = v43;
        goto LABEL_86;
      }
      if ( v43 != 5 )
        goto LABEL_54;
    }
    v58 = *((unsigned int *)v5 + 23);
    v59 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v37 + 72) + 88LL);
    if ( (char *)v59 == (char *)&CInteraction::SupportsInteractionType )
      v60 = CInteractionProcessor::SupportsInteractionType(v37 + 360, v43, v58);
    else
      v60 = v59(v37 + 72, v43, v58, 0LL);
    v45 = v60 != 0;
LABEL_86:
    if ( *((_DWORD *)v5 + 22) != 6 )
    {
      v61 = v95;
      goto LABEL_88;
    }
    if ( v92 )
    {
      v61 = v95;
      if ( !v45 )
        goto LABEL_88;
      if ( !v95 )
        goto LABEL_89;
      if ( (*(_BYTE *)(v95 + 200) & 0x10) != 0 && (*(_BYTE *)(v37 + 200) & 0x10) == 0 )
      {
        v61 = 0LL;
        v95 = 0LL;
        v91 = 0;
        hSourceHandle = 0LL;
LABEL_88:
        if ( v61 )
          goto LABEL_91;
LABEL_89:
        if ( !v45 )
          goto LABEL_91;
LABEL_90:
        v95 = v37;
      }
    }
    else if ( !v95 )
    {
      if ( v45 )
        goto LABEL_90;
      if ( ((*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v37 + 72) + 88LL))(
              v37 + 72,
              5LL,
              32831LL)
         || (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v37 + 72) + 88LL))(
              v37 + 72,
              6LL,
              32831LL))
        && (*(_BYTE *)(v37 + 200) & 0x10) == 0 )
      {
        v43 = v93;
        v92 = 1;
      }
      else
      {
        v43 = v93;
        v92 = 0;
      }
    }
LABEL_91:
    if ( !v91 )
    {
      v62 = v37 + 72;
      v63 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v37 + 72) + 80LL);
      if ( v63 == CInteraction::SupportsPointerType )
        v64 = CInteraction::SupportsPointerType(v62, v43, 0LL);
      else
        v64 = v63(v62, v43, 0LL);
      v91 = v64 != 0;
    }
    v65 = *(_QWORD *)(v37 + 112);
    if ( !v65 || !*(_QWORD *)(v65 + 64) )
      goto LABEL_37;
    v66 = v37;
    if ( hSourceHandle || !v45 )
      goto LABEL_118;
    if ( v97 )
    {
      InteractionInternal = CVisual::GetInteractionInternal(v20);
      if ( !InteractionInternal )
        goto LABEL_118;
      v68 = *((_QWORD *)InteractionInternal + 14);
      if ( !v68 )
        goto LABEL_118;
      if ( v43 == 6 )
      {
LABEL_103:
        v69 = *(_DWORD *)(v68 + 76);
      }
      else
      {
        switch ( v43 )
        {
          case 2u:
          case 3u:
            v69 = *(_DWORD *)(v68 + 84);
            break;
          case 4u:
            v69 = *(_DWORD *)(v68 + 88);
            break;
          case 5u:
            goto LABEL_103;
          case 7u:
            v85 = *(_QWORD *)(v68 + 64);
            v69 = 0;
            if ( v85 )
            {
              v105 = 24;
              v106 = 0LL;
              v107 = 0;
              if ( (int)NtQueryCompositionInputSink(v85, &v105) >= 0 )
                v69 = v107;
            }
            break;
          default:
            v69 = 0;
            break;
        }
      }
      if ( !v69 )
        goto LABEL_118;
    }
    InputHandle = CVisual::GetInputHandle(v20);
    v71 = (_DWORD *)*((_QWORD *)v20 + 29);
    v26 = 0LL;
    hSourceHandle = InputHandle;
    v66 = v37;
    if ( (*v71 & 0x1000000) != 0 )
    {
      v72 = v71[1];
      v73 = v71 + 2;
      for ( j = 0LL; (unsigned int)j < v72; ++v73 )
      {
        if ( *v73 == 8 )
          break;
        j = (unsigned int)(j + 1);
      }
      v75 = (unsigned int)v71[1];
      if ( (unsigned int)j >= (unsigned int)v75 )
        v76 = 0LL;
      else
        v76 = (__int64 *)((char *)v71 + 8 * j - (((_BYTE)v75 + 15) & 7) + v75 + 15);
      v77 = *v76;
      if ( v77 )
      {
        v78 = *(_QWORD *)(v77 + 112);
        if ( v78 )
          v26 = *(_QWORD *)(v78 + 96);
      }
    }
    v79 = *(const struct CVisualTree **)v100;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v100 + 184LL))(*(_QWORD *)v100) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v20);
      v84 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        while ( 1 )
        {
          TreeDataListHead = TreeDataListHead->Flink;
          if ( TreeDataListHead == v84 )
            break;
          p_Blink = &TreeDataListHead[-22].Blink;
          if ( (const struct CVisualTree *)TreeDataListHead[2].Flink == v79 )
            goto LABEL_115;
        }
      }
LABEL_133:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
      goto LABEL_118;
    }
    p_Blink = (struct _LIST_ENTRY **)((char *)v20 + 328);
LABEL_115:
    if ( !p_Blink )
      goto LABEL_133;
    CVisual::EnsureWorldTransform(v20, v79, (RTL_SRWLOCK *)p_Blink);
    if ( !p_Blink[28] )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    v21 = *((_OWORD *)p_Blink + 17);
    v96 = *((_DWORD *)p_Blink + 84);
    v23 = *((_OWORD *)p_Blink + 18);
    v25 = *((_OWORD *)p_Blink + 19);
    v27 = *((_OWORD *)p_Blink + 20);
LABEL_118:
    if ( !v99 )
    {
      v81 = *(_QWORD *)(v66 + 112);
      v24 = 0LL;
      if ( v81 )
        v24 = *(_QWORD *)(v81 + 96);
      v99 = v24;
    }
    v22 = v94;
    if ( !v94 && (v82 = *(_QWORD *)(v66 + 112)) != 0 && *(_BYTE *)(v82 + 104) )
    {
      InputType = CInputSinkStruct::GetInputType(v43);
      v89 = v88 + 64;
      while ( v88 != v89 )
      {
        if ( InputType == *(_DWORD *)v88 )
        {
          v22 = *(HWND *)(v88 + 8);
          v94 = v22;
          goto LABEL_124;
        }
        v88 += 16LL;
      }
      v5 = v101;
      v22 = 0LL;
      v94 = 0LL;
    }
    else
    {
LABEL_124:
      v5 = v101;
    }
LABEL_38:
    if ( v20 == v104 )
      break;
    v20 = (CVisual *)*((_QWORD *)v20 + 11);
  }
  while ( v20 );
  v3 = v103;
  v38 = (__int64)(*((_QWORD *)v5 + 17) - *((_QWORD *)v5 + 16)) >> 3;
  *(_DWORD *)v103 = v38 + 1;
  if ( (unsigned int)(v38 + 1) <= *((_DWORD *)v3 + 1) )
  {
    v39 = 0LL;
    if ( v38 )
    {
      do
      {
        *(_QWORD *)(*((_QWORD *)v3 + 1) + 8 * v39) = **(_QWORD **)&CVisual::GetInputLuid(*(CVisual **)(*((_QWORD *)v5 + 16) + 8 * v39));
        ++v39;
      }
      while ( v39 < v38 );
      v22 = v94;
    }
    *(_QWORD *)(*((_QWORD *)v3 + 1) + 8 * v38) = v24;
  }
  v6 = hSourceHandle;
  *((_QWORD *)v3 + 2) = v22;
  if ( !v6 || !v95 || !v91 )
  {
    v4 = (unsigned int *)v100;
    goto LABEL_45;
  }
  CurrentProcess = GetCurrentProcess();
  v47 = GetCurrentProcess();
  if ( DuplicateHandle(v47, v6, CurrentProcess, (LPHANDLE)v3 + 3, 0, 0, 2u) )
  {
    v48 = v95;
    v4 = (unsigned int *)v100;
    v49 = *(_DWORD *)(v95 + 1720);
    *(_OWORD *)((char *)v3 + 40) = v21;
    *((_DWORD *)v3 + 27) = v49;
    v50 = v96;
    *(_OWORD *)((char *)v3 + 56) = v23;
    *((_QWORD *)v3 + 4) = v26;
    *(_OWORD *)((char *)v3 + 72) = v25;
    *(_OWORD *)((char *)v3 + 88) = v27;
    *((_DWORD *)v3 + 26) = v50;
    if ( v4[4] == 4 )
    {
      v51 = *((_DWORD *)v5 + 22) == 6
         && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v48 + 72) + 80LL))(v48 + 72, 6LL);
      v48 = v95;
    }
    else
    {
      v51 = 1;
    }
    *((_BYTE *)v3 + 112) = v51;
    *(_DWORD *)(v48 + 1724) = v4[6];
    *(_BYTE *)(v95 + 200) = *(_BYTE *)(v48 + 200) ^ (*(_BYTE *)(v48 + 200) ^ (2 * *((_BYTE *)v5 + 120))) & 2;
    goto LABEL_45;
  }
  v41 = -805306360;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, -805306360, 0x30Au, 0LL);
  v4 = (unsigned int *)v100;
LABEL_46:
  *((_DWORD *)v5 + 44) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v103 = (struct CHitTestContext::HitTestPointResult *)*((_QWORD *)v5 + 13);
    v97 = v4[3];
    v98 = v4[2];
    v109 = (int *)&v98;
    v111 = &v97;
    v113 = &v103;
    v110 = 4LL;
    v112 = 4LL;
    v114 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_TREE_WALK_Stop,
      v40,
      4u,
      &v108);
  }
  return v41;
}
