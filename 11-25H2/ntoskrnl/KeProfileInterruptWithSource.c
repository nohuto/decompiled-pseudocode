/*
 * XREFs of KeProfileInterruptWithSource @ 0x140498550
 * Callers:
 *     DefaultOverflowHandler @ 0x140549BC0 (DefaultOverflowHandler.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x14055990C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x140559D58 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A190 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055A63C (EmonOverflowHandlerInternalV2Original.c)
 *     HalpTimerProfileInterrupt @ 0x14055C5E0 (HalpTimerProfileInterrupt.c)
 *     Amd64OverflowHandlerInternal @ 0x140568CB0 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     KiProcessProfileList @ 0x14049859C (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
