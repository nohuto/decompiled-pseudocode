/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800886F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025F40 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180043580 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0ShellGesturesRecognizer@@QEAA@XZ @ 0x1800527E0 (--0ShellGesturesRecognizer@@QEAA@XZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800528D0 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x180093914 (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C2AC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F32E8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158D94 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180158DDC (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158E74 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x1801590D4 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     _lambda_c192c8e12fd8d97ede3f075e8e800885_::operator() @ 0x180159268 (_lambda_c192c8e12fd8d97ede3f075e8e800885_--operator().c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@QEAA_NXZ @ 0x18015A7C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ClickToDoPenEdgy@@@details@wil@@Q.c)
 *     ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z @ 0x18015ABF4 (-HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@_NK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  struct HitTestInfo *v6; // r15
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 *v12; // rdi
  _OWORD *v13; // r8
  UINT v14; // edx
  UINT v15; // ecx
  __int64 v16; // r13
  void *v17; // rax
  __int64 v18; // r8
  wil::details::in1diag3 *v19; // r9
  _DWORD *v20; // rsi
  _DWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r13
  POINT v25; // rbx
  __int64 *v26; // rax
  int v27; // r14d
  __int64 *v28; // rdi
  int v29; // r13d
  unsigned __int64 v30; // rsi
  size_t v31; // rsi
  void *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r15
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 *i; // r14
  bool v38; // si
  bool v39; // zf
  unsigned int v40; // esi
  __int64 v41; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v42; // rdx
  __int64 v43; // rsi
  int v44; // eax
  signed __int32 v45; // edx
  bool v46; // sf
  __int64 v47; // rdx
  __int64 *v48; // rsi
  const struct std::nothrow_t *v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rsi
  int v52; // eax
  signed __int32 v53; // edx
  __int64 v54; // rdx
  const char *v55; // r9
  __int128 v56; // xmm6
  void *v57; // rax
  unsigned __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rbx
  __int64 v61; // rcx
  _DWORD *v62; // rdx
  _DWORD *v63; // rcx
  __int64 v64; // rcx
  char v65; // al
  __int64 *v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 *v69; // r15
  __int64 *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // r14
  int (__fastcall ***v74)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v75)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v76; // rbx
  struct HitTestInfo *v77; // rdi
  __int64 v78; // rax
  struct HitTestInfo *v79; // rbx
  __int64 v80; // rcx
  _QWORD *v81; // rdi
  _QWORD *v82; // r14
  __int64 v83; // r8
  struct HitTestInfo *v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rdx
  _DWORD *v87; // rbx
  volatile signed __int32 *v88; // rcx
  _QWORD *v89; // rsi
  _DWORD *v90; // rdx
  volatile signed __int32 *v91; // rcx
  char *v93; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+28h] [rbp-D8h] BYREF
  struct HitTestInfo *v95; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+38h] [rbp-C8h] BYREF
  int pvParam; // [rsp+40h] [rbp-C0h] BYREF
  int v98; // [rsp+44h] [rbp-BCh]
  struct InputContext *v99; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v100; // [rsp+50h] [rbp-B0h]
  Microsoft::BamoImpl::BamoImplObject *v101; // [rsp+58h] [rbp-A8h] BYREF
  char v102; // [rsp+60h] [rbp-A0h]
  char v103; // [rsp+61h] [rbp-9Fh]
  int v104; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+70h] [rbp-90h]
  struct ContextualProcessorInitialState *v106; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+80h] [rbp-80h]
  __int128 v108; // [rsp+88h] [rbp-78h]
  char *v109; // [rsp+98h] [rbp-68h]
  __int64 v110; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v112; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v113; // [rsp+B8h] [rbp-48h]
  struct HitTestInfo *v114; // [rsp+C0h] [rbp-40h]
  void *v115; // [rsp+C8h] [rbp-38h]
  __int64 v116; // [rsp+D0h] [rbp-30h]
  __int64 v117; // [rsp+D8h] [rbp-28h]
  __int128 v118; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v119[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v120; // [rsp+110h] [rbp+10h]
  _OWORD v121[3]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v122; // [rsp+150h] [rbp+50h]
  int v123; // [rsp+160h] [rbp+60h]
  __int128 v124; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v106 = a4;
  v99 = a3;
  v6 = a2;
  v95 = a2;
  v104 = 0;
  *(_DWORD *)a4 = 0;
  v8 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x88) == 8 )
  {
    v9 = 8;
  }
  else if ( (v8 & 0x1000000) != 0 )
  {
    v9 = 0x1000000;
  }
  else
  {
    v9 = 0;
    if ( (v8 & 0x90) == 0x10 )
      v9 = 16;
  }
  HIDWORD(v93) = v9;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl)
    && v9 == 16 )
  {
    return 0LL;
  }
  LOBYTE(v93) = 1;
  memset(v121, 0, sizeof(v121));
  v122 = 0LL;
  v123 = 0;
  memset(v119, 0, sizeof(v119));
  v120 = 0LL;
  if ( v9 == 0x1000000 )
  {
    v12 = (__int64 *)((char *)a4 + 8);
    if ( *v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        v11);
    ShellGesturesProcessor::TraceClients();
  }
  else
  {
    if ( ((v9 - 8) & 0xFFFFFFF7) != 0 || (*((_BYTE *)v6 + 32) & 4) == 0 )
      return 0LL;
    v12 = (__int64 *)((char *)a4 + 8);
    if ( !*v12 )
    {
      ShellGesturesProcessor::TraceClients();
      if ( v9 == 8 )
      {
        pvParam = 0;
        if ( !SystemParametersInfoW(0x2030u, 0, &pvParam, 0) || !pvParam )
          LOBYTE(v93) = 0;
        v13 = v121;
        v14 = 68;
        v15 = 146;
      }
      else
      {
        LOBYTE(v93) = 0;
        v13 = v119;
        v14 = 40;
        v15 = 148;
      }
      SystemParametersInfoW(v15, v14, v13, 0);
    }
  }
  v16 = *v12;
  if ( *v12 )
  {
    if ( !*(_BYTE *)(v16 + 16) || *(_QWORD *)(v16 + 248) )
      goto LABEL_187;
    if ( *(_QWORD *)(v16 + 256) )
    {
      v79 = 0LL;
      v114 = 0LL;
      v80 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
      v81 = *(_QWORD **)(v80 - 24);
      v82 = *(_QWORD **)(v80 - 16);
      if ( v81 != v82 )
      {
        while ( 1 )
        {
          InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v81, &v95);
          v84 = v95;
          if ( v95 )
          {
            LOBYTE(v83) = 1;
            if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                    v95,
                                    *(unsigned int *)v6,
                                    v83,
                                    *((unsigned int *)v6 + 13)) )
            {
              if ( (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v84)
                && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v85, v84, v6) )
              {
                break;
              }
            }
          }
          if ( v84 )
          {
            v95 = 0LL;
            (*(void (__fastcall **)(__int64))(*((_QWORD *)v84 + 2) + 8LL))((__int64)v84 + 16);
          }
          if ( ++v81 == v82 )
            goto LABEL_177;
        }
        (**((void (__fastcall ***)(__int64))v84 + 2))((__int64)v84 + 16);
        v79 = v84;
        v114 = v84;
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v84 + 2) + 8LL))((__int64)v84 + 16);
      }
