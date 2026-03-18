/*
 * XREFs of ??IRedirectedRecttagWNDrcWindow@tagWND@@QEAAPEAUtagRECT@@XZ @ 0x1C01A5594
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::RedirectedRecttagWNDrcWindow::operator&(__int64 a1)
{
  return *(_QWORD *)(a1 - 88) + 88LL;
}
