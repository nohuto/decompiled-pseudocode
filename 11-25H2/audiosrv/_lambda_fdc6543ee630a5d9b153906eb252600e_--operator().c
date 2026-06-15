/*
 * XREFs of _lambda_fdc6543ee630a5d9b153906eb252600e_::operator() @ 0x1800E42B4
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800E4C40 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIKsControl@@@Z @ 0x1800E47A4 (-GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_fdc6543ee630a5d9b153906eb252600e_::operator()(__int64 a1)
{
  int KsControlForFlow; // eax
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  GUID v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  struct IKsControl *v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = 0LL;
  KsControlForFlow = CBtLeAudioResourceManager::GetKsControlForFlow(*(CBtLeAudioResourceManager **)a1, eRender, &v12);
  v3 = KsControlForFlow;
  if ( KsControlForFlow < 0 )
  {
    v4 = (unsigned int)KsControlForFlow;
    v5 = 165LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)v4);
    goto LABEL_9;
  }
  v7 = GUID_01159b79_0ea6_4923_80f5_3258d1fd9156;
  v8 = 2;
  v9 = 1;
  v11 = 0;
  v3 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, _QWORD, int, int *))v12->lpVtbl->KsProperty)(
         v12,
         &v7,
         24LL,
         *(_QWORD *)(a1 + 8),
         12,
         &v11);
  if ( v3 >= 0 )
  {
    v3 = 0;
    goto LABEL_9;
  }
  if ( v3 != -2147023726 )
  {
    v4 = (unsigned int)v3;
    v5 = 175LL;
    goto LABEL_7;
  }
  v3 = -2147023726;
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)v3;
}
