/*
 * XREFs of ZwPulseEvent @ 0x1406A8D10
 * Callers:
 *     DifZwPulseEventWrapper @ 0x140643C80 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPulseEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
