/*
 * XREFs of ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D4B54
 * Callers:
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3E40 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800276F4 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180076FFC (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D8100 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800D91E4 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800D94FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters(
        const unsigned __int16 **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int EndpointCharacteristicsDescriptor; // eax
  int DefaultSecondaryProfileRenderSaDeviceParams; // ebx
  int SaDeviceWrapper; // eax
  SaDeviceParams **v12; // [rsp+50h] [rbp-30h] BYREF
  struct SaDeviceParams *v13; // [rsp+58h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp-20h]
  __int128 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  SaDeviceParams *v18; // [rsp+A0h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        this[7],
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v15);
  DefaultSecondaryProfileRenderSaDeviceParams = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v18 = 0LL;
    v12 = &v18;
    v13 = 0LL;
    v14 = 1;
    DefaultSecondaryProfileRenderSaDeviceParams = CBtAudioResourceManagerBase::GetDefaultSecondaryProfileRenderSaDeviceParams(
                                                    (CBtAudioResourceManagerBase *)this,
                                                    (struct EndpointCharacteristicsDescriptor *)&v15,
                                                    &v13);
    wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v12);
    if ( DefaultSecondaryProfileRenderSaDeviceParams >= 0 )
    {
      CBtAudioResourceManagerBase::NotifyStreamChange((CBtAudioResourceManagerBase *)this, 1);
      v12 = (SaDeviceParams **)this;
      LOBYTE(v13) = 1;
      SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                          (_DWORD)this,
                          (unsigned int)&v15,
                          (_DWORD)v18,
                          0,
                          0,
                          a2,
                          a3,
                          0LL,
                          0LL,
                          a4);
      DefaultSecondaryProfileRenderSaDeviceParams = SaDeviceWrapper;
      if ( SaDeviceWrapper >= 0 )
      {
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v18);
        DefaultSecondaryProfileRenderSaDeviceParams = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)SaDeviceWrapper);
      CBtAudioResourceManagerBase::NotifyStreamChange((CBtAudioResourceManagerBase *)this, 0);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)DefaultSecondaryProfileRenderSaDeviceParams);
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
  }
LABEL_9:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v15);
  return (unsigned int)DefaultSecondaryProfileRenderSaDeviceParams;
}
