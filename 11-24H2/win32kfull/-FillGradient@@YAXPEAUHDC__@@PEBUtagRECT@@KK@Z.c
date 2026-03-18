/*
 * XREFs of ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x14007D0F8
 * Callers:
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x14007D008 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 * Callees:
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall FillGradient(HDC a1, const struct tagRECT *a2, int a3, int a4)
{
  __int64 UserSessionState; // rax
  _TRIVERTEX v6; // [rsp+30h] [rbp-58h] BYREF
  LONG right; // [rsp+40h] [rbp-48h]
  LONG bottom; // [rsp+44h] [rbp-44h]
  __int16 v9; // [rsp+48h] [rbp-40h]
  __int16 v10; // [rsp+4Ah] [rbp-3Eh]
  __int16 v11; // [rsp+4Ch] [rbp-3Ch]

  v6.Red = (unsigned __int8)a3 << 8;
  v6.Green = a3 & 0xFF00;
  v6.Blue = BYTE2(a3) << 8;
  v9 = (unsigned __int8)a4 << 8;
  v10 = a4 & 0xFF00;
  v11 = BYTE2(a4) << 8;
  v6.x = a2->left;
  v6.y = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  UserSessionState = W32GetUserSessionState(65280LL, a2);
  GreGradientFill(a1, &v6, 2u, (void *)(UserSessionState + 57044), 1u, 0);
}
