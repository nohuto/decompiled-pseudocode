/*
 * XREFs of ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x180232E50
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ??$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N00$$QEAI1@Z @ 0x1802BF89C (--$ComputePrimaryViewAnimationDurations@AEA_NAEA_NAEA_NII@TouchKeyboardExperienceTelemetryLogger.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z @ 0x18048367C (-ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z.c)
 *     ?GetForegroundAppPhysicalRect@ViewRectHelper@KeyboardHosting@@SAJPEAUtagRECT@@@Z @ 0x180483EFC (-GetForegroundAppPhysicalRect@ViewRectHelper@KeyboardHosting@@SAJPEAUtagRECT@@@Z.c)
 */

_DWORD *__fastcall KeyboardHosting::AnimationCoordinationHelper::ComputePrimaryViewAnimationDurations(
        _DWORD *a1,
        bool a2,
        char a3,
        const RECT *a4)
{
  double v8; // xmm6_8
  double v9; // xmm7_8
  float v10; // xmm1_4
  float v11; // xmm3_4
  int v12; // eax
  _DWORD *result; // rax
  char v14; // [rsp+38h] [rbp-39h] BYREF
  char v15; // [rsp+40h] [rbp-31h] BYREF
  bool v16; // [rsp+48h] [rbp-29h] BYREF
  int v17; // [rsp+50h] [rbp-21h] BYREF
  int v18; // [rsp+54h] [rbp-1Dh] BYREF
  RECT rcSrc2; // [rsp+58h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-9h] BYREF

  v16 = a2;
  v15 = a3;
  v14 = 0;
  v8 = 0.0;
  v9 = 0.0;
  rcSrc2 = 0LL;
  if ( !a3 || (unsigned int)KeyboardHosting::ViewRectHelper::GetForegroundAppPhysicalRect(&rcSrc2) )
  {
    if ( a2 )
      v12 = 2500000;
    else
      v12 = a3 != 0 ? 1670000 : 830000;
    v9 = (double)v12 - 100000.0;
  }
  else
  {
    rcDst = 0LL;
    if ( IntersectRect(&rcDst, a4, &rcSrc2) )
    {
      v10 = (float)(rcDst.bottom - rcDst.top);
      v11 = v10 / (float)(a4->bottom - a4->top);
      if ( a2 )
      {
        if ( (float)(v10 / (float)(rcSrc2.bottom - rcSrc2.top)) >= 0.6 )
        {
          v14 = 1;
        }
        else
        {
          v9 = KeyboardHosting::AnimationCoordinationHelper::ComputeCubicBezierProgress(a2, 1.0 - v11) * 2500000.0
             + 100000.0;
          v8 = 2500000.0 - v9;
        }
      }
      else
      {
        v8 = KeyboardHosting::AnimationCoordinationHelper::ComputeCubicBezierProgress(0, v11) * 1670000.0;
        v9 = 1670000.0 - v8;
      }
    }
  }
  v17 = (int)v8;
  v18 = (int)v9;
  TouchKeyboardExperienceTelemetryLogger::ComputePrimaryViewAnimationDurations<bool &,bool &,bool &,unsigned int,unsigned int>(
    (unsigned int)&v16,
    (unsigned int)&v15,
    (unsigned int)&v14,
    (unsigned int)&v18,
    (__int64)&v17);
  *a1 = (int)v8;
  result = a1;
  a1[1] = (int)v9;
  return result;
}
