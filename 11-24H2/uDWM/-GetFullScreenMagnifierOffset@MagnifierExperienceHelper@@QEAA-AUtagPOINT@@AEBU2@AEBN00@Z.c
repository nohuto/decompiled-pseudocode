/*
 * XREFs of ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800C91F0
 * Callers:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800C8FB8 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z @ 0x1800C90C8 (-ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z.c)
 *     ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800C937C (-GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEB.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800C947C (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800C950C (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z @ 0x1800C9834 (-GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800C98D4 (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800C9900 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 *     ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800C9984 (-ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffset(
        RECT *lprc,
        struct tagPOINT *a2,
        const double *a3,
        const struct tagPOINT *a4,
        const struct tagPOINT *a5,
        int *a6)
{
  RECT *MonitorRectFromPoint; // rax
  double v11; // xmm0_8
  RECT *v12; // rcx
  MagnifierExperienceHelper *v13; // rcx
  int ViewportDisplacement; // eax
  MagnifierExperienceHelper *v15; // rcx
  int v16; // eax
  double v17; // xmm1_8
  struct tagPOINT v18; // rax
  struct tagPOINT v20; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v21; // [rsp+38h] [rbp-18h] BYREF

  if ( *(float *)&lprc[7].bottom == 0.0 && *(float *)&lprc[7].right == 0.0 )
  {
    MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode((MagnifierExperienceHelper *)lprc, a2, a3);
  }
  else
  {
    MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(
                             (MagnifierExperienceHelper *)lprc,
                             &v21,
                             (const struct tagPOINT *)a3);
    MagnifierExperienceHelper::SetMonitorRect((MagnifierExperienceHelper *)lprc, MonitorRectFromPoint);
    MagnifierExperienceHelper::SetMagnificationFactor((MagnifierExperienceHelper *)lprc, (const double *)a4);
    v11 = (double)a6[1];
    v20.x = (int)((double)*a6 / *(double *)&lprc[7].left + 0.5);
    v20.y = (int)(v11 / *(double *)&lprc[7].left + 0.5);
    MagnifierExperienceHelper::GetStillZoneFromOffset(v12, &v21, &v20, (const struct tagPOINT *)a3);
    if ( MagnifierExperienceHelper::ShouldUpdateViewport(lprc, &v20, (const struct tagPOINT *)a3, a5) )
    {
      ViewportDisplacement = MagnifierExperienceHelper::GetViewportDisplacement(
                               v13,
                               a5->x,
                               v21.left,
                               v21.right,
                               *(_DWORD *)a3);
      v20.x += ViewportDisplacement;
      v16 = MagnifierExperienceHelper::GetViewportDisplacement(v15, a5->y, v21.top, v21.bottom, *((_DWORD *)a3 + 1));
      v20.y += v16;
      MagnifierExperienceHelper::ClampToDesktopBounds((MagnifierExperienceHelper *)lprc, &v20);
      v17 = (double)v20.y * *(double *)&lprc[7].left + 0.5;
      v20.x = (int)((double)v20.x * *(double *)&lprc[7].left + 0.5);
      v20.y = (int)v17;
      v18 = v20;
    }
    else
    {
      v18 = *(struct tagPOINT *)a6;
    }
    *a2 = v18;
  }
  return (struct tagPOINT)a2;
}
