/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002F4E8
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002BBD8 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002E8AC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     AudioServerGetMixFormat @ 0x1800827D0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180083480 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002EFA0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F15C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18002FEB8 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002FF38 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800303E0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180031550 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180031900 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180033570 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180035780 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180046FD0 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18005DAD0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x1800A6D74 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        struct _GUID *a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  int v6; // r15d
  unsigned __int64 v8; // r13
  WAVEFORMATEX *v9; // rdi
  __int64 cbSize; // rsi
  struct _GUID *v11; // rax
  struct _GUID *v12; // r12
  __int64 v13; // rsi
  WAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // r14
  __int64 k; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r13
  int InitializedSystemEffectInterface; // esi
  __int64 v23; // r15
  int v24; // r14d
  __int64 v25; // r12
  int v26; // ecx
  __int64 v27; // r10
  __int64 j; // r9
  __int64 v29; // r11
  struct tWAVEFORMATEX **v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v33; // r15d
  int i; // eax
  unsigned __int64 v35; // rcx
  bool v36; // zf
  __int64 v37; // rdx
  struct tWAVEFORMATEX **v38; // r13
  char v40; // si
  void *v41; // rcx
  const struct tWAVEFORMATEX *v42; // r14
  __int64 v43; // rsi
  struct tWAVEFORMATEX *v44; // rax
  struct tWAVEFORMATEX *v45; // rcx
  int m; // ecx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  std::_Ref_count_base *v51; // r14
  __int64 v52; // rax
  IAudioMediaType *ppIAudioMediaType; // [rsp+68h] [rbp-A0h]
  SystemEffectChainDescriptor *v54; // [rsp+80h] [rbp-88h]
  struct tWAVEFORMATEX *v55[2]; // [rsp+98h] [rbp-70h] BYREF
  char v56; // [rsp+A8h] [rbp-60h]
  struct _GUID v57; // [rsp+B8h] [rbp-50h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+C8h] [rbp-40h]
  WAVEFORMATEX *v59; // [rsp+D0h] [rbp-38h]
  struct _GUID *v60; // [rsp+D8h] [rbp-30h]
  struct _GUID *v61; // [rsp+E0h] [rbp-28h]
  __int64 v62; // [rsp+E8h] [rbp-20h]

  v8 = a3;
  LODWORD(v54) = 0;
  LOBYTE(v6) = 1;
  LODWORD(ppIAudioMediaType) = v6;
  if ( a6 )
    *a6 = 0LL;
  v9 = 0LL;
  cbSize = Src->cbSize;
  v11 = (struct _GUID *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  v60 = v11;
  if ( !v11
    || (memcpy_0(v11, Src, cbSize + 18),
        v61 = v12,
        v13 = a4->cbSize,
        v14 = (WAVEFORMATEX *)CoTaskMemAlloc(v13 + 18),
        v15 = v14,
        pAudioFormat = v14,
        (v9 = v14) == 0LL) )
  {
    InitializedSystemEffectInterface = -2147024882;
    goto LABEL_61;
  }
  memcpy_0(v14, a4, v13 + 18);
  v59 = v9;
  if ( (*(_WORD *)&v12->Data4[6] & 0xFFF8u) > 0x100 )
    goto LABEL_91;
  if ( LOWORD(v12->Data1) == 0xFFFE )
    LODWORD(ppIAudioMediaType) = (v12[1].Data1 & 0x70000) == 0;
  ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)v12);
  ConvertPCMWfxToIEEEFloat(v15);
  v18 = (_QWORD *)*((_QWORD *)a1 + 1);
  v19 = v8;
  if ( v8 >= v18[180] )
    goto LABEL_118;
  v20 = 96 * v8;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v8 + v18[181]));
  if ( v8 >= v18[182] )
    goto LABEL_118;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v20 + v18[183]));
  if ( v8 >= v18[184] )
    goto LABEL_118;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v20 + v18[185]));
  if ( v8 >= v18[202] )
    goto LABEL_118;
  v21 = *((_QWORD *)a1 + 1);
  InitializedSystemEffectInterface = 0;
  if ( !*(_DWORD *)(v18[203] + 4 * v19) )
  {
    v33 = a3;
    if ( a3 != 3
      && !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(
                          (EffectPack *)v21,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3) )
    {
      v52 = gsl::span<SystemEffectDescriptor,-1>::operator[](v21 + 1440, v19);
      v57 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      InitializedSystemEffectInterface = EffectPack::GetInitializedSystemEffectInterface(v21, v52, 1LL);
    }
    goto LABEL_58;
  }
  if ( v19 >= *(_QWORD *)(v21 + 1440) )
    goto LABEL_118;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v20 + *(_QWORD *)(v21 + 1448)));
  if ( v19 >= *(_QWORD *)(v21 + 1456) )
    goto LABEL_118;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v20 + *(_QWORD *)(v21 + 1464)));
  if ( v19 >= *(_QWORD *)(v21 + 1472) )
    goto LABEL_118;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v20 + *(_QWORD *)(v21 + 1480)));
  if ( v19 >= *(_QWORD *)(v21 + 1616) )
    goto LABEL_118;
  if ( !*(_DWORD *)(*(_QWORD *)(v21 + 1624) + 4 * v19) )
    goto LABEL_41;
  if ( v19 >= *(_QWORD *)(v21 + 1440) )
    goto LABEL_118;
  v23 = *(_QWORD *)(v21 + 1448) + v20;
  if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(v21 + 1584))
    && a3 != 3 )
  {
    v12 = a2;
    *(struct _GUID *)v55 = *a2;
    for ( i = 0; i < *(_DWORD *)(v23 + 8); ++i )
    {
      k = *(_QWORD *)v23 + 16LL * i;
      v35 = *(_QWORD *)k - (unsigned __int64)v55[0];
      if ( *(struct tWAVEFORMATEX **)k == v55[0] )
        v35 = *(_QWORD *)(k + 8) - (unsigned __int64)v55[1];
      if ( !v35 )
        goto LABEL_82;
    }
    i = -1;
LABEL_82:
    v36 = i == -1;
LABEL_54:
    if ( !v36 )
      goto LABEL_55;
    goto LABEL_41;
  }
  v12 = a2;
  v57 = *a2;
  *(struct _GUID *)v55 = v57;
  if ( *(_BYTE *)(v23 + 52) )
  {
    v24 = 0;
    v25 = 0LL;
    while ( v24 < *(_DWORD *)(v23 + 40) )
    {
      if ( v24 < 0 || v24 >= *(_DWORD *)(v23 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, k);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)(v25 + *(_QWORD *)(v23 + 32)) + 20LL) )
      {
        v48 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                          v23 + 32,
                          (unsigned int)v24);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v48, v55) != -1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 56));
          v62 = v23 + 56;
          v49 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                  v23 + 32,
                  (unsigned int)v24);
          v50 = *(_QWORD *)(v49 + 8);
          if ( v50 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
            v9 = v59;
          }
          v54 = *(SystemEffectChainDescriptor **)v49;
          v51 = *(std::_Ref_count_base **)(v49 + 8);
          if ( (int)SystemEffectChainDescriptor::Resolve(
                      *(SystemEffectChainDescriptor **)v49,
                      (struct SystemEffectDescriptor *)v23) < 0 )
          {
            if ( v51 )
              std::_Ref_count_base::_Decref(v51);
            if ( v23 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 56));
            goto LABEL_40;
          }
          if ( v51 )
            std::_Ref_count_base::_Decref(v51);
          if ( v23 != -56 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 56));
          break;
        }
      }
      ++v24;
      v25 += 16LL;
    }
    v12 = a2;
  }
  v26 = 0;
  v27 = 0LL;
  for ( j = 0LL; ; j += 16LL )
  {
    if ( v27 >= *(int *)(v23 + 40) )
      goto LABEL_40;
    if ( j < 0 || v26 >= *(_DWORD *)(v23 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, k);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v54 )
        (*(void (__fastcall **)(SystemEffectChainDescriptor *))(*(_QWORD *)v54 + 16LL))(v54);
      if ( ppIAudioMediaType )
        ((void (__fastcall *)(_DWORD))ppIAudioMediaType->lpVtbl->Release)((_DWORD)ppIAudioMediaType);
      goto LABEL_61;
    }
    v29 = *(_QWORD *)(j + *(_QWORD *)(v23 + 32));
    for ( k = 0LL; ; k = (unsigned int)(k + 1) )
    {
      if ( (int)k >= *(_DWORD *)(v29 + 8) )
        goto LABEL_80;
      v30 = (struct tWAVEFORMATEX **)(*(_QWORD *)v29 + 16LL * (int)k);
      v31 = (char *)*v30 - (char *)v55[0];
      if ( *v30 == v55[0] )
        v31 = (char *)v30[1] - (char *)v55[1];
      if ( !v31 )
        break;
    }
    if ( (_DWORD)k != -1 )
      break;
