/*
 * XREFs of ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800E91D0
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WCBI@EAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800F2BD0 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@WCBI@EAAJPEAVCEndpointCharacteristics@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180059B18 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     CreateAudioMediaTypeFromUncompressedAudioFormat @ 0x1800A6D90 (CreateAudioMediaTypeFromUncompressedAudioFormat.c)
 *     _lambda_7006e273fd0bdb3b1ea33bc30ca36d88_::operator() @ 0x1800E8D14 (_lambda_7006e273fd0bdb3b1ea33bc30ca36d88_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v11; // rsi
  _DWORD *v12; // r15
  __int64 v13; // rax
  DWORD v14; // edi
  __int64 v15; // rcx
  HRESULT v16; // esi
  __int64 v17; // rdx
  DWORD v19; // r15d
  __int64 v20; // rcx
  HRESULT v21; // eax
  unsigned int v22; // ebx
  _DWORD v23[2]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v24[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  UNCOMPRESSEDAUDIOFORMAT pUncompressedAudioFormat; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF
  int v28; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( a3 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) )
    return 0LL;
  v10 = *a4;
  v11 = (__int64 *)(a1 - 24);
  v24[0] = 1;
  v24[1] = 4;
  v23[0] = 2;
  v23[1] = 3;
  v12 = v23;
  v13 = *v11;
  v14 = 2;
  v25 = v10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int128 *))(v13 + 152))(v11, &v25) )
  {
    *(_QWORD *)&v25 = v11;
    v27 = 0LL;
    v28 = 0;
    v12 = v24;
    *((_QWORD *)&v25 + 1) = &v27;
    lambda_7006e273fd0bdb3b1ea33bc30ca36d88_::operator()((__int64)&v25);
    v14 = 1;
    if ( (v27 & 0x20000) != 0 )
    {
      v12 = v23;
      v14 = 2;
    }
  }
  if ( *(unsigned __int16 *)(((__int64 (__fastcall *)(_QWORD))(*ppIAudioMediaType)->lpVtbl->GetAudioFormat)(*ppIAudioMediaType)
                           + 2) == v14 )
    return 0LL;
  v15 = (__int64)*ppIAudioMediaType;
  memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
  v16 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v15 + 48LL))(
          v15,
          &pUncompressedAudioFormat);
  if ( v16 < 0 )
  {
    v17 = 193LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  v19 = v12[1];
  pUncompressedAudioFormat.dwChannelMask = v19;
  pUncompressedAudioFormat.dwSamplesPerFrame = v14;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)ppIAudioMediaType);
  v16 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, ppIAudioMediaType);
  if ( v16 < 0 )
  {
    v17 = 198LL;
    goto LABEL_9;
  }
  if ( !*a7 )
    wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)a7, *a5);
  if ( *(unsigned __int16 *)(((__int64 (__fastcall *)(_QWORD))(*a7)->lpVtbl->GetAudioFormat)(*a7) + 2) == v14 )
    return 0LL;
  v20 = (__int64)*a7;
  memset(&pUncompressedAudioFormat, 0, sizeof(pUncompressedAudioFormat));
  v16 = (*(__int64 (__fastcall **)(__int64, UNCOMPRESSEDAUDIOFORMAT *))(*(_QWORD *)v20 + 48LL))(
          v20,
          &pUncompressedAudioFormat);
  if ( v16 < 0 )
  {
    v17 = 208LL;
    goto LABEL_9;
  }
  pUncompressedAudioFormat.dwSamplesPerFrame = v14;
  pUncompressedAudioFormat.dwChannelMask = v19;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a7);
  v21 = CreateAudioMediaTypeFromUncompressedAudioFormat(&pUncompressedAudioFormat, a7);
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
    (const char *)(unsigned int)v21);
  return v22;
}
