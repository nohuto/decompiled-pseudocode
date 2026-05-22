/*
 * XREFs of ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x18006CA14
 * Callers:
 *     ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18006C840 (-OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsg.c)
 *     ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x18006C8C0 (-OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerIm.c)
 *     ?OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x18006C930 (-OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@.c)
 *     ?AllocatePeerThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18006C9B0 (-AllocatePeerThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo.c)
 *     ?SetBootstrapProxyCallout@BamoConnection@ISMBamos_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1801232B0 (-SetBootstrapProxyCallout@BamoConnection@ISMBamos_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@.c)
 * Callees:
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180045470 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046AF0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
        __int64 a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a3)
{
  int v5; // esi
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a3 != 0LL ? 3 : 0;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(a3);
  *(_DWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 0LL;
  if ( !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 16) + 80LL))(*(_QWORD *)(v6 + 16));
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v7,
          v9);
    }
  }
  return a1;
}
