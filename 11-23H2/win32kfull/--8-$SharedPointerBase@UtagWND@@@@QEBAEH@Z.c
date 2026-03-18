/*
 * XREFs of ??8?$SharedPointerBase@UtagWND@@@@QEBAEH@Z @ 0x1C01389A0
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<tagWND>::operator==(_QWORD *a1)
{
  return *a1 == 0LL;
}
