/*
 * XREFs of ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800303E0
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002F4E8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002FFD4 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E38 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180033CA0 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18006BE54 (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18006CA98 (-GetGfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 *     ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18006E94C (-GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCompositeSystemEffect@@QEAA@XZ @ 0x180030CEC (--0CCompositeSystemEffect@@QEAA@XZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180031900 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180033570 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--_lambda_a8a3ec141be49a0429a3d190c13e56dc_.c)
 *     std::function_long___cdecl(IAudioProcessingObject____GUID_unsigned_int)_::function_long___cdecl(IAudioProcessingObject____GUID_unsigned_int)___lambda_a8a3ec141be49a0429a3d190c13e56dc__0_ @ 0x18012DB14 (std--function_long___cdecl(IAudioProcessingObject____GUID_unsigned_int)_--function_long___cdecl(.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall EffectPack::GetInitializedSystemEffectInterface(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int128 *a5,
        unsigned int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v12; // r9
  __int128 *v13; // r11
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r8
  _QWORD *v16; // r10
  _DWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int64 v22; // r9
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // r8
  int v28; // r8d
  __int64 v29; // rbx
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // r11
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // esi
  _OWORD *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  _DWORD *v42; // rax
  int j; // r8d
  _QWORD *v45; // rdx
  __int64 v46; // rax
  int v47; // esi
  __int64 *v48; // rsi
  __int64 *v49; // r14
  __int64 (__fastcall *v50)(void *, _QWORD, __int128 *, _QWORD, int, __int64 *, __int64 *); // r11
  __int64 v51; // rax
  __int64 *v52; // r10
  __int64 *v53; // r8
  int v54; // eax
  unsigned int v55; // edi
  __int64 v56; // rax
  int (__fastcall *v57)(__int64, _BYTE *); // r9
  __int64 v58; // r10
  bool v59; // di
  _BYTE *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r13
  int v63; // r12d
  BOOL v64; // r14d
  __int64 v65; // r15
  CCompositeSystemEffect *v66; // rax
  CCompositeSystemEffect *v67; // rdi
  unsigned int k; // r14d
  int v69; // r15d
  int v70; // eax
  unsigned int v71; // r15d
  __int64 v72; // rax
  _OWORD *v73; // rcx
  bool v74; // sf
  int i; // eax
  _QWORD *v76; // rsi
  __int64 v77; // r10
  unsigned int v78; // edx
  _QWORD *v79; // rax
  __int64 v80; // rcx
  std::_Ref_count_base *v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rax
  void *v84; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B0h] BYREF
  CCompositeSystemEffect *v87; // [rsp+58h] [rbp-A8h] BYREF
  int v88; // [rsp+60h] [rbp-A0h]
  _OWORD *v89; // [rsp+68h] [rbp-98h]
  __int128 v90; // [rsp+70h] [rbp-90h]
  __int64 *v91; // [rsp+80h] [rbp-80h]
  __int128 *v92; // [rsp+88h] [rbp-78h]
  __int128 v93; // [rsp+90h] [rbp-70h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-60h]
  _QWORD *v95; // [rsp+A8h] [rbp-58h]
  __int64 v96; // [rsp+B0h] [rbp-50h]
  __int64 *v97; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v98[56]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v99; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  LODWORD(v87) = a4;
  v88 = a3;
  v12 = a1;
  v94 = a1;
  v13 = a5;
  v92 = a5;
  v14 = (unsigned __int64)a9;
  v95 = a9;
  v15 = a10;
  v97 = a10;
  v16 = a11;
  v91 = a11;
  v17 = 0LL;
  v18 = 0LL;
  v84 = 0LL;
  v19 = 0LL;
  v85 = 0LL;
  v20 = 0LL;
  v86 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a10 )
    *a10 = 0LL;
  if ( a11 )
LABEL_133:
    *v16 = v17;
  if ( !a2 )
    goto LABEL_72;
  if ( a7 )
  {
    if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(v12 + 1584)) )
      goto LABEL_71;
    v13 = v92;
  }
  v89 = v17;
  v21 = *v13;
  v93 = v21;
  v90 = v21;
  v14 = (unsigned int)v17;
  v22 = *(int *)(a2 + 40);
  v23 = v17;
  v24 = (__int64)v17;
  v17 = (_DWORD *)(a2 + 32);
  v25 = *((_QWORD *)&v21 + 1);
  v26 = v21;
  while ( (__int64)v23 < v22 )
  {
    v17 = (_DWORD *)(a2 + 32);
    if ( v24 < 0 || (int)v14 >= (int)v22 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v23);
      __debugbreak();
    }
    v27 = *(_QWORD *)(v24 + *(_QWORD *)v17);
    if ( *(_BYTE *)(v27 + 20) )
    {
      for ( i = 0; i < *(_DWORD *)(v27 + 8); ++i )
      {
        v76 = (_QWORD *)(*(_QWORD *)v27 + 16LL * i);
        v77 = *v76 - v21;
        if ( *v76 == (_QWORD)v21 )
          v77 = v76[1] - *((_QWORD *)&v21 + 1);
        if ( !v77 )
        {
          if ( i == -1 )
            break;
          EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
          v96 = a2 + 56;
          if ( (v14 & 0x80000000) != 0LL || (int)v14 >= *(_DWORD *)(a2 + 40) )
          {
            ATL::_AtlRaiseException(0xC000008C, v78);
            goto LABEL_133;
          }
          v79 = (_QWORD *)(*(_QWORD *)v17 + 16LL * (int)v14);
          v80 = v79[1];
          if ( v80 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v80 + 8));
            v25 = *((_QWORD *)&v90 + 1);
            v26 = v90;
          }
          *(_QWORD *)&v90 = *v79;
          v81 = (std::_Ref_count_base *)v79[1];
          *((_QWORD *)&v90 + 1) = v81;
          if ( (int)SystemEffectChainDescriptor::Resolve(
                      (SystemEffectChainDescriptor *)v90,
                      (struct SystemEffectDescriptor *)a2) < 0 )
          {
            if ( v81 )
              std::_Ref_count_base::_Decref(v81);
            if ( a2 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
            goto LABEL_42;
          }
          if ( v81 )
            std::_Ref_count_base::_Decref(v81);
          if ( a2 != -56 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 56));
          goto LABEL_14;
        }
      }
    }
    v14 = (unsigned int)(v14 + 1);
    v23 = (_DWORD *)((char *)v23 + 1);
    v24 += 16LL;
  }
LABEL_14:
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  while ( 2 )
  {
    if ( v29 >= *(int *)(a2 + 40) )
    {
LABEL_42:
      v17 = 0LL;
LABEL_43:
      v35 = *(_QWORD *)(a2 + 16);
      if ( v35 )
      {
        for ( j = 0; j < *(_DWORD *)(v35 + 8); ++j )
        {
          v45 = (_QWORD *)(*(_QWORD *)v35 + 16LL * j);
          v46 = *v45 - v93;
          if ( *v45 == (_QWORD)v93 )
            v46 = v45[1] - *((_QWORD *)&v93 + 1);
          if ( !v46 )
          {
            if ( j == -1 )
              break;
            v37 = 0LL;
            v89 = 0LL;
            goto LABEL_29;
          }
        }
      }
      v35 = 0LL;
LABEL_45:
      if ( a6 )
        v35 = *(_QWORD *)(a2 + 16);
      goto LABEL_28;
    }
    if ( v30 < 0 || v28 >= v17[2] )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v23);
      __debugbreak();
    }
    v31 = *(_QWORD *)v17;
    v32 = *(_QWORD *)(v30 + *(_QWORD *)v17);
    v17 = 0LL;
    for ( LODWORD(v23) = 0; ; LODWORD(v23) = (_DWORD)v23 + 1 )
    {
      if ( (int)v23 >= *(_DWORD *)(v32 + 8) )
        goto LABEL_47;
      v33 = (_QWORD *)(*(_QWORD *)v32 + 16LL * (int)v23);
      v34 = *v33 - v26;
      if ( *v33 == v26 )
        v34 = v33[1] - v25;
      if ( !v34 )
        break;
    }
    if ( (_DWORD)v23 == -1 )
    {
LABEL_47:
      ++v28;
      ++v29;
      v30 += 16LL;
      v17 = (_DWORD *)(a2 + 32);
      continue;
    }
    break;
  }
  if ( v28 == -1 )
    goto LABEL_43;
  if ( v28 < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v23);
    __debugbreak();
  }
  v35 = *(_QWORD *)(v31 + 16LL * v28);
  if ( !v35 )
    goto LABEL_45;
LABEL_28:
  v36 = 0;
  v37 = 0LL;
  v89 = 0LL;
  if ( v35 )
  {
LABEL_29:
    v38 = 56LL;
    if ( !a6 )
      v38 = 40LL;
    v39 = v35 + v38;
    v40 = *(int *)(v39 + 8);
    if ( (int)v40 > 0 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v40 < 0x10 )
        goto LABEL_35;
      v41 = 16LL * *(int *)(v39 + 8);
      if ( v41 > 0x7FFFFFFF )
      {
        v17 = 0LL;
        goto LABEL_35;
      }
      v42 = CoTaskMemAlloc((unsigned int)v41);
      v17 = v42;
      if ( !v42 )
      {
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x270,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        CoTaskMemFree(v17);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x524,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL);
        CoTaskMemFree(0LL);
        if ( v86 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
        if ( v85 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
        if ( v84 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v84 + 16LL))(v84);
        return 2147942414LL;
      }
      v37 = v42;
      memcpy_0(v42, *(const void **)v39, 16LL * *(int *)(v39 + 8));
      v89 = v37;
      CoTaskMemFree(0LL);
      v17 = 0LL;
    }
    v36 = *(_DWORD *)(v39 + 8);
  }
  if ( !v36 )
    goto LABEL_70;
  v62 = v94;
  v63 = *(_DWORD *)(*(_QWORD *)(v94 + 1584) + 236LL);
  v64 = (_DWORD)v87 == 1;
  v65 = *(_QWORD *)(v94 + 2120);
  v84 = 0LL;
  v66 = (CCompositeSystemEffect *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v87 = v66;
  if ( v66 )
  {
    v67 = CCompositeSystemEffect::CCompositeSystemEffect(v66);
    v87 = 0LL;
    *((_QWORD *)v67 + 9) = v65;
    *((_DWORD *)v67 + 20) = v88;
    *((_DWORD *)v67 + 21) = v64;
    *((_DWORD *)v67 + 22) = v63;
    for ( k = 0; k < v36; ++k )
    {
      v69 = *((_DWORD *)v67 + 26);
      v70 = *((_DWORD *)v67 + 27);
      if ( v69 == v70 )
      {
        if ( v70 )
        {
          v74 = (v69 & 0x40000000) != 0;
          v71 = 2 * v69;
          if ( v74 )
            goto LABEL_96;
        }
        else
        {
          v71 = 1;
        }
        if ( v71 > 0x7FFFFFFuLL || (v72 = _o__recalloc(*((_QWORD *)v67 + 12), v71, 16LL)) == 0 )
        {
LABEL_96:
          v47 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D9,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v67 + 16LL))(v67);
          Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v87);
          goto LABEL_97;
        }
        *((_DWORD *)v67 + 27) = v71;
        *((_QWORD *)v67 + 12) = v72;
      }
      v73 = (_OWORD *)(*((_QWORD *)v67 + 12) + 16LL * *((int *)v67 + 26));
      if ( v73 )
        *v73 = v37[k];
      ++*((_DWORD *)v67 + 26);
    }
    v47 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, __int64 *))v67)(
            v67,
            &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
            (__int64 *)&v84);
    (*(void (__fastcall **)(CCompositeSystemEffect *))(*(_QWORD *)v67 + 16LL))(v67);
    if ( v47 < 0 )
      goto LABEL_97;
    v48 = v97;
    v49 = v91;
    if ( !v97 && !v91 )
    {
      v17 = 0LL;
LABEL_70:
      CoTaskMemFree(v37);
      v14 = (unsigned __int64)v95;
LABEL_71:
      v20 = v86;
      v19 = v85;
      v18 = (__int64)v84;
LABEL_72:
      if ( v14 )
      {
        v15 = (_QWORD *)v18;
        v18 = (__int64)v17;
        v84 = v17;
        *(_QWORD *)v14 = v15;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        v18 = (__int64)v84;
        v19 = v85;
      }
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, __int64))(*(_QWORD *)v19 + 16LL))(
          v19,
          *(_QWORD *)(*(_QWORD *)v19 + 16LL),
          v15,
          v12);
        v18 = (__int64)v84;
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v18 + 16LL))(v18, v20, v15, v12);
      return 0LL;
    }
    v50 = *(__int64 (__fastcall **)(void *, _QWORD, __int128 *, _QWORD, int, __int64 *, __int64 *))(*(_QWORD *)v84 + 24LL);
    v51 = *(_QWORD *)(v62 + 1584);
    v93 = *v92;
    v52 = &v86;
    if ( !v91 )
      v52 = 0LL;
    v53 = &v85;
    if ( !v97 )
      v53 = 0LL;
    v54 = v50(v84, *(_QWORD *)(v51 + 40), &v93, a6, a8, v53, v52);
    v55 = v54;
    if ( v54 >= 0 )
    {
      LODWORD(v87) = v88;
      v56 = lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(
              &v97,
              *(_QWORD *)(v62 + 1584),
              &v87);
      std::function_long___cdecl_IAudioProcessingObject____GUID_unsigned_int__::function_long___cdecl_IAudioProcessingObject____GUID_unsigned_int____lambda_a8a3ec141be49a0429a3d190c13e56dc__0_(
        v98,
        v56);
      v59 = v57(v58, v98) >= 0;
      if ( v99 )
      {
        v60 = v98;
        LOBYTE(v60) = v99 != v98;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v99 + 32LL))(v99, v60);
      }
      if ( v59 )
      {
        v17 = 0LL;
        if ( v48 )
        {
          v61 = v85;
          v85 = 0LL;
          *v48 = v61;
        }
        if ( v49 )
        {
          v83 = v86;
          v86 = 0LL;
          *v49 = v83;
        }
      }
      else
      {
        v82 = (__int64)v84;
        v17 = 0LL;
        if ( v84 )
        {
          v84 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
        }
      }
      goto LABEL_70;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x532,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v54);
    CoTaskMemFree(v37);
    if ( v86 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    if ( v85 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
    if ( v84 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v84 + 16LL))(v84);
    return v55;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v87);
    v47 = -2147024882;
LABEL_97:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v47);
    CoTaskMemFree(v37);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v86);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v85);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v84);
    return (unsigned int)v47;
  }
}