LABEL_177:
      v10 = *(_QWORD *)(v16 + 256);
      if ( v79 != (struct HitTestInfo *)v10 && v10 )
      {
        *(_QWORD *)(v16 + 256) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 16) + 8LL))(v10 + 16);
      }
      if ( v79 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v79 + 2) + 8LL))((__int64)v79 + 16);
    }
    if ( !*(_QWORD *)(v16 + 248) )
    {
      v86 = *(_QWORD *)(v16 + 264);
      if ( v86 )
      {
        if ( (unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v10, v86, v6) )
        {
          v10 = *(_QWORD *)(v16 + 264);
          if ( v10 )
          {
            *(_QWORD *)(v16 + 264) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 16) + 8LL))(v10 + 16);
          }
        }
      }
    }
    goto LABEL_187;
  }
  v116 = 0LL;
  v104 = 1;
  v17 = operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v115 = v17;
  v20 = v17;
  v114 = (struct HitTestInfo *)v17;
  v21 = 0LL;
  if ( v17 )
  {
    v113 = (__int64 *)v17;
    memset_0(v17, 0, 0x1D0uLL);
    v20[3] = 1;
    *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v20 = &ShellGesturesProcessor::Context::`vftable';
    *((_WORD *)v20 + 8) = 0;
    *((_BYTE *)v20 + 18) = 0;
    *(_DWORD *)((char *)v20 + 19) = 0;
    *((_BYTE *)v20 + 23) = 0;
    memset_0(v20 + 6, 0, 0xE0uLL);
    ShellGesturesRecognizer::ShellGesturesRecognizer((ShellGesturesRecognizer *)(v20 + 6));
    *((_QWORD *)v20 + 31) = 0LL;
    *((_QWORD *)v20 + 32) = 0LL;
    *((_QWORD *)v20 + 33) = 0LL;
    *((_BYTE *)v20 + 416) = 0;
    *((_BYTE *)v20 + 456) = 0;
    v115 = 0LL;
    v21 = v20;
  }
  v22 = 0LL;
  v116 = 0LL;
  v23 = *v12;
  *v12 = (__int64)v21;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v22 = 0LL;
  }
  v24 = *v12;
  v105 = *v12;
  if ( HIDWORD(v93) == 8 )
    *(_BYTE *)(v24 + 240) = v123 != 0;
  v118 = 0LL;
  v25 = *(POINT *)((char *)v6 + 44);
  v26 = (__int64 *)*((_QWORD *)this + 5);
  v113 = v26;
  v27 = 0;
  v28 = (__int64 *)*v26;
  while ( 2 )
  {
    v10 = 0x7FFFFFFFFFFFFFFLL;
    v98 = v27;
    if ( v28 == v26 )
      goto LABEL_101;
    v29 = *((_DWORD *)v28 + 4);
    v107 = v29;
    v108 = 0LL;
    v109 = 0LL;
    v30 = (v28[4] - v28[3]) >> 5;
    if ( v30 )
    {
      if ( v30 > 0x7FFFFFFFFFFFFFFLL )
        std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(0x7FFFFFFFFFFFFFFLL, 0LL, v18, v19);
      v31 = 32 * v30;
      if ( v31 < 0x1000 )
      {
        if ( v31 )
          v34 = (__int64 *)operator new(v31);
        else
          v34 = 0LL;
      }
      else
      {
        if ( v31 + 39 < v31 )
          std::_Throw_bad_array_new_length();
        v32 = operator new(v31 + 39);
        if ( !v32 )
        {
          _o__invalid_parameter_noinfo_noreturn(v10, v33);
          __debugbreak();
          goto LABEL_100;
        }
        v34 = (__int64 *)(((unsigned __int64)v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v34 - 1) = (__int64)v32;
      }
      *(_QWORD *)&v108 = v34;
      v109 = (char *)&v34[v31 / 8];
      v35 = v28[4];
      v36 = v28[3];
      for ( i = v34; v36 != v35; v36 += 32LL )
      {
        *i = *(_QWORD *)v36;
        *((_DWORD *)i + 2) = *(_DWORD *)(v36 + 8);
        v10 = *(_QWORD *)(v36 + 16);
        i[2] = v10;
        if ( v10 )
          (**(void (__fastcall ***)(__int64))v10)(v10);
        *((_BYTE *)i + 24) = *(_BYTE *)(v36 + 24);
        i += 4;
      }
      *((_QWORD *)&v108 + 1) = i;
      v27 = v98;
    }
    else
    {
      v34 = (__int64 *)v108;
    }
    v38 = 0;
    if ( HIDWORD(v93) == 8 )
    {
      if ( v29 == 1 )
      {
        v38 = DWORD2(v122) != 0;
LABEL_51:
        v39 = !v38;
        goto LABEL_52;
      }
      if ( v29 != 4 )
        goto LABEL_53;
      v39 = HIDWORD(v122) == 0;
    }
    else
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl)
        || HIDWORD(v93) != 16 )
      {
        goto LABEL_79;
      }
      if ( v29 == 1 )
        v38 = (_DWORD)v120 != 0;
      if ( v29 != 4 )
        goto LABEL_51;
      v39 = HIDWORD(v120) == 0;
    }
LABEL_52:
    if ( v39 )
      goto LABEL_79;
LABEL_53:
    if ( v34 == *((__int64 **)&v108 + 1) )
      goto LABEL_79;
    while ( !(unsigned __int8)ShouldSelectClient<DragManagerClientProxy>(v34[2]) )
    {
LABEL_97:
      v34 += 4;
      if ( v34 == *((__int64 **)&v108 + 1) )
        goto LABEL_78;
    }
    v40 = 0;
    v110 = 0LL;
    v94 = 0;
    v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34[2] + 32) + 24LL) + 32LL);
    if ( *(int *)(v41 + 8) <= 0 )
      v42 = 0LL;
    else
      v42 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v41 + 16);
    Microsoft::Bamo::Lock::Lock(&v101, v42);
    (*(void (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)(v34[2] + 8) + 88LL))(v34[2] + 8, &v110, &v94);
    if ( v94 )
    {
      while ( !PtInRect((const RECT *)(v110 + 16LL * v40), v25) )
      {
        if ( ++v40 == v94 )
          goto LABEL_69;
      }
      v51 = *((_QWORD *)v101 + 4);
      --*(_DWORD *)(v51 + 188);
      if ( !v102 )
      {
        if ( v103 )
        {
          v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v51 + 56) + 104LL))(*(_QWORD *)(v51 + 56));
          if ( v52 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA16,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v52,
              (int)v93);
        }
        Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v51);
      }
      v10 = (__int64)v101;
      if ( v101 )
      {
        v53 = _InterlockedExchangeAdd((volatile signed __int32 *)v101 + 2, 0xFFFFFFFF);
        v46 = v53 - 1 < 0;
        v54 = (unsigned int)(v53 - 1);
        v19 = retaddr;
        if ( v46 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x33,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
            (const char *)retaddr);
        if ( !(_DWORD)v54 )
          (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v10 + 24LL))(
            v10,
            v54,
            v18,
            retaddr);
      }
      goto LABEL_97;
    }
LABEL_69:
    v43 = *((_QWORD *)v101 + 4);
    --*(_DWORD *)(v43 + 188);
    if ( !v102 )
    {
      if ( v103 )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v43 + 56) + 104LL))(*(_QWORD *)(v43 + 56));
        if ( v44 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA16,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v44,
            (int)v93);
      }
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v43);
    }
    v10 = (__int64)v101;
    if ( v101 )
    {
      v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v101 + 2, 0xFFFFFFFF);
      v46 = v45 - 1 < 0;
      v47 = (unsigned int)(v45 - 1);
      v19 = retaddr;
      if ( v46 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          (const char *)retaddr);
      if ( !(_DWORD)v47 )
        (*(void (__fastcall **)(__int64, __int64, __int64, wil::details::in1diag3 *))(*(_QWORD *)v10 + 24LL))(
          v10,
          v47,
          v18,
          retaddr);
    }
    v27 |= v107;
LABEL_78:
    v34 = (__int64 *)v108;
LABEL_79:
    if ( !v34 )
    {
LABEL_88:
      v28 = (__int64 *)*v28;
      v26 = v113;
      v22 = 0LL;
      continue;
    }
    break;
  }
  if ( v34 != *((__int64 **)&v108 + 1) )
  {
    v48 = v34 + 2;
    do
    {
      v10 = *v48;
      if ( *v48 )
      {
        *v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
      v48 += 4;
    }
    while ( v48 - 2 != *((__int64 **)&v108 + 1) );
  }
  v49 = (const struct std::nothrow_t *)((v109 - (char *)v34) & 0xFFFFFFFFFFFFFFE0uLL);
  v50 = v34;
  if ( (unsigned __int64)v49 < 0x1000
    || (v49 = (const struct std::nothrow_t *)((char *)v49 + 39),
        v34 = (__int64 *)*(v34 - 1),
        (unsigned __int64)((char *)v50 - (char *)v34 - 8) <= 0x1F) )
  {
    operator delete(v34, v49);
    goto LABEL_88;
  }
LABEL_100:
  _o__invalid_parameter_noinfo_noreturn(v10, v49);
  __debugbreak();
LABEL_101:
  v6 = v95;
  if ( v27 )
  {
    v124 = 0LL;
    if ( !(unsigned int)GetPointerDeviceRects(*((unsigned int *)v95 + 1), &v118, &v124) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x191,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        v55);
    v16 = v105;
    *(_BYTE *)(v105 + 416) = 0;
    v56 = v118;
    *(_QWORD *)(v16 + 272) = 0LL;
    *(_DWORD *)(v16 + 280) = 0;
    *(_QWORD *)(v16 + 284) = 0LL;
    *(_QWORD *)(v16 + 292) = 0LL;
    *(_QWORD *)(v16 + 304) = 0LL;
    *(_QWORD *)(v16 + 312) = 0LL;
    *(_QWORD *)(v16 + 320) = 0LL;
    *(_QWORD *)(v16 + 328) = 0LL;
    QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v16 + 336));
    *(_OWORD *)(v16 + 352) = v56;
    *(_BYTE *)(v16 + 392) = 0;
    *(_DWORD *)(v16 + 400) = v27;
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ClickToDoPenEdgy>::GetImpl'::`2'::impl)
      || HIDWORD(v93) == 8 )
    {
      v57 = &ShellEdgyRecognizer::s_edgyParametersTouch;
    }
    else
    {
      if ( HIDWORD(v93) != 16 )
        wil::details::in1diag3::FailFast_UnexpectedMsg(
          retaddr,
          (void *)0x4E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shelledgyrecognizer.cpp",
          "Unexpected input type",
          v93);
      v57 = &ShellEdgyRecognizer::s_edgyParametersPen;
    }
    *(_QWORD *)(v16 + 408) = v57;
    if ( !*(_DWORD *)(v16 + 400) )
      *(_DWORD *)(v16 + 272) = 1;
    *(_BYTE *)(v16 + 416) = 1;
    v22 = 0LL;
  }
  else
  {
    v16 = v105;
  }
  if ( (_BYTE)v93 )
  {
    v112 = v22;
    v111 = v22;
    v58 = qword_180250F08;
    v59 = qword_180250F08 + qword_180250F10;
    while ( v58 != v59 )
    {
      v60 = *(_QWORD *)(*((_QWORD *)Src + ((qword_180250F00 - 1) & (v58 >> 1))) + 8 * (v58 & 1));
      v61 = *(_QWORD *)(v60 + 160);
      if ( v61 )
      {
        v62 = *(_DWORD **)(v61 + 24);
        v63 = *(_DWORD **)(v61 + 16);
        if ( v63 == v62 )
          goto LABEL_120;
        do
        {
          if ( !*v63 )
            break;
          v63 += 4;
        }
        while ( v63 != v62 );
        if ( v63 == v62 )
        {
LABEL_120:
          LOBYTE(v18) = 1;
          if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                  v60,
                                  *(unsigned int *)v6,
                                  v18,
                                  *((unsigned int *)v6 + 13))
            && (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v60)
            && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v64, v60, v6) )
          {
            v65 = IsShellClient<ShellGesturesClientProxy>(v60);
            v66 = &v112;
            if ( v65 )
              v66 = &v111;
            *v66 = v60;
          }
        }
      }
      ++v58;
    }
    v67 = v111;
    if ( v112 )
      v67 = v112;
    if ( *(_QWORD *)(v16 + 264) != v67 )
    {
      if ( v67 )
        (**(void (__fastcall ***)(__int64))(v67 + 16))(v67 + 16);
      v68 = *(_QWORD *)(v16 + 264);
      *(_QWORD *)(v16 + 264) = v67;
      if ( v68 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v68 + 16) + 8LL))(v68 + 16);
    }
    v10 = *(_QWORD *)(*((_QWORD *)v99 + 22) + 104LL);
    v69 = *(__int64 **)(v10 - 24);
    v70 = *(__int64 **)(v10 - 16);
    if ( v69 != v70 )
    {
      while ( 1 )
      {
        v71 = *v69;
        v10 = 0LL;
        v96 = 0LL;
        v72 = *(_QWORD *)(v71 + 488);
        v73 = *(_QWORD *)(v71 + 496);
        if ( v72 != v73 )
        {
          while ( 1 )
          {
            v74 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v72 + 8);
            v75 = **v74;
            if ( v10 )
            {
              v96 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            if ( v75(v74, &GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3, &v96) >= 0 )
              break;
            v72 += 16LL;
            if ( v72 == v73 )
              break;
            v10 = v96;
          }
          v10 = v96;
          v16 = v105;
        }
        v76 = v10 - 8;
        if ( !v10 )
          v76 = 0LL;
        v117 = v76;
        if ( v76 )
        {
          (**(void (__fastcall ***)(__int64))(v76 + 16))(v76 + 16);
          v10 = v96;
        }
        if ( v10 )
        {
          v96 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( v76 )
        {
          v77 = v95;
          LOBYTE(v18) = 1;
          if ( (unsigned __int8)ShellGesturesClientProxy::HandlesInput(
                                  v76,
                                  *(unsigned int *)v95,
                                  v18,
                                  *((unsigned int *)v95 + 13)) )
          {
            if ( (unsigned __int8)ShouldSelectClient<ShellGesturesClientProxy>(v76)
              && !(unsigned __int8)lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(v10, v76, v77) )
            {
              break;
            }
          }
        }
        if ( v76 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v76 + 16) + 8LL))(v76 + 16);
        if ( ++v69 == v70 )
          goto LABEL_160;
      }
      if ( *(_QWORD *)(v16 + 256) != v76 )
      {
        (**(void (__fastcall ***)(__int64))(v76 + 16))(v76 + 16);
        v78 = *(_QWORD *)(v16 + 256);
        *(_QWORD *)(v16 + 256) = v76;
        if ( v78 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v78 + 16) + 8LL))(v78 + 16);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v76 + 16) + 8LL))(v76 + 16);
    }
