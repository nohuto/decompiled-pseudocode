/*
 * XREFs of ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800C937C
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800C91F0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z @ 0x180086F50 (-ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800C947C (-GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA-AUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800C98D4 (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800C9900 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 */

struct tagPOINT __fastcall MagnifierExperienceHelper::GetFullScreenMagnifierOffsetForCenterMode(
        MagnifierExperienceHelper *this,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const double *a4)
{
  RECT *MonitorRectFromPoint; // rax
  double v9; // xmm3_8
  MagnifierExperienceHelper *v10; // rcx
  double v11; // xmm5_8
  struct tagPOINT result; // rax
  double v13; // xmm1_8
  double v14; // xmm0_8
  double v15; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+28h] [rbp-30h] BYREF

  MonitorRectFromPoint = MagnifierExperienceHelper::GetMonitorRectFromPoint(this, &v16, a3);
  MagnifierExperienceHelper::SetMonitorRect(this, MonitorRectFromPoint);
  MagnifierExperienceHelper::SetMagnificationFactor(this, a4);
  v9 = (double)a3->x - *((double *)this + 12);
  *(double *)&v16.left = (double)a3->y - *((double *)this + 13);
  v15 = v9;
  MagnifierExperienceHelper::ClampToMonitorBounds(v10, &v15, (double *)&v16.left);
  v11 = *((double *)this + 14);
  result = (struct tagPOINT)a2;
  v13 = *(double *)&v16.left;
  v14 = (double)*((int *)this + 13);
  a2->x = (int)((v15 - (double)*((int *)this + 12) / v11) * v11 + 0.5);
  a2->y = (int)((v13 - v14 / v11) * v11 + 0.5);
  return result;
}
