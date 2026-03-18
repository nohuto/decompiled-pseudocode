/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402D7E98
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x14006CAD0 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401885C0 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140194D90 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x140197F10 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x140198118 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1402D7C08 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396DE0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005385C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x14027BCF0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1403141BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314D10 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403CFA74 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  DXGADAPTER **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  BLTQUEUE *v12; // rbx

  v3 = 3984LL * a2;
  v5 = a2;
  if ( !*(_QWORD *)(*((_QWORD *)this + 16) + v3 + 728) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 241;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"NULL != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwner",
      241LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 16) + v3 + 736) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 242;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED != m_pDisplaySource[VidPnSourceId].m_VidPnSourceOwnerType",
      242LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (DXGADAPTER **)((char *)this + 16);
  v7 = *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 728);
  if ( *(_QWORD *)(v7 + 1880) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) && *((_DWORD *)*v6 + 50) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*v6) )
    {
      v10 = *(_QWORD *)(v8 + v3 + 728);
      v11 = *(_QWORD *)(v10 + 1880);
      if ( v11 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v11 + 3120), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v8 + v3 + 728) + 16LL),
        1 << a2,
        0,
        1 << a2,
        0);
    }
  }
  v9 = *((_QWORD *)this + 57);
  if ( v9 )
  {
    v12 = (BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 2968 * v5);
    BLTQUEUE::Flush(v12);
    BLTQUEUE::Reset(v12, 1);
  }
  *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 728) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 752) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 16) + v3 + 736) = 0;
  *(_DWORD *)(*((_QWORD *)this + 16) + v3 + 740) = 0;
  *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 744) = 0LL;
  if ( *((_DWORD *)*v6 + 50) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), a2, 0LL, 0LL, 0, 1);
}
