/*
 * XREFs of ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x1800498A0
 * Callers:
 *     _lambda_cb23c6bad18b717dd13912dc63130875_::operator() @ 0x180112C6C (_lambda_cb23c6bad18b717dd13912dc63130875_--operator().c)
 *     _lambda_ebe2282181f4e2159926b1d117e17408_::operator() @ 0x180112DA8 (_lambda_ebe2282181f4e2159926b1d117e17408_--operator().c)
 *     ?Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180113FEC (-Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpoint@@$1?_GUID_1be09788_6894_4089_8586_9a2a6c265ac5@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpoint@@PEAUIUnknown@@@Z @ 0x180049998 (--4-$CComQIPtr@UIMMEndpoint@@$1-_GUID_1be09788_6894_4089_8586_9a2a6c265ac5@@3U__s_GUID@@B@ATL@@Q.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IMMDevice *a2)
{
  _QWORD *v4; // rsi
  int v5; // ebx
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (_QWORD *)((char *)this + 56);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 56);
  if ( v5 < 0 )
    goto LABEL_4;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 64,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v4, (char *)this + 64);
  ATL::CComQIPtr<IMMEndpoint,&__s_GUID const _GUID_1be09788_6894_4089_8586_9a2a6c265ac5>::operator=(&v8, a2);
  v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 72);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 264LL))(this),
        v6 = *((_DWORD *)this + 18),
        *((_QWORD *)this + 28) = *v4,
        *((_DWORD *)this + 58) = v6,
        v5 < 0) )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 168, v5);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v5;
}
