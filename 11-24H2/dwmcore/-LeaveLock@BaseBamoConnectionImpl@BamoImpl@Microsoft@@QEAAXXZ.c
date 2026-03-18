/*
 * XREFs of ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1801A7690 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1801A7B40 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801A7C20 (-OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801A891C (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8994 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801A89C4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801A8A14 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x1801A8BA0 (-OnPeerConnectedThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerI.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A9590 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801A95FC (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x1801A9700 (-OnPeerRequestsConnectThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEA.c)
 *     ?SetBooleanValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI_N@Z @ 0x1801A97A0 (-SetBooleanValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI_N@Z.c)
 *     ?OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ @ 0x18024EB20 (-OnDisconnectedCallout@BamoDataSourceProxy@@EEAAJXZ.c)
 *     ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18026D8F8 (--0-$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QE.c)
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801A7DD8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9A3,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v2);
  v3 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 46) = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
}
