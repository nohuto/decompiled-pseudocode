/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D8770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006E0F4 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D2D5C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-.c)
 *     ??0?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800D3468 (--0-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 *     ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D39E4 (-CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacter.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3E40 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManagerBase::GetSaDeviceForExclusiveStream(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 **a7,
        const WCHAR *a8)
{
  __int64 (*v12)(void); // rbx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  const WCHAR *v17; // r8
  int SaDeviceOnMicrophoneEndpoint; // eax
  unsigned int v19; // edi
  int ExclusiveSaDeviceOnRenderEndpoint; // eax
  unsigned int v21; // edi
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-30h]
  _QWORD *v24; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v26 = 0LL;
  v12 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 72) + 24LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v26);
  try
  {
    v13 = v12();
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        188LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v13);
    if ( !v26 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)0x887C0079LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
      return 2289827961LL;
    }
    std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(
      &v22,
      a7);
    if ( v23 == v24 )
      std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> const &>(
        (__int64)&v22,
        (__int64)v23,
        &v26);
    else
      wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
        v23++,
        v26);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
    v17 = *(const WCHAR **)(*a2 + 48LL);
    if ( v16 == 1 )
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(a1 + 64), -1, v17, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC8,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return 2147549183LL;
      }
      SaDeviceOnMicrophoneEndpoint = CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint(
                                       (CBtAudioResourceManagerBase *)a1,
                                       (int)a2,
                                       a3,
                                       a4,
                                       a5,
                                       a6,
                                       (__int64)&v22,
                                       a8);
      v19 = SaDeviceOnMicrophoneEndpoint;
      if ( SaDeviceOnMicrophoneEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)SaDeviceOnMicrophoneEndpoint);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return v19;
      }
    }
    else
    {
      if ( CompareStringOrdinal(*(LPCWCH *)(a1 + 56), -1, v17, -1, 1) != 2 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD0,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x8000FFFFLL);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return 2147549183LL;
      }
      ExclusiveSaDeviceOnRenderEndpoint = CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint(
                                            (const unsigned __int16 **)a1,
                                            (int)a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6,
                                            (__int64)&v22,
                                            (__int64)a8);
      v21 = ExclusiveSaDeviceOnRenderEndpoint;
      if ( ExclusiveSaDeviceOnRenderEndpoint < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD2,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)ExclusiveSaDeviceOnRenderEndpoint);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
        return v21;
      }
    }
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v14);
  }
  return result;
}
