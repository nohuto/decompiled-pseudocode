/*
 * XREFs of KeProfileInterruptWithSource @ 0x140492A60
 * Callers:
 *     DefaultOverflowHandler @ 0x140549D70 (DefaultOverflowHandler.c)
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x140559E3C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV1Original @ 0x14055A288 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 *     HalpTimerProfileInterrupt @ 0x14055CB10 (HalpTimerProfileInterrupt.c)
 *     Amd64OverflowHandlerInternal @ 0x140569440 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     KiProcessProfileList @ 0x140492AAC (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
