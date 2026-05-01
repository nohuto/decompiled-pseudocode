/*
 * XREFs of ?GetStartMenuShortcutName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x18056E034
 * Callers:
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18056D520 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetStartMenuShortcutName(__int64 a1, _QWORD *a2)
{
  LPVOID v4; // rbx
  int (__fastcall *v5)(LPVOID, _QWORD *, __int64 *, _QWORD); // r14
  __int64 v6; // rcx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, _QWORD, void **); // rdi
  void **v9; // rax
  LPVOID ppv; // [rsp+38h] [rbp-8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  _WORD *v13; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, &ppv) < 0 )
    goto LABEL_10;
  v4 = ppv;
  v5 = *(int (__fastcall **)(LPVOID, _QWORD *, __int64 *, _QWORD))(*(_QWORD *)ppv + 72LL);
  v6 = v12;
  v12 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  if ( v5(v4, a2, &v12, 0LL) < 0 )
    goto LABEL_10;
  v13 = 0LL;
  v7 = v12;
  v8 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v12 + 40LL);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v13);
  if ( v8(v7, 0LL, v9) < 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
LABEL_10:
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_11;
  }
  std::wstring::wstring((char **)a1, v13);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
LABEL_11:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
