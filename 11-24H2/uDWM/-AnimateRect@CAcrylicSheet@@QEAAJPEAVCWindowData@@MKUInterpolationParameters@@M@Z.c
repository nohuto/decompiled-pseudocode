/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x180067BF8
 * Callers:
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800F2C70 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180040558 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180068CA0 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(
        __int64 a1,
        struct CWindowData *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  struct tagRECT *MarginAdjustedWindowRect; // rax
  struct tagRECT v9; // xmm1
  __int64 v10; // r8
  _OWORD v12[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+50h] [rbp-58h]
  struct tagRECT v14; // [rsp+60h] [rbp-48h] BYREF
  struct tagRECT v15; // [rsp+70h] [rbp-38h] BYREF

  MarginAdjustedWindowRect = CAcrylicSheet::GetMarginAdjustedWindowRect(&v14, a2);
  v12[0] = *(_OWORD *)a5;
  v9 = *MarginAdjustedWindowRect;
  v13 = *(_QWORD *)(a5 + 32);
  v15 = v9;
  v12[1] = *(_OWORD *)(a5 + 16);
  return ((__int64 (__fastcall *)(__int64, struct tagRECT *, __int64, _QWORD, _OWORD *, int))CAcrylicSheet::AnimateRect)(
           a1,
           &v15,
           v10,
           a4,
           v12,
           a6);
}
