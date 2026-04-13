/*
 * XREFs of ?EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAAX$$QEAV?$function@$$A6A_NV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z@std@@@Z @ 0x1800AC704
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800AC980 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004790 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180069DB8 (-_Destroy@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008CEE0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800ACE10 (-GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@.c)
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800AD5C4 (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::EnumerateTargetedContentNodes(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rcx
  char v8; // di
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+38h] [rbp-18h]
  HSTRING string; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(a1, &v10);
  v4 = v10;
  v5 = v11;
  while ( v4 != v5 )
  {
    v9[0] = *(_QWORD *)CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
                         v3,
                         &string,
                         v4);
    v6 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
           &v13,
           v4);
    v9[1] = v6;
    v7 = *(_QWORD *)(a2 + 24);
    if ( !v7 )
      std::_Xbad_function_call();
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v7 + 16LL))(v7, v6, v9);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v6);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v8 )
      break;
    ++v4;
  }
  if ( v10 )
  {
    std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Destroy(v3, v10, v11);
    operator delete(v10);
  }
}
