/*
 * XREFs of ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x1801A46EC
 * Callers:
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026640 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z @ 0x1801A4660 (-ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1801A47F0 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1801A4ABC (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BATCHFENCE@@@Z @ 0x180263678 (-Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     <none>
 */

struct IVtrSurfaceManager *TryGetVtrSurfaceManager(void)
{
  __int64 v0; // rcx

  v0 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
  if ( v0 )
    return (struct IVtrSurfaceManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 48LL))(v0);
  else
    return 0LL;
}
