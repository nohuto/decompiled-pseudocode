/*
 * XREFs of ZwConnectPort @ 0x1406A7890
 * Callers:
 *     DifZwConnectPortWrapper @ 0x14063D260 (DifZwConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
