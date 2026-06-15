/*
 * XREFs of ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B4A8
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004AC70 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x180100F48 (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 *     _lambda_f318f87950837fa021a8ed1b2df6ff30_::operator() @ 0x18012A524 (_lambda_f318f87950837fa021a8ed1b2df6ff30_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::IsAPOModeSupported(_QWORD *a1, __int64 j, __int128 *a3, int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  BOOL v8; // esi
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ecx
  __int64 v14; // r10
  __int64 m; // r8
  __int64 v16; // r11
  int n; // eax
  _QWORD *v18; // r9
  __int64 v19; // r8
  int ii; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  int i; // eax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  int k; // eax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r14
  __int64 v33; // rax
  void *v34; // r14
  __int128 v35; // [rsp+20h] [rbp-40h]
  __int128 v36; // [rsp+20h] [rbp-40h]
  __int128 v37; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v39; // [rsp+50h] [rbp-10h]

  if ( (unsigned __int64)a4 >= a1[182] )
  {
LABEL_75:
    _o_terminate(a1, j);
    __debugbreak();
    JUMPOUT(0x18004B81BLL);
  }
  v6 = a1[183] + 96LL * a4;
  v7 = 0;
  if ( (_DWORD)j != 1 )
  {
    v8 = 1;
    v9 = *(_QWORD *)(a1[198] + 80LL);
    if ( v9 )
    {
      *(_OWORD *)pvar = 0LL;
      v39 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
             v9,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v8 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v8 && a4 != 3 )
      {
        v36 = *a3;
        for ( i = 0; i < *(_DWORD *)(v6 + 8); ++i )
        {
          v26 = (_QWORD *)(*(_QWORD *)v6 + 16LL * i);
          v27 = *v26 - v36;
          if ( *v26 == (_QWORD)v36 )
            v27 = v26[1] - *((_QWORD *)&v36 + 1);
          if ( !v27 )
            goto LABEL_49;
        }
        i = -1;
LABEL_49:
        LOBYTE(v7) = i != -1;
        return v7;
      }
    }
  }
  v37 = *a3;
  v35 = *a3;
  if ( !*(_BYTE *)(v6 + 52) )
    goto LABEL_15;
  v10 = 0;
  v11 = 0LL;
  for ( j = 0LL; ; j += 16LL )
  {
    if ( v11 >= *(int *)(v6 + 40) )
      goto LABEL_15;
    if ( j < 0 || v10 >= *(_DWORD *)(v6 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, j);
      __debugbreak();
    }
    v12 = *(_QWORD *)(j + *(_QWORD *)(v6 + 32));
    if ( *(_BYTE *)(v12 + 20) )
    {
      for ( k = 0; ; ++k )
      {
        if ( k >= *(_DWORD *)(v12 + 8) )
          goto LABEL_14;
        v29 = (_QWORD *)(*(_QWORD *)v12 + 16LL * k);
        v30 = *v29 - v35;
        if ( *v29 == (_QWORD)v35 )
          v30 = v29[1] - *((_QWORD *)&v35 + 1);
        if ( !v30 )
          break;
      }
      if ( k != -1 )
        break;
    }
LABEL_14:
    ++v10;
    ++v11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
  if ( v10 < 0 || v10 >= *(_DWORD *)(v6 + 40) )
  {
LABEL_74:
    ATL::_AtlRaiseException(0xC000008C, v31);
    goto LABEL_75;
  }
  v32 = *(_QWORD *)(v6 + 32) + 16LL * v10;
  v33 = *(_QWORD *)(v32 + 8);
  if ( v33 )
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
  pvar[0] = *(PROPVARIANT *)v32;
  v34 = *(void **)(v32 + 8);
  pvar[1] = v34;
  if ( (int)SystemEffectChainDescriptor::Resolve(
              (SystemEffectChainDescriptor *)pvar[0],
              (struct SystemEffectDescriptor *)v6) >= 0 )
  {
    if ( v34 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v34);
    if ( v6 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
LABEL_15:
    v13 = 0;
    v14 = 0LL;
    for ( m = 0LL; ; m += 16LL )
    {
      if ( v14 >= *(int *)(v6 + 40) )
        goto LABEL_27;
      if ( m < 0 || v13 >= *(_DWORD *)(v6 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, j);
        __debugbreak();
      }
      v16 = *(_QWORD *)(m + *(_QWORD *)(v6 + 32));
      for ( n = 0; ; ++n )
      {
        if ( n >= *(_DWORD *)(v16 + 8) )
          goto LABEL_40;
        v18 = (_QWORD *)(*(_QWORD *)v16 + 16LL * n);
        j = *v18 - v35;
        if ( *v18 == (_QWORD)v35 )
          j = v18[1] - *((_QWORD *)&v35 + 1);
        if ( !j )
          break;
      }
      if ( n != -1 )
        break;
LABEL_40:
      ++v13;
      ++v14;
    }
    if ( v13 == -1 )
      goto LABEL_27;
    if ( v13 >= 0 && v13 < *(_DWORD *)(v6 + 40) )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 16LL * v13) == 0LL;
LABEL_37:
      if ( !v23 )
        return 1;
      return v7;
    }
    ATL::_AtlRaiseException(0xC000008C, 0);
    goto LABEL_74;
  }
  if ( v34 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v34);
  if ( v6 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
LABEL_27:
  v19 = *(_QWORD *)(v6 + 16);
  if ( v19 )
  {
    for ( ii = 0; ii < *(_DWORD *)(v19 + 8); ++ii )
    {
      v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * ii);
      v22 = *v21 - v37;
      if ( *v21 == (_QWORD)v37 )
        v22 = v21[1] - *((_QWORD *)&v37 + 1);
      if ( !v22 )
      {
        v23 = ii == -1;
        goto LABEL_37;
      }
    }
  }
  return v7;
}
