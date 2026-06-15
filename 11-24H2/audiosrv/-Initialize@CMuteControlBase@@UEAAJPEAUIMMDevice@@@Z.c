/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800496E0
 * Callers:
 *     _lambda_48ab4a51811d1fd17847d009bb0945ca_::operator() @ 0x180101338 (_lambda_48ab4a51811d1fd17847d009bb0945ca_--operator().c)
 *     ?Initialize@CMuteSoftware@@QEAAJPEAUIMMDevice@@PEBG@Z @ 0x180102010 (-Initialize@CMuteSoftware@@QEAAJPEAUIMMDevice@@PEBG@Z.c)
 *     ?Initialize_old@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180102274 (-Initialize_old@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  _QWORD *v2; // r14
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 32);
  GetId = a2->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 32,
    0LL);
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD *))GetId)(a2, v2);
  if ( v6 < 0 )
  {
    v7 = 163LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 40,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v2, (char *)this + 40);
  v6 = (*(__int64 (__fastcall **)(CMuteControlBase *))(*(_QWORD *)this + 128LL))(this);
  if ( v6 < 0 )
  {
    v7 = 168LL;
    goto LABEL_3;
  }
  return 0LL;
}
