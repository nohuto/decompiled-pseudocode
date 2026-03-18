/*
 * XREFs of ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC
 * Callers:
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     ?CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1@Z @ 0x1802B21C4 (-CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV-$TMilRect_@HUtagRECT@@UD2.c)
 *     ?ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z @ 0x1802B2E80 (-ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z.c)
 *     ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC (-HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z.c)
 *     ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1_N@Z @ 0x1802B3CCC (-SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV-$TMilRect_@HUtagRECT@@UD.c)
 */

char __fastcall CCursorState::UpdateHardwareCursor(CCursorState *this, __m128i *a2, char a3)
{
  bool v3; // zf
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9[6]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 22) == 0LL;
  v8 = 0LL;
  *(_OWORD *)v9 = 0LL;
  if ( v3 )
    goto LABEL_14;
  v3 = *((_BYTE *)this + 80) == 0;
  v10 = *((_QWORD *)this + 7);
  if ( !v3 || !a2[7].m128i_i64[0] )
    v10 = *(_QWORD *)((char *)this + 212);
  if ( !CCursorState::MonitorData::CalcShapeRects(a2, (float *)&v10, (int *)&v8, v9) )
  {
LABEL_14:
    CCursorState::HideHardwareShape(this, (struct CCursorState::MonitorData *)a2);
    a2[9].m128i_i32[2] = 0;
  }
  else if ( *((_BYTE *)this + 80)
         || (a2[9].m128i_i32[2] != 1 || a3 || a2[8].m128i_i32[3] != (_DWORD)v8 || a2[9].m128i_i32[0] != DWORD1(v8))
         && !CCursorState::SetHardwareShapeAndPosition((__int64)this, a2->m128i_i64, (int *)&v8, v9, a3) )
  {
    CCursorState::ForceSoftwareShape(this, (struct CCursorState::MonitorData *)a2);
    return 0;
  }
  return 1;
}