LABEL_80:
    ++v26;
    ++v27;
  }
  if ( v26 != -1 )
  {
    if ( v26 < 0 || v26 >= *(_DWORD *)(v23 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, k);
      __debugbreak();
    }
    v36 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 16LL * v26) == 0LL;
    goto LABEL_54;
  }
LABEL_40:
  v32 = *(_QWORD *)(v23 + 16);
  if ( !v32 )
    goto LABEL_41;
  for ( m = 0; ; ++m )
  {
    if ( m >= *(_DWORD *)(v32 + 8) )
      goto LABEL_41;
    k = *(_QWORD *)v32 + 16LL * m;
    v47 = *(_QWORD *)k - *(_QWORD *)&v57.Data1;
    if ( *(_QWORD *)k == *(_QWORD *)&v57.Data1 )
      v47 = *(_QWORD *)(k + 8) - *(_QWORD *)v57.Data4;
    if ( !v47 )
      break;
  }
  if ( m == -1 )
  {
LABEL_41:
    v33 = a3;
    goto LABEL_57;
  }
  v12 = a2;
LABEL_55:
  v33 = a3;
  v17 = v21;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v21 + 1440) )
  {
LABEL_118:
    _o_terminate(v17, k);
    __debugbreak();
    JUMPOUT(0x18002FEB0LL);
  }
  v37 = *(_QWORD *)(v21 + 1448) + 96LL * a3;
  v57 = *v12;
  InitializedSystemEffectInterface = EffectPack::GetInitializedSystemEffectInterface(v21, v37, 1LL);
