/*
 * XREFs of EmonOverflowHandlerOriginal @ 0x14055B010
 * Callers:
 *     <none>
 * Callees:
 *     EmonOverflowHandlerInternalV1Original @ 0x14055A288 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055AB6C (EmonOverflowHandlerInternalV2Original.c)
 */

void __fastcall EmonOverflowHandlerOriginal(__int64 a1, __int64 a2)
{
  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  if ( (unsigned int)EmonVersion >= 2 )
    EmonOverflowHandlerInternalV2Original(a1, a2);
  else
    EmonOverflowHandlerInternalV1Original(a1, *(_QWORD *)(KiProcessorBlock[a2] + 88));
}
