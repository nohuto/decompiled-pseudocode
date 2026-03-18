/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401E2280
 * Callers:
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1401E223C (--1DXGOVERLAY@@QEAA@XZ.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401E2E78 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403975D4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x14019D640 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1401A2204 (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  void *v4; // rdx
  unsigned int v5; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 188;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceSharedOwner()",
      188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v2 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v2 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v2 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v2 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 189;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsOverlayEnabled()",
      189LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + 6) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
      v4,
      v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_DWORD *)this + 8);
  if ( v5 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
      v5);
    *((_DWORD *)this + 8) = -1;
  }
}
