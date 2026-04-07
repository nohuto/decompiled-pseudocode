/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x1800A28D4
 * Callers:
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065E8C (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A2F50 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(__int64 a1, struct CWindowData *a2, __int64 a3, char a4, __int64 a5)
{
  struct tagRECT *MarginAdjustedWindowRect; // rax
  RECT v8; // xmm0
  __int64 v9; // r8
  _OWORD v11[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+50h] [rbp-68h]
  struct tagRECT v13; // [rsp+60h] [rbp-58h] BYREF
  RECT v14; // [rsp+70h] [rbp-48h] BYREF

  MarginAdjustedWindowRect = CAcrylicSheet::GetMarginAdjustedWindowRect(&v13, a2);
  v11[0] = *(_OWORD *)a5;
  v8 = *MarginAdjustedWindowRect;
  v12 = *(_QWORD *)(a5 + 32);
  v14 = v8;
  v11[1] = *(_OWORD *)(a5 + 16);
  return CAcrylicSheet::AnimateRect(a1, &v14, v9, a4, (__int64)v11);
}
