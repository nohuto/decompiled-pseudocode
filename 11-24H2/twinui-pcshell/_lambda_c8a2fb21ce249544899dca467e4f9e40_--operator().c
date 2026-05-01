/*
 * XREFs of _lambda_c8a2fb21ce249544899dca467e4f9e40_::operator() @ 0x18006B48C
 * Callers:
 *     wil::ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___ @ 0x1802CEB84 (wil--ResultFromException__lambda_c8a2fb21ce249544899dca467e4f9e40___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006AB58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovemen.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x18006B63C (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18006B778 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_c8a2fb21ce249544899dca467e4f9e40_::operator()(struct IImmersiveMonitor ***a1)
{
  int v2; // eax
  __int64 v3; // r9
  struct IImmersiveMonitor *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  struct IImmersiveMonitor *v7; // rdi
  __int64 (__fastcall *v8)(struct IImmersiveMonitor *, __int64, struct IApplicationFrame **); // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  struct IApplicationFrame *v12; // rbx
  int v13[4]; // [rsp+20h] [rbp-30h] BYREF
  struct IImmersiveMonitor **v14; // [rsp+30h] [rbp-20h]
  struct IApplicationFrame **v15; // [rsp+38h] [rbp-18h]
  char v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v18; // [rsp+70h] [rbp+20h] BYREF
  struct IApplicationFrame *v19; // [rsp+78h] [rbp+28h] BYREF
  struct IApplicationFrame *v20; // [rsp+80h] [rbp+30h] BYREF

  v18 = 0;
  v2 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)**a1 + 24LL))(**a1, &v18);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F4,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v13[0]);
  v4 = a1[1][17];
  result = *((_QWORD *)v4 + 1);
  HIDWORD(v15) = 0;
  v6 = (__int64)v4;
  while ( !*(_BYTE *)(result + 25) )
  {
    if ( *(_DWORD *)(result + 32) >= v18 )
    {
      v6 = result;
      result = *(_QWORD *)result;
    }
    else
    {
      result = *(_QWORD *)(result + 16);
    }
  }
  if ( *(_BYTE *)(v6 + 25) || (struct IImmersiveMonitor *)v6 == v4 || v18 < *(_DWORD *)(v6 + 32) )
  {
    v19 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ApplicationFrameHostPerformanceImprovements>::GetImpl'::`2'::impl,
      1u,
      v18,
      v3);
    v7 = a1[1][16];
    v8 = *(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, struct IApplicationFrame **))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v9 = v8(v7, 1LL, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x200,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v9,
        v13[0]);
    v14 = a1[1];
    v15 = &v19;
    v16 = 1;
    v10 = WindowSizeConverter::EnsurePosition(retaddr, **a1, v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20D,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v10,
        v13[0]);
    result = std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
               a1[1] + 17,
               v13,
               &v18);
    v11 = *(_QWORD *)result;
    v12 = v19;
    if ( *(struct IApplicationFrame **)(*(_QWORD *)result + 40LL) != v19 )
    {
      v20 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      v20 = *(struct IApplicationFrame **)(v11 + 40);
      *(_QWORD *)(v11 + 40) = v12;
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      v12 = v19;
    }
    if ( v12 )
    {
      v19 = 0LL;
      return (*(__int64 (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return result;
}
