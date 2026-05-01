/*
 * XREFs of GetWorkAreaRect @ 0x180537300
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180052F2C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

_OWORD *__fastcall GetWorkAreaRect(_OWORD *a1, __int64 a2)
{
  HMONITOR v4; // rcx
  int v5; // r8d
  __int128 v6; // xmm0
  _OWORD *result; // rax
  float v8[4]; // [rsp+20h] [rbp-50h] BYREF
  float v9[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF

  memset(&mi, 0, sizeof(mi));
  v4 = *(HMONITOR *)a2;
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v4, &mi) )
  {
    v5 = *(_DWORD *)(a2 + 40);
    v9[0] = (float)mi.rcWork.left;
    v9[1] = (float)mi.rcWork.top;
    v9[2] = (float)(mi.rcWork.right - mi.rcWork.left);
    v9[3] = (float)(mi.rcWork.bottom - mi.rcWork.top);
    v6 = *(_OWORD *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v8, v9, v5);
  }
  else
  {
    v6 = *(_OWORD *)(a2 + 8);
  }
  result = a1;
  *a1 = v6;
  return result;
}
