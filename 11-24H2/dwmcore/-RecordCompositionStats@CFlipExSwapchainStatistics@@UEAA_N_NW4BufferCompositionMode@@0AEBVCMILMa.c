/*
 * XREFs of ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F06A0
 * Callers:
 *     ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F0240 (-SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEB.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F0380 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F0560 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800F06F0 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 */

char __fastcall CFlipExSwapchainStatistics::RecordCompositionStats(
        __int64 a1,
        char a2,
        int a3,
        char a4,
        CMILMatrix *a5)
{
  char v5; // bl
  int v7; // eax
  enum DXGI_MODE_ROTATION Rotation; // eax

  v5 = 0;
  if ( a2 )
  {
    v7 = 0;
    if ( !a4 )
      v7 = a3;
    if ( v7 != *(_DWORD *)(a1 + 24) )
    {
      *(_DWORD *)(a1 + 24) = v7;
      v5 = 1;
    }
    Rotation = CMILMatrix::GetRotation(a5);
    if ( *(_DWORD *)(a1 + 28) != Rotation )
    {
      *(_DWORD *)(a1 + 28) = Rotation;
      return 1;
    }
  }
  return v5;
}
