/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092400 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180092AE0 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180092D20 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180092F70 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180092FE0 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x180093610 (-GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800C0AF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180195C60 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18020879C (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18024E39C (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CHitTestContext *this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  struct CHitTestContext::HitTestPointResult *v3; // r15
  const struct CHitTestContext::HitTestPointRequest *v4; // r14
  CHitTestContext *v5; // r13
  HANDLE v6; // r12
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rsi
  __int64 v22; // rax
  HWND v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdi
  HWND (__fastcall *v26)(CVisual *__hidden); // rax
  bool v27; // zf
  _DWORD *v28; // r8
  unsigned int v29; // edx
  _BYTE *v30; // rax
  unsigned int i; // ecx
  __int64 v32; // rax
  __int64 *v33; // r14
  __int64 v34; // r14
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rsi
  __int64 v37; // r8
  unsigned int v38; // ebx
  unsigned int v40; // r12d
  __int64 v41; // r8
  bool v42; // r15
  HANDLE CurrentProcess; // rbx
  HANDLE v44; // rax
  __int128 v45; // xmm1
  __int64 v46; // rcx
  int v47; // eax
  __int128 v48; // xmm0
  int v49; // eax
  __int128 v50; // xmm1
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
  struct CTreeData *v80; // r14
  __int64 v81; // rax
  __int64 v82; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v84; // r10
  __int64 v85; // rcx
  int v86; // eax
  int InputType; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  bool v90; // [rsp+40h] [rbp-C0h]
  char v91; // [rsp+41h] [rbp-BFh]
  bool v92; // [rsp+42h] [rbp-BEh] BYREF
  __int64 v93; // [rsp+48h] [rbp-B8h] BYREF
  int v94; // [rsp+50h] [rbp-B0h] BYREF
  HWND v95; // [rsp+58h] [rbp-A8h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  unsigned int v97; // [rsp+68h] [rbp-98h] BYREF
  __int64 v98; // [rsp+70h] [rbp-90h] BYREF
  const struct CHitTestContext::HitTestPointRequest *v99; // [rsp+78h] [rbp-88h]
  CHitTestContext *v100; // [rsp+80h] [rbp-80h]
  HANDLE hSourceHandle; // [rsp+88h] [rbp-78h]
  struct CHitTestContext::HitTestPointResult *v102; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v103; // [rsp+98h] [rbp-68h]
  int v104; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v105; // [rsp+A4h] [rbp-5Ch]
  int v106; // [rsp+B4h] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v108; // [rsp+D0h] [rbp-30h]
  __int128 v109; // [rsp+E0h] [rbp-20h]
  __int128 v110; // [rsp+F0h] [rbp-10h]
  int v111; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v102 = a3;
  v3 = a3;
  v4 = a2;
  v99 = a2;
  v5 = this;
  v100 = this;
  v97 = 0;
  v96 = 0LL;
  v6 = 0LL;
  hSourceHandle = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v53 = *(_QWORD *)a2;
    *((_QWORD *)&v110 + 1) = 8LL;
    *((_QWORD *)&v108 + 1) = 4LL;
    *((_QWORD *)&v109 + 1) = 4LL;
    v54 = *(_QWORD *)(v53 + 72);
    v94 = *((_DWORD *)a2 + 3);
    LODWORD(v93) = *((_DWORD *)a2 + 2);
    *(_QWORD *)&v108 = &v93;
    *(_QWORD *)&v109 = &v94;
    *(_QWORD *)&v110 = &v98;
    v98 = v54;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_TREE_WALK_Start,
      (__int64)a3,
      4u,
      &v107);
  }
  v7 = *((_DWORD *)v4 + 4);
  v8 = (__int64)&_ImageBase;
  v9 = *((unsigned int *)v4 + 5);
  if ( v7 == 4 )
  {
    v10 = 5;
  }
  else
  {
    switch ( v7 )
    {
      case 1:
        v10 = 1;
        break;
      case 2:
        v10 = 2;
        break;
      case 3:
        v10 = 4;
        break;
      case 5:
        v10 = 3;
        break;
      case 6:
        v10 = 7;
        break;
      default:
        v10 = 0;
        break;
    }
  }
  *((_DWORD *)v5 + 22) = v10;
  v11 = 0;
  *((_DWORD *)v5 + 54) = 0;
  *(_QWORD *)((char *)v5 + 92) = 0LL;
  if ( (v9 & 1) == 0 )
    goto LABEL_6;
  *((_DWORD *)v5 + 22) = 6;
  if ( (v9 & 0x100) != 0 )
  {
    if ( (v9 & 4) == 0 )
    {
      v11 = 16;
      v8 = 32LL;
      if ( (v9 & 2) == 0 )
        v11 = 32;
      *((_DWORD *)v5 + 23) = v11;
      goto LABEL_6;
    }
  }
  else if ( (v9 & 4) == 0 )
  {
    v11 = 4;
    if ( (v9 & 2) == 0 )
      v11 = 8;
    *((_DWORD *)v5 + 23) = v11;
    goto LABEL_6;
  }
  v11 = 2 - ((v9 & 2) != 0);
  *((_DWORD *)v5 + 23) = v11;
LABEL_6:
  if ( (v9 & 8) != 0 )
  {
    v11 |= 0x100u;
    *((_DWORD *)v5 + 23) = v11;
  }
  if ( !v11 )
    *((_DWORD *)v5 + 23) = 1024;
  v12 = 0;
  if ( (v9 & 0x40) != 0 )
  {
    *((_DWORD *)v5 + 24) = 256;
    v12 = 256;
  }
  if ( (v9 & 0x80u) != 0LL )
    *((_DWORD *)v5 + 24) = v12 | 0x200;
  if ( (v9 & 0x10) != 0 )
  {
    *((_DWORD *)v5 + 54) |= 1u;
    v13 = *((_DWORD *)v5 + 54);
  }
  else
  {
    v13 = 0;
  }
  if ( (v9 & 0x20) == 0 )
  {
    *((_DWORD *)v5 + 54) |= 2u;
    v13 = *((_DWORD *)v5 + 54);
  }
  v14 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 3));
  v15 = _mm_cvtsi32_si128(*((_DWORD *)v4 + 2));
  v16 = *(_QWORD *)v4;
  *((_QWORD *)v5 + 13) = 0LL;
  *((_DWORD *)v5 + 54) = v13;
  *((_QWORD *)v5 + 14) = 0LL;
  *((_BYTE *)v5 + 120) = 0;
  *((_DWORD *)v5 + 21) = _mm_cvtepi32_ps(v14).m128_u32[0];
  *((_DWORD *)v5 + 20) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v17 = *((_QWORD *)v5 + 16);
  if ( v17 != *((_QWORD *)v5 + 17) )
    *((_QWORD *)v5 + 17) = v17;
  *((_QWORD *)v5 + 19) = 0LL;
  *((_QWORD *)v5 + 20) = 0LL;
  if ( *((_DWORD *)v5 + 44) == *((_DWORD *)v5 + 45)
    && (v86 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Grow(
                (char *)v5 + 168,
                v9,
                v8,
                8LL,
                (char *)v5 + 168),
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
    v18 = *((_DWORD *)v5 + 47);
    if ( v18 <= ++*((_DWORD *)v5 + 44) )
      v18 = *((_DWORD *)v5 + 44);
    *((_DWORD *)v5 + 47) = v18;
  }
  v19 = *(_QWORD *)(v16 + 72);
  *((_QWORD *)v5 + 8) = v16;
  v20 = CVisualTreeIterator::WalkSubtree<CHitTestContext>((char *)v5 + 8, *(_QWORD *)(v16 + 72), v19, v5);
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x22Fu, 0LL);
  v21 = (_QWORD *)*((_QWORD *)v5 + 13);
  if ( !v21 )
  {
LABEL_45:
    InputTraceLogging::DWM::HitTestTreeWalkResult(
      *((unsigned int *)v4 + 4),
      *((unsigned int *)v4 + 5),
      *((_QWORD *)v3 + 3),
      *((_QWORD *)v3 + 2),
      v6,
      v96);
    v38 = v97;
    goto LABEL_46;
  }
  v22 = *(_QWORD *)v4;
  v111 = 0;
  v23 = 0LL;
  v107 = (struct _EVENT_DATA_DESCRIPTOR)_xmm;
  v24 = 0LL;
  v25 = 0LL;
  v103 = *(_QWORD **)(v22 + 72);
  v108 = _xmm;
  *(_WORD *)((char *)&v111 + 1) = 41;
  LODWORD(v22) = *((_DWORD *)v5 + 22);
  v98 = 0LL;
  v90 = (_DWORD)v22 == 0;
  v109 = _xmm;
  v110 = *(__int128 *)&_xmm.r;
  LOBYTE(v111) = -86;
  v93 = 0LL;
  v95 = 0LL;
  v94 = v22;
  v91 = 0;
  do
  {
    if ( v23 )
      goto LABEL_31;
    v26 = *(HWND (__fastcall **)(CVisual *__hidden))(*v21 + 304LL);
    if ( v26 == CVisual::GetHwnd )
    {
      v27 = (v21[13] & 0x40) == 0;
      v95 = 0LL;
      if ( v27 )
        goto LABEL_31;
      TopLevelWindow = (HWND)CVisual::GetTopLevelWindow((CVisual *)v21);
    }
    else if ( v26 == CWindowNode::GetHwnd )
    {
      TopLevelWindow = CWindowNode::GetHwnd((CWindowNode *)v21);
    }
    else
    {
      TopLevelWindow = (HWND)((__int64 (__fastcall *)(_QWORD *, HWND (__fastcall *)(CVisual *__hidden), HWND (__fastcall *)(CWindowNode *__hidden)))v26)(
                               v21,
                               CVisual::GetHwnd,
                               CWindowNode::GetHwnd);
    }
    v23 = TopLevelWindow;
    v95 = TopLevelWindow;
LABEL_31:
    v28 = (_DWORD *)v21[29];
    if ( (*v28 & 0x1000000) == 0 )
      goto LABEL_38;
    v29 = v28[1];
    v30 = v28 + 2;
    for ( i = 0; i < v29; ++v30 )
    {
      if ( *v30 == 8 )
        break;
      ++i;
    }
    v32 = (unsigned int)v28[1];
    if ( i >= (unsigned int)v32 )
      v33 = 0LL;
    else
      v33 = (__int64 *)((char *)v28 + 8LL * i - (((_BYTE)v32 + 15) & 7) + v32 + 15);
    v34 = *v33;
    if ( !v34 )
    {
LABEL_37:
      v23 = v95;
      goto LABEL_38;
    }
    v40 = *((_DWORD *)v5 + 22);
    LODWORD(v93) = v40;
    if ( v40 == 6 )
    {
      v55 = *((unsigned int *)v5 + 23);
      v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v34 + 72) + 88LL);
      if ( (char *)v56 == (char *)&CInteraction::SupportsInteractionType )
        v57 = CInteractionProcessor::SupportsInteractionType(v34 + 360, 6LL, v55);
      else
        v57 = v56(v34 + 72, 6LL, v55);
      if ( !v57 )
      {
        v40 = 5;
        LODWORD(v93) = 5;
      }
    }
    else
    {
      LODWORD(v93) = v40;
      if ( v40 == 4 )
      {
        v41 = *((unsigned int *)v5 + 24);
        if ( !(_DWORD)v41
          || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v34 + 72) + 88LL))(
               v34 + 72,
               4LL,
               v41,
               0LL) )
        {
LABEL_54:
          v42 = 1;
        }
        else
        {
          v42 = 0;
        }
        LODWORD(v93) = v40;
        goto LABEL_86;
      }
      if ( v40 != 5 )
        goto LABEL_54;
    }
    v58 = *((unsigned int *)v5 + 23);
    v59 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v34 + 72) + 88LL);
    if ( (char *)v59 == (char *)&CInteraction::SupportsInteractionType )
      v60 = CInteractionProcessor::SupportsInteractionType(v34 + 360, v40, v58);
    else
      v60 = v59(v34 + 72, v40, v58, 0LL);
    v42 = v60 != 0;
