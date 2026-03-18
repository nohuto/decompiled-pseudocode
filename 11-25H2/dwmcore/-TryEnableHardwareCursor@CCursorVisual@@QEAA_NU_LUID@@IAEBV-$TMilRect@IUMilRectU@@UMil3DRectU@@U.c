/*
 * XREFs of ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x18029ACB8
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x1802BD8E8 (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 */

bool __fastcall CCursorVisual::TryEnableHardwareCursor(__int64 a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  __int64 v6; // rcx
  char v7; // bl
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v12[4]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 696);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_OWORD *)(a5 + 16);
    v12[0] = *(_OWORD *)a5;
    v9 = *(_OWORD *)(a5 + 32);
    v12[1] = v8;
    v10 = *(_OWORD *)(a5 + 48);
    v13 = *(_DWORD *)(a5 + 64);
    v12[2] = v9;
    v12[3] = v10;
    return (unsigned __int8)CCursorState::TryEnableHardwareCursor(v6, a2, a3, a4, (struct CMILMatrix *)v12, a6) != 0;
  }
  return v7;
}
