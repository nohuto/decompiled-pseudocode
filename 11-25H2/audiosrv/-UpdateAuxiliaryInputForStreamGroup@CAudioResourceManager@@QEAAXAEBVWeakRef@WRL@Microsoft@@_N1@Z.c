/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800C0C4C
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800C0C20 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800884AC (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     _lambda_ad0db6eea65a131797ab646398125e78_::operator() @ 0x1800B7CD4 (_lambda_ad0db6eea65a131797ab646398125e78_--operator().c)
 *     _lambda_ce85268bce6f711acfae3373bddb5933_::operator() @ 0x1800B82A4 (_lambda_ce85268bce6f711acfae3373bddb5933_--operator().c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2,
        char a3,
        char a4)
{
  __int64 v4; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v7; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+58h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp-A0h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v14[4]; // [rsp+70h] [rbp-90h] BYREF
  char v15; // [rsp+90h] [rbp-70h]
  __int128 v16; // [rsp+98h] [rbp-68h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-58h]
  _QWORD v18[18]; // [rsp+B0h] [rbp-50h] BYREF
  int v19; // [rsp+150h] [rbp+50h] BYREF
  AuxiliaryInputDescriptor *v20; // [rsp+158h] [rbp+58h] BYREF
  char v21; // [rsp+160h] [rbp+60h] BYREF
  char v22; // [rsp+168h] [rbp+68h] BYREF

  v22 = a4;
  v21 = a3;
  v19 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  v14[0] = &v4;
  v14[1] = &v5;
  v14[2] = &v22;
  v14[3] = &v19;
  v15 = 1;
  v18[0] = a2;
  v18[1] = &v10;
  v18[2] = &v9;
  v18[3] = &v4;
  v18[4] = &v7;
  v18[5] = &v16;
  v18[6] = &v13;
  v18[7] = this;
  v18[8] = &v8;
  v18[9] = &v12;
  v18[10] = &v11;
  v18[11] = &v22;
  v18[12] = &v20;
  v18[13] = &v5;
  v18[14] = &v21;
  v18[15] = &v6;
  v19 = lambda_ad0db6eea65a131797ab646398125e78_::operator()((__int64)v18);
  v15 = 0;
  lambda_ce85268bce6f711acfae3373bddb5933_::operator()((__int64)v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  if ( v20 )
    AuxiliaryInputDescriptor::`scalar deleting destructor'((void **)v20);
  v20 = 0LL;
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v16);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
}