LABEL_86:
    if ( *((_DWORD *)v5 + 22) != 6 )
    {
      v61 = v96;
      goto LABEL_88;
    }
    if ( v91 )
    {
      v61 = v96;
      if ( !v42 )
        goto LABEL_88;
      if ( !v96 )
        goto LABEL_89;
      if ( (*(_BYTE *)(v96 + 200) & 0x10) != 0 && (*(_BYTE *)(v34 + 200) & 0x10) == 0 )
      {
        v61 = 0LL;
        v96 = 0LL;
        v90 = 0;
        hSourceHandle = 0LL;
LABEL_88:
        if ( v61 )
          goto LABEL_91;
LABEL_89:
        if ( !v42 )
          goto LABEL_91;
LABEL_90:
        v96 = v34;
      }
    }
    else if ( !v96 )
    {
      if ( v42 )
        goto LABEL_90;
      if ( ((*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v34 + 72) + 88LL))(
              v34 + 72,
              5LL,
              32831LL)
         || (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v34 + 72) + 88LL))(
              v34 + 72,
              6LL,
              32831LL))
        && (*(_BYTE *)(v34 + 200) & 0x10) == 0 )
      {
        v40 = v93;
        v91 = 1;
      }
      else
      {
        v40 = v93;
        v91 = 0;
      }
    }
