/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800965A4
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800957C0 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18008CAB0 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180094F20 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?GetTargetTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800954B0 (-GetTargetTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800957CC (-IsPinnedToStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@U.c)
 *     ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800966B0 (-SwapTilesInStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        const WCHAR *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v4; // rsi
  unsigned int v5; // r8d
  __int64 *v6; // rbx
  __int64 *v7; // rax
  int IsPinnedToStart; // eax
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  char v17; // [rsp+70h] [rbp+28h] BYREF
  char v18; // [rsp+78h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF

  v4 = (__int64 *)(this + 132);
  if ( *((_QWORD *)this + 33) )
  {
    v18 = 0;
    v17 = 0;
    CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier((__int64)this, (WCHAR *)&v20, a3);
    CreativeFramework::Actions::SwapStartTileService::GetTargetTileIdentifier(this, (WCHAR *)&v19, v5);
    v6 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
           &v13,
           &v19);
    v7 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
           &v14,
           v4);
    IsPinnedToStart = StartDocked::IsPinnedToStart(v7, v6, (__int64)&v17);
    if ( IsPinnedToStart < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x111,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)IsPinnedToStart,
        v13);
    if ( !v17 )
    {
      v9 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
             &v14,
             &v19);
      v10 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
              &v13,
              &v20);
      v11 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
              v15,
              v4);
      v12 = StartDocked::SwapTilesInStart(v11, v10, v9, &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v12,
          v13);
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  }
}
