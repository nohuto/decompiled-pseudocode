/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEAUIMMDevice@@@Z @ 0x1800F58AC
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@$$QEAPEAUIMMDevice@@@Z @ 0x1800F9C5C (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@PEAUIMMDevice@@@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::RuntimeClassInitialize(void **this, struct IMMDevice *a2)
{
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  GetId = a2->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, this + 2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 24) = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct IMMDevice *))(*(_QWORD *)g_AudioResourceManager + 88LL))(
                              g_AudioResourceManager,
                              a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
