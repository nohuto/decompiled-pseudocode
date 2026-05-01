/*
 * XREFs of _lambda_fd32c1b568db692c2b9aba787b88bf18_::operator() @ 0x18003011C
 * Callers:
 *     wil::ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___ @ 0x1800744D4 (wil--ResultFromException__lambda_fd32c1b568db692c2b9aba787b88bf18___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180030038 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180030274 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180030494 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_fd32c1b568db692c2b9aba787b88bf18_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  struct IImmersiveMonitor **v3; // rdi
  _QWORD *v4; // r10
  __int64 result; // rax
  struct IImmersiveMonitor *v6; // rdi
  __int64 (__fastcall *v7)(struct IImmersiveMonitor *, struct IApplicationFrame **); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  struct IApplicationFrame *v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h]
  __int128 v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v18; // [rsp+70h] [rbp+20h] BYREF
  struct IApplicationFrame *v19; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrame *v20; // [rsp+80h] [rbp+30h] BYREF

  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v18);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E9,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v13);
  v3 = a1[1];
  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Find_lower_bound<unsigned long>(
    v3 + 17,
    &v13);
  if ( *(_BYTE *)(v14 + 25) || (result = *(unsigned int *)(v14 + 32), v18 < (unsigned int)result) || v14 == *v4 )
  {
    v19 = 0LL;
    v6 = v3[16];
    v7 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    v8 = v7(v6, &v19);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F0,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v8,
        v13);
    *(_QWORD *)&v13 = a1[1];
    *((_QWORD *)&v13 + 1) = &v19;
    v15 = v13;
    v16 = 1;
    v9 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F8,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9,
        v13);
    v10 = std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
            a1[1] + 17,
            (__int64)&v13);
    v11 = *(_QWORD *)v10;
    v12 = v19;
    if ( *(struct IApplicationFrame **)(*(_QWORD *)v10 + 40LL) != v19 )
    {
      v20 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v20 = *(struct IApplicationFrame **)(v11 + 40);
      *(_QWORD *)(v11 + 40) = v12;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    }
    return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  }
  return result;
}
