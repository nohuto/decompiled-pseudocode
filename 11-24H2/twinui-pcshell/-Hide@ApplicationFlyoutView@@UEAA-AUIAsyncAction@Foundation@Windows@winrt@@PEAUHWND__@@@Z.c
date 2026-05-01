/*
 * XREFs of ?Hide@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1805FB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ApplicationFlyoutView::Hide$_InitCoro$2 @ 0x1805FAFFC (ApplicationFlyoutView--Hide$_InitCoro$2.c)
 */

__int64 *__fastcall ApplicationFlyoutView::Hide(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+128h] [rbp+10h] BYREF

  v6 = operator new(0xE0uLL);
  v8 = 0;
  ApplicationFlyoutView::Hide__InitCoro_2(&v8, (__int64)v6 + 112, a2, a3, a1);
  return a2;
}
