/*
 * XREFs of EditionTouchResizeAction @ 0x1C01F1920
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C026C91C (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

__int64 __fastcall EditionTouchResizeAction(__int64 a1, __int64 a2)
{
  int v2; // edi
  void *v3; // rax

  v2 = a2;
  v3 = (void *)ReferenceDwmApiPort(a1, a2);
  return DwmAsyncNotifyIsInMoveSizeChange(v3, v2);
}
