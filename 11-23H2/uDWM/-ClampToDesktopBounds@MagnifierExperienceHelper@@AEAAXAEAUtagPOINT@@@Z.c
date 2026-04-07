/*
 * XREFs of ?ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z @ 0x1800CBC5C
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800CBDF4 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnifierExperienceHelper::ClampToDesktopBounds(MagnifierExperienceHelper *this, struct tagPOINT *a2)
{
  double v2; // xmm3_8
  double v3; // xmm4_8
  double v4; // xmm0_8
  double v5; // xmm7_8
  double v6; // xmm8_8
  double v7; // xmm9_8
  double v8; // xmm1_8
  double v9; // xmm2_8
  double v10; // xmm2_8
  double v11; // xmm3_8
  double v12; // xmm0_8

  v2 = *((double *)this + 10);
  v3 = (double)*(int *)this;
  v4 = *((double *)this + 2);
  v5 = (double)*((int *)this + 1);
  v6 = v3 / *((double *)this + 14);
  v7 = v5 / *((double *)this + 14);
  v8 = (double)a2->y + v7;
  if ( v4 <= v2 )
  {
    v10 = (double)*(int *)this;
    v2 = (v2 - v4) * 0.5;
    goto LABEL_7;
  }
  v9 = (double)a2->x + v6;
  if ( v3 > v9 )
  {
    v9 = (double)*(int *)this;
    goto LABEL_8;
  }
  if ( v2 + v9 > (double)*((int *)this + 2) )
  {
    v10 = (double)*((int *)this + 2);
LABEL_7:
    v9 = v10 - v2;
  }
LABEL_8:
  v11 = *((double *)this + 11);
  v12 = *((double *)this + 3);
  if ( v12 <= v11 )
  {
    v11 = (v11 - v12) * 0.5;
    goto LABEL_14;
  }
  if ( v5 <= v8 )
  {
    v3 = (double)*((int *)this + 3);
    if ( v11 + v8 <= v3 )
      goto LABEL_15;
LABEL_14:
    v8 = v3 - v11;
    goto LABEL_15;
  }
  v8 = (double)*((int *)this + 1);
LABEL_15:
  a2->x = (int)(v9 - v6 + 0.5);
  a2->y = (int)(v8 - v7 + 0.5);
}
