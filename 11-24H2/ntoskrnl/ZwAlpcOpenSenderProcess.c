/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x1406A7530
 * Callers:
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