LABEL_160:
    if ( *(_QWORD *)(v16 + 264) || *(_QWORD *)(v16 + 256) )
    {
      *(_BYTE *)(v16 + 16) = 1;
      v6 = v95;
    }
    else
    {
      *(_BYTE *)(v16 + 16) = 0;
      v6 = v95;
    }
  }
LABEL_187:
  if ( ((HIDWORD(v93) - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_DWORD *)v106 = 2;
  }
  else
  {
    ShellGesturesProcessor::TryFindResumableAnimationTarget(
      (_QWORD *)v10,
      &v99,
      (unsigned int *)v6,
      *((_QWORD *)v99 + 22));
    v87 = v100;
    if ( v100 && v100[2] )
    {
      if ( *(_BYTE *)(v16 + 456) )
      {
        v88 = *(volatile signed __int32 **)(v16 + 448);
        if ( v88 )
        {
          if ( _InterlockedExchangeAdd(v88 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
          v87 = v100;
        }
        v89 = *(_QWORD **)(v16 + 432);
        if ( v89 )
        {
          if ( v89[4] )
            DestroyInteractionContext();
          operator delete(v89, (const struct std::nothrow_t *)0x38);
        }
        *(_BYTE *)(v16 + 456) = 0;
      }
      ShellGesturesProcessor::HandlerContext::HandlerContext(
        (ShellGesturesProcessor::HandlerContext *)(v16 + 424),
        *((_DWORD *)v6 + 10),
        *(struct tagPOINT *)((char *)v6 + 44),
        0);
      *(_BYTE *)(v16 + 456) = 1;
      v90 = v87;
      v87 = 0LL;
      v100 = 0LL;
      *(_QWORD *)(v16 + 440) = v99;
      v91 = *(volatile signed __int32 **)(v16 + 448);
      *(_QWORD *)(v16 + 448) = v90;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
        v87 = v100;
      }
      *(_DWORD *)v106 = 2;
    }
    else if ( *(_BYTE *)(v16 + 416) || *(_BYTE *)(v16 + 16) )
    {
      *(_DWORD *)v106 = 1;
    }
    if ( v87 && _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v100 + 8LL))(v100);
  }
  return 0LL;
}
