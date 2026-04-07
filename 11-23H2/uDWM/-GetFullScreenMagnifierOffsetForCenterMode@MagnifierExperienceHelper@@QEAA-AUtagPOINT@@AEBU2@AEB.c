/*
 * XREFs of ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800CBF84
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800CBDF4 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x1800CBD84 (-ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800CC088 (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800CC4CC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800CC4F8 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode(
        MagnifierExperienceHelper *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const double *a4)
{
  RECT *MonitorRectFromPoint; // rax
  double v9; // xmm1_8
  double v10; // xmm5_8
  struct tagPOINT result; // rax
  double v12; // xmm1_8
  double v13; // xmm0_8
  double v14; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+28h] [rbp-30h] BYREF

  MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(this, &v15, a3);
  MagnifierExperienceHelper::SetMonitorRect(this, MonitorRectFromPoint);
  MagnifierExperienceHelper::SetMagnificationFactor(this, a4);
  v9 = (double)a3->y - *((double *)this + 13);
  v14 = (double)a3->x - *((double *)this + 12);
  *(double *)&v15.left = v9;
  MagnifierExperienceHelper::ClampToMonitorBounds(this, &v14, (double *)&v15.left);
  v10 = *((double *)this + 14);
  result = (struct tagPOINT)a2;
  v12 = *(double *)&v15.left;
  v13 = (double)*((int *)this + 13);
  a2->x = (int)((v14 - (double)*((int *)this + 12) / v10) * v10 + 0.5);
  a2->y = (int)((v12 - v13 / v10) * v10 + 0.5);
  return result;
}
