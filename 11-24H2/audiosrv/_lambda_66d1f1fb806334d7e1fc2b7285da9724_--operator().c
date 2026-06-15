/*
 * XREFs of _lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator() @ 0x1800C5E14
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800480B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065C1C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1F54 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C5900 (--$emplace_front@AEAV-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@-$f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_66d1f1fb806334d7e1fc2b7285da9724_::operator()(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rax
  int EndpointCharacteristicsDescriptor; // eax
  unsigned int v7; // ebx
  int CustomResourceManagerService; // eax
  _QWORD *v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  CEndpointCharacteristics *v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v10 = (_QWORD *)(*(_QWORD *)a1 + 288LL);
  v2 = v10;
  v11 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
    v3 + 1,
    (__int64)g_PolicyEventsHandler);
  *v3 = *v10;
  v11 = 0LL;
  *v2 = v3;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v10);
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v5 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)a1 + 240LL, v4);
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        v5,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v12);
  v7 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v15 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     v12[0],
                                     &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                                     &v15);
    v7 = CustomResourceManagerService;
    if ( CustomResourceManagerService >= 0 )
    {
      if ( v15 )
      {
        v16 = 0LL;
        if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v15)(
               v15,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v16) >= 0 )
          std::forward_list<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy> &>(
            (_QWORD *)(*(_QWORD *)a1 + 288LL),
            &v16);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6DD,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v12);
  return v7;
}
