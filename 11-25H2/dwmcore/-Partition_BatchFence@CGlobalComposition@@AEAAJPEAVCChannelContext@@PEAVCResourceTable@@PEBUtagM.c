/*
 * XREFs of ?Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BATCHFENCE@@@Z @ 0x18026F6C8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18010407C (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_BatchFence(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_BATCHFENCE *a4)
{
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax

  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    (*(void (__fastcall **)(struct IVtrSurfaceManager *, _QWORD, _QWORD))(*(_QWORD *)VtrSurfaceManager + 32LL))(
      VtrSurfaceManager,
      *((unsigned int *)a4 + 1),
      *((unsigned int *)a2 + 6));
  return 0LL;
}