LABEL_91:
    if ( !v90 )
    {
      v62 = v34 + 72;
      v63 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v34 + 72) + 80LL);
      if ( v63 == CInteraction::SupportsPointerType )
        v64 = CInteraction::SupportsPointerType(v62, v40, 0LL);
      else
        v64 = v63(v62, v40, 0LL);
      v90 = v64 != 0;
    }
    v65 = *(_QWORD *)(v34 + 112);
    if ( !v65 || !*(_QWORD *)(v65 + 64) )
      goto LABEL_37;
    v66 = v34;
    if ( hSourceHandle || !v42 )
      goto LABEL_117;
    if ( v94 )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v21);
      if ( !InteractionInternal )
        goto LABEL_117;
      v68 = *((_QWORD *)InteractionInternal + 14);
      if ( !v68 )
        goto LABEL_117;
      if ( v40 == 6 )
      {
LABEL_103:
        v69 = *(_DWORD *)(v68 + 76);
      }
      else
      {
        switch ( v40 )
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
              v104 = 24;
              v105 = 0LL;
              v106 = 0;
              if ( (int)NtQueryCompositionInputSink(v85, &v104) >= 0 )
                v69 = v106;
            }
            break;
          default:
            v69 = 0;
            break;
        }
      }
      if ( !v69 )
        goto LABEL_117;
    }
    InputHandle = CVisual::GetInputHandle((CVisual *)v21);
    v71 = (_DWORD *)v21[29];
    v25 = 0LL;
    hSourceHandle = InputHandle;
    v66 = v34;
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
          v25 = *(_QWORD *)(v78 + 96);
      }
    }
    v79 = *(const struct CVisualTree **)v99;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)v99 + 184LL))(*(_QWORD *)v99) )
    {
      v80 = (struct CTreeData *)(v21 + 41);
LABEL_115:
      if ( v80 )
      {
        v92 = 0;
        CVisual::EnsureWorldTransform((CVisual *)v21, v79, v80);
        CTreeData::GetWorldTransform(v80, (struct CMILMatrix *)&v107, &v92, 0LL);
        goto LABEL_117;
      }
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v21);
      v84 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        while ( 1 )
        {
          TreeDataListHead = TreeDataListHead->Flink;
          if ( TreeDataListHead == v84 )
            break;
          v80 = (struct CTreeData *)&TreeDataListHead[-22];
          if ( (const struct CVisualTree *)TreeDataListHead[2].Flink == v79 )
            goto LABEL_115;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
LABEL_117:
    if ( !v98 )
    {
      v81 = *(_QWORD *)(v66 + 112);
      v24 = 0LL;
      if ( v81 )
        v24 = *(_QWORD *)(v81 + 96);
      v98 = v24;
    }
    v23 = v95;
    if ( !v95 && (v82 = *(_QWORD *)(v66 + 112)) != 0 && *(_BYTE *)(v82 + 104) )
    {
      InputType = CInputSinkStruct::GetInputType(v40);
      v89 = v88 + 64;
      while ( v88 != v89 )
      {
        if ( InputType == *(_DWORD *)v88 )
        {
          v23 = *(HWND *)(v88 + 8);
          v95 = v23;
          goto LABEL_123;
        }
        v88 += 16LL;
      }
      v5 = v100;
      v23 = 0LL;
      v95 = 0LL;
    }
    else
    {
LABEL_123:
      v5 = v100;
    }
LABEL_38:
    if ( v21 == v103 )
      break;
    v21 = (_QWORD *)v21[11];
  }
  while ( v21 );
  v3 = v102;
  v35 = (__int64)(*((_QWORD *)v5 + 17) - *((_QWORD *)v5 + 16)) >> 3;
  *(_DWORD *)v102 = v35 + 1;
  if ( (unsigned int)(v35 + 1) <= *((_DWORD *)v3 + 1) )
  {
    v36 = 0LL;
    if ( v35 )
    {
      do
      {
        *(_QWORD *)(*((_QWORD *)v3 + 1) + 8 * v36) = **(_QWORD **)&CVisual::GetInputLuid(*(CVisual **)(*((_QWORD *)v5 + 16) + 8 * v36));
        ++v36;
      }
      while ( v36 < v35 );
      v23 = v95;
    }
    *(_QWORD *)(*((_QWORD *)v3 + 1) + 8 * v35) = v24;
  }
  v6 = hSourceHandle;
  *((_QWORD *)v3 + 2) = v23;
  if ( !v6 || !v96 || !v90 )
  {
    v4 = v99;
    goto LABEL_45;
  }
  CurrentProcess = GetCurrentProcess();
  v44 = GetCurrentProcess();
  if ( DuplicateHandle(v44, v6, CurrentProcess, (LPHANDLE)v3 + 3, 0, 0, 2u) )
  {
    v45 = v108;
    v46 = v96;
    v4 = v99;
    v47 = *(_DWORD *)(v96 + 1720);
    *(struct _EVENT_DATA_DESCRIPTOR *)((char *)v3 + 40) = v107;
    *((_DWORD *)v3 + 27) = v47;
    v48 = v109;
    v49 = v111;
    *(_OWORD *)((char *)v3 + 56) = v45;
    *((_QWORD *)v3 + 4) = v25;
    v50 = v110;
    *(_OWORD *)((char *)v3 + 72) = v48;
    *(_OWORD *)((char *)v3 + 88) = v50;
    *((_DWORD *)v3 + 26) = v49;
    if ( *((_DWORD *)v4 + 4) == 4 )
    {
      v51 = *((_DWORD *)v5 + 22) == 6
         && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v46 + 72) + 80LL))(v46 + 72, 6LL);
      v46 = v96;
    }
    else
    {
      v51 = 1;
    }
    *((_BYTE *)v3 + 112) = v51;
    *(_DWORD *)(v46 + 1724) = *((_DWORD *)v4 + 6);
    *(_BYTE *)(v96 + 200) = *(_BYTE *)(v46 + 200) ^ (*(_BYTE *)(v46 + 200) ^ (2 * *((_BYTE *)v5 + 120))) & 2;
    goto LABEL_45;
  }
  v38 = -805306360;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, -805306360, 0x30Au, 0LL);
  v4 = v99;
LABEL_46:
  *((_DWORD *)v5 + 44) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    v102 = (struct CHitTestContext::HitTestPointResult *)*((_QWORD *)v5 + 13);
    v94 = *((_DWORD *)v4 + 3);
    v97 = *((_DWORD *)v4 + 2);
    *(_QWORD *)&v108 = &v97;
    *(_QWORD *)&v109 = &v94;
    *(_QWORD *)&v110 = &v102;
    *((_QWORD *)&v108 + 1) = 4LL;
    *((_QWORD *)&v109 + 1) = 4LL;
    *((_QWORD *)&v110 + 1) = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HIT_TEST_TREE_WALK_Stop,
      v37,
      4u,
      &v107);
  }
  return v38;
}
