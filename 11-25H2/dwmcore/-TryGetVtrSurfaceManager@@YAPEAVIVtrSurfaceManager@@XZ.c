/*
 * XREFs of ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18010407C
 * Callers:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x180100AEC (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x180103760 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ?ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z @ 0x180103FF0 (-ValidateSurfaceHandle@CCompositionSurfaceManager@@CAJPEAXPEAU_LUID@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104A30 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BATCHFENCE@@@Z @ 0x18026F6C8 (-Partition_BatchFence@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
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
