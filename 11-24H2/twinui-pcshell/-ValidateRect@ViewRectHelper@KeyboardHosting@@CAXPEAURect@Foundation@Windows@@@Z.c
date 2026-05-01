/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18013D8D0
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18013D27C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  ForegroundWindow = GetForegroundWindow();
  Rect = 0LL;
  if ( ForegroundWindow )
    GetWindowRect(ForegroundWindow, &Rect);
  v3 = *(float *)a1;
  if ( *(float *)a1 != 0.0 || *((float *)a1 + 1) != 0.0 || *((float *)a1 + 2) != 0.0 || *((float *)a1 + 3) != 0.0 )
  {
    v4 = *((float *)a1 + 2);
    if ( v4 < 1.0 )
    {
      *((_DWORD *)a1 + 2) = 1065353216;
      v4 = FLOAT_1_0;
    }
    v5 = *((float *)a1 + 3);
    if ( v5 < 1.0 )
    {
      *((_DWORD *)a1 + 3) = 1065353216;
      v5 = FLOAT_1_0;
    }
    if ( Rect.left || Rect.top || Rect.right || Rect.bottom )
    {
      v6 = *((float *)a1 + 1);
      *(float *)a1 = (float)(int)v3;
      *((float *)a1 + 2) = (float)((int)(float)(v3 + v4) - (int)v3);
      *((float *)a1 + 1) = (float)(int)v6;
      *((float *)a1 + 3) = (float)((int)(float)(v6 + v5) - (int)v6);
    }
  }
}