LABEL_57:
  v12 = v60;
LABEL_58:
  if ( InitializedSystemEffectInterface >= 0 )
  {
    if ( !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v12) )
    {
      if ( *(_DWORD *)&v12->Data2 == pAudioFormat->nSamplesPerSec
        && (_BYTE)ppIAudioMediaType
        && HIWORD(v12->Data1) == pAudioFormat->nChannels
        && !(unsigned int)ValidateWaveFormatEx(Src) )
      {
        InitializedSystemEffectInterface = 0;
      }
      else
      {
        InitializedSystemEffectInterface = 1;
        v38 = a6;
        if ( a6 )
        {
          Src = 0LL;
          v55[0] = (struct tWAVEFORMATEX *)&Src;
          v55[1] = 0LL;
          v56 = 1;
          v57 = *a2;
          if ( CEndpointCharacteristics::TryGetOverridingMixFormat(*(CEndpointCharacteristics **)a1, v33, &v57, &v55[1]) < 0
            || (v40 = 1, !Src) )
          {
            v40 = 0;
          }
          if ( v56 )
          {
            v41 = *(void **)v55[0];
            *(_QWORD *)v55[0] = v55[1];
            if ( v41 )
              CoTaskMemFree(v41);
          }
          v42 = a4;
          if ( v40 )
            v42 = Src;
          v43 = v42->cbSize;
          v44 = (struct tWAVEFORMATEX *)operator new[](v43 + 18, (const struct std::nothrow_t *)&std::nothrow);
          *v38 = v44;
          if ( v44 )
          {
            memcpy_0(v44, v42, v43 + 18);
            InitializedSystemEffectInterface = 1;
            v45 = Src;
            Src = 0LL;
            if ( v45 )
              CoTaskMemFree(v45);
          }
          else
          {
            InitializedSystemEffectInterface = -2147024882;
            wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&Src,
              0LL);
          }
        }
      }
      goto LABEL_61;
    }
LABEL_91:
    InitializedSystemEffectInterface = -2004287480;
  }
LABEL_61:
  CoTaskMemFree(v9);
  CoTaskMemFree(v12);
  return (unsigned int)InitializedSystemEffectInterface;
}
