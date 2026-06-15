/*
 * XREFs of ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800E4C40
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WBNI@EAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800EDB20 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WBNI@EAAJPEAVCEndpointCharacteristics@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     CreateAudioMediaTypeFromUncompressedAudioFormat @ 0x1800AAAA0 (CreateAudioMediaTypeFromUncompressedAudioFormat.c)
 *     _lambda_fdc6543ee630a5d9b153906eb252600e_::operator() @ 0x1800E42B4 (_lambda_fdc6543ee630a5d9b153906eb252600e_--operator().c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@details@wil@@QEAA_NXZ @ 0x1800E5008 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::TryOverrideDeviceGraphFormats(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int64 *a5,
        int a6,
        IAudioMediaType **a7,
        IAudioMediaType **ppIAudioMediaType)
{
  __int128 v10; // xmm0
  __int64 *v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // r15
  DWORD v14; // r14d
  __int64 v15; // rcx
  HRESULT v16; // edi
  __int64 v17; // rdx
  DWORD v19; // r15d
  __int64 v20; // rcx
  HRESULT v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // r14d
  HRESULT v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD v29[2]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v30[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v31; // [rsp+30h] [rbp-50h] BYREF
  UNCOMPRESSEDAUDIOFORMAT pUncompressedAudioFormat; // [rsp+40h] [rbp-40h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h] BYREF
  int v34; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( !a3 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixBTLECommMixFormat>::GetImpl'::`2'::impl) )
    {
      v10 = *a4;
      v11 = (__int64 *)(a1 - 24);
      v30[0] = 1;
      v30[1] = 4;
      v29[0] = 2;
      v29[1] = 3;
      v12 = *v11;
      v13 = v29;
      v31 = v10;
      v14 = 2;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int128 *))(v12 + 144))(v11, &v31) )
      {
        *(_QWORD *)&v31 = v11;
        v33 = 0LL;
        v34 = 0;
        v13 = v30;
        *((_QWORD *)&v31 + 1) = &v33;
        lambda_fdc6543ee630a5d9b153906eb252600e_::operator()((__int64)&v31);
        v14 = 1;
        if ( (v33 & 0x20000) != 0 )
        {
          v13 = v29;
          v14 = 2;
        }
      }
      if ( *(unsigned __int16 *)(((__int64 (__fastcall *)(_QWORD))(*ppIAudioMediaType)->lpVtbl->GetAudioFormat)(*ppIAudioMediaType)
                               + 2) != v14 )
      {
        v15 = (__int64)*ppIAudioMediaType;
        memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
        v16 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v15 + 48LL))(
                v15,
                &pUncompressedAudioFormat);
        if ( v16 < 0 )
        {
          v17 = 196LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
            (const char *)(unsigned int)v16);
          return (unsigned int)v16;
        }
        v19 = v13[1];
        pUncompressedAudioFormat.dwChannelMask = v19;
        pUncompressedAudioFormat.dwSamplesPerFrame = v14;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
        v16 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, ppIAudioMediaType);
        if ( v16 < 0 )
        {
          v17 = 201LL;
          goto LABEL_10;
        }
        if ( !*a7 )
          wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)a7, *a5);
        if ( *(unsigned __int16 *)(((__int64 (__fastcall *)(_QWORD))(*a7)->lpVtbl->GetAudioFormat)(*a7) + 2) != v14 )
        {
          v20 = (__int64)*a7;
          memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
          v16 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v20 + 48LL))(
                  v20,
                  &pUncompressedAudioFormat);
          if ( v16 < 0 )
          {
            v17 = 211LL;
            goto LABEL_10;
          }
          pUncompressedAudioFormat.dwSamplesPerFrame = v14;
          pUncompressedAudioFormat.dwChannelMask = v19;
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a7);
          v21 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, a7);
          if ( v21 < 0 )
          {
            v22 = 216LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
              (const char *)(unsigned int)v21);
            return (unsigned int)v21;
          }
        }
      }
      return 0LL;
    }
    if ( *(_WORD *)(((__int64 (__fastcall *)(_QWORD))(*ppIAudioMediaType)->lpVtbl->GetAudioFormat)(*ppIAudioMediaType)
                  + 2) != 2 )
    {
      v23 = (__int64)*ppIAudioMediaType;
      memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
      v24 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v23 + 48LL))(
              v23,
              &pUncompressedAudioFormat);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
          (const char *)(unsigned int)v24);
        return v25;
      }
      pUncompressedAudioFormat.dwSamplesPerFrame = 2;
      pUncompressedAudioFormat.dwChannelMask = 3;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
      v26 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, ppIAudioMediaType);
      if ( v26 < 0 )
      {
        v27 = 235LL;
        goto LABEL_26;
      }
      if ( !*a7 )
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)a7, *a5);
      if ( *(_WORD *)(((__int64 (__fastcall *)(_QWORD))(*a7)->lpVtbl->GetAudioFormat)(*a7) + 2) != 2 )
      {
        v28 = (__int64)*a7;
        memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
        v26 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v28 + 48LL))(
                v28,
                &pUncompressedAudioFormat);
        if ( v26 >= 0 )
        {
          pUncompressedAudioFormat.dwSamplesPerFrame = 2;
          pUncompressedAudioFormat.dwChannelMask = 3;
          wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a7);
          v21 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, a7);
          if ( v21 < 0 )
          {
            v22 = 250LL;
            goto LABEL_20;
          }
          return 0LL;
        }
        v27 = 245LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
          (const char *)(unsigned int)v26);
        return (unsigned int)v26;
      }
    }
  }
  return 0LL;
}
