/*
 * XREFs of ?ProcessDeviceQueryRemove@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800F1220
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800767A0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x18004CD58 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18004D954 (--$find@X@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDev.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180074A18 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F12D4 (-ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32kInterop::ProcessDeviceQueryRemove(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  v8 = v2;
  if ( Win32kInterop::IsDeviceAttached(this, v2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceQueryRemove(v2);
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::find<void>(
      (__int64)this + 64,
      &v9,
      (__int64)&v8);
    if ( v9 == *((_QWORD *)this + 9) )
    {
      v5 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x241,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)v5,
        v6);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
           *((_QWORD *)this + 7),
           *(_QWORD *)(v9 + 24));
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x245,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v4,
        v6);
  }
}
