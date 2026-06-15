/*
 * XREFs of ?RuntimeClassInitialize@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEBG@Z @ 0x14005FDF0
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@AEAPEBG@Z @ 0x140060EF0 (--$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Mi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140016858 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400585C4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEnvironmentStateChangedNotificationsHandler::RuntimeClassInitialize(
        void **this,
        char *a2,
        __int64 a3,
        const char *a4)
{
  HRESULT v5; // ebx
  __int64 v6; // rdx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v10,
    a2,
    a3,
    a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    this + 12,
    &v10);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v10);
  if ( !this[12] )
  {
    v5 = -2147024882;
    v6 = 120LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = this[5];
  this[5] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v5 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, this + 5);
  if ( v5 < 0 )
  {
    v6 = 122LL;
    goto LABEL_3;
  }
  return 0LL;
}
