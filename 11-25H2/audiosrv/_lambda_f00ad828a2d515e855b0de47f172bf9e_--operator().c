/*
 * XREFs of _lambda_f00ad828a2d515e855b0de47f172bf9e_::operator() @ 0x1800C6AD0
 * Callers:
 *     wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___ @ 0x1800C6614 (wil--init_once__lambda_f00ad828a2d515e855b0de47f172bf9e___.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800537D0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A5B44 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C641C (--$emplace_front@AEAV-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@-$f.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_f00ad828a2d515e855b0de47f172bf9e_::operator()(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  const unsigned __int16 *v4; // rax
  int EndpointCharacteristicsDescriptor; // eax
  unsigned int v6; // ebx
  int CustomResourceManagerService; // eax
  _QWORD *v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  CEndpointCharacteristics *v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v9 = (_QWORD *)(*(_QWORD *)a1 + 288LL);
  v2 = v9;
  v10 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
    v3 + 1,
    (__int64)g_PolicyEventsHandler);
  *v3 = *v9;
  v10 = 0LL;
  *v2 = v3;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v9);
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v4 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)a1 + 240LL);
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        v4,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v11);
  v6 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v14 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     v11[0],
                                     &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
                                     &v14);
    v6 = CustomResourceManagerService;
    if ( CustomResourceManagerService >= 0 )
    {
      if ( v14 )
      {
        v15 = 0LL;
        if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v14)(
               v14,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               &v15) >= 0 )
          std::forward_list<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy> &>(
            (_QWORD *)(*(_QWORD *)a1 + 288LL),
            &v15);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v11);
  return v6;
}
