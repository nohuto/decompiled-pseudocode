/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1402FD478
 * Callers:
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1403252DC (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1402FD75C (-IterateDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402FDD30 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        DXGDEVICE *this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rsi
  struct DXGALLOCATION *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  __int64 v8; // rcx
  int v10; // [rsp+90h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 476) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7403;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      7403LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7404;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7404LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 237)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7405;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      7405LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7406;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DXGDEVICECLIENT_USER == GetClientType()",
      7406LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v4 + 310) & 0x100) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7407;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_PrimaryDescription[VidPnSourceId].Pinned == FALSE",
      7407LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v4 + 310) & 0x200) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7408;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_PrimaryDescription[VidPnSourceId].DisplayModeSet == FALSE",
      7408LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v11) = 0;
  LOBYTE(v10) = 0;
  do
  {
    v6 = DXGDEVICE::IterateDirectFlipAllocationFromRequestedPinnedList(
           this,
           v4,
           (unsigned int *)&v11,
           (unsigned __int8 *)&v10);
    v7 = (struct _EX_RUNDOWN_REF *)v6;
    if ( v6 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        *((struct VIDMM_MULTI_ALLOC **)v6 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7[5].Count + 72));
      ExReleaseRundownProtection(v7 + 11);
    }
  }
  while ( !(_BYTE)v10 );
  v8 = *((_QWORD *)this + 237);
  if ( v8 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v8 + 3120), v4);
  return 0LL;
}
