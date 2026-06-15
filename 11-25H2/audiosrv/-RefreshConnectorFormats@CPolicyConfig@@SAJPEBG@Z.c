/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1801010F0
 * Callers:
 *     _lambda_d5f979e76b75a7011e48ce4548210420_::operator() @ 0x1801045EC (_lambda_d5f979e76b75a7011e48ce4548210420_--operator().c)
 *     _lambda_f4c65606035aa670aca23c583ca49328_::operator() @ 0x180104768 (_lambda_f4c65606035aa670aca23c583ca49328_--operator().c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180041978 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18012DCD8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(const unsigned __int16 *a1)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  EffectPack *v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+78h] [rbp+28h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  const WCHAR *v18; // [rsp+88h] [rbp+38h] BYREF

  v17 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v17);
  v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))GetDevice)(
         g_DeviceEnumerator,
         a1,
         &v17);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v16 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 48LL))(v17, &v16);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 1359LL;
      goto LABEL_5;
    }
    if ( v16 != 4 )
    {
      *(_OWORD *)v13 = 0LL;
      v14 = 0LL;
      EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                            a1,
                                            0,
                                            (struct EndpointCharacteristicsDescriptor *)v13);
      v4 = EndpointCharacteristicsDescriptor;
      if ( EndpointCharacteristicsDescriptor < 0 )
      {
        v7 = 1363LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v13);
        goto LABEL_17;
      }
      v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 32LL) )
      {
        v18 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v9,
          byte_1801A27C6,
          v10,
          v11,
          &v18);
      }
      EndpointCharacteristicsDescriptor = EffectPack::RefreshConnectorFormats(v13[1]);
      v4 = EndpointCharacteristicsDescriptor;
      if ( EndpointCharacteristicsDescriptor < 0 )
      {
        v7 = 1371LL;
        goto LABEL_9;
      }
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v13);
    }
    v4 = 0;
    goto LABEL_17;
  }
  v5 = 1354LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v3);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  return v4;
}
