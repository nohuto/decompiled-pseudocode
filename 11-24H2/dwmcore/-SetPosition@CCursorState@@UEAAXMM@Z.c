/*
 * XREFs of ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802B41A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1@Z @ 0x1802B21C4 (-CalcShapeRects@MonitorData@CCursorState@@QEBA_NAEBUD2D_POINT_2F@@PEAV-$TMilRect_@HUtagRECT@@UD2.c)
 *     ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC (-HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@1_N@Z @ 0x1802B3CCC (-SetHardwareShapeAndPosition@CCursorState@@AEAA_NPEAVMonitorData@1@AEBV-$TMilRect_@HUtagRECT@@UD.c)
 */

void __fastcall CCursorState::SetPosition(CCursorState *this, float a2, float a3)
{
  bool v4; // si
  __m128i *v5; // rbp
  __m128i *i; // rdi
  CCursorState *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF

  EnterCriticalSection(&g_CursorManager);
  if ( *((_BYTE *)this + 80) || a2 == *((float *)this + 14) && a3 == *((float *)this + 15) )
    goto LABEL_20;
  v4 = *((_BYTE *)this + 82)
    || *((_BYTE *)this + 19) && *((int *)this + 6) > 0 && !*((_QWORD *)this + 33)
    || *((_BYTE *)this + 112);
  *((float *)this + 14) = a2;
  *((float *)this + 15) = a3;
  *((_BYTE *)this + 21) = 1;
  v5 = (__m128i *)*((_QWORD *)this + 12);
  for ( i = (__m128i *)*((_QWORD *)this + 11); i != v5; i += 10 )
  {
    if ( i[9].m128i_i32[2] == 2 )
      goto LABEL_15;
    v9 = 0LL;
    v8 = 0LL;
    if ( CCursorState::MonitorData::CalcShapeRects(i, (float *)this + 14, (int *)&v9, (int *)&v8) )
    {
      if ( CCursorState::SetHardwareShapeAndPosition((__int64)this, i->m128i_i64, (int *)&v9, &v8, 0) )
        continue;
LABEL_15:
      v4 = 1;
      continue;
    }
    CCursorState::HideHardwareShape(v7, (struct CCursorState::MonitorData *)i);
  }
  if ( v4 )
    CCursorState::ScheduleCompositionPass(this);
LABEL_20:
  LeaveCriticalSection(&g_CursorManager);
}
