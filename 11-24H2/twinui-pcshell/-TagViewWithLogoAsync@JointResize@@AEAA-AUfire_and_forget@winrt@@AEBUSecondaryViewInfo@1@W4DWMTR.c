/*
 * XREFs of ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x18053BF98
 * Callers:
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053C014 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     JointResize::TagViewWithLogoAsync$_InitCoro$2 @ 0x18053B7D8 (JointResize--TagViewWithLogoAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall JointResize::TagViewWithLogoAsync(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  char *v7; // rax
  int v9; // [rsp+218h] [rbp+10h] BYREF
  int v10; // [rsp+228h] [rbp+20h] BYREF

  v10 = a4;
  v7 = (char *)operator new(0x1C0uLL);
  v9 = 0;
  JointResize::TagViewWithLogoAsync__InitCoro_2(&v9, v7, a2, a3, &v10, a1);
  return a2;
}
