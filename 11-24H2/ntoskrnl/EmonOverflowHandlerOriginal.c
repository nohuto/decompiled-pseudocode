/*
 * XREFs of EmonOverflowHandlerOriginal @ 0x14055D3E0
 * Callers:
 *     <none>
 * Callees:
 *     EmonOverflowHandlerInternalV1Original @ 0x14055C658 (EmonOverflowHandlerInternalV1Original.c)
 *     EmonOverflowHandlerInternalV2Original @ 0x14055CF3C (EmonOverflowHandlerInternalV2Original.c)
 */

void __fastcall EmonOverflowHandlerOriginal(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  v4 = KiProcessorBlock[a2];
  if ( (unsigned int)EmonVersion >= 2 )
    EmonOverflowHandlerInternalV2Original(a1, a2, v4, a4);
  else
    EmonOverflowHandlerInternalV1Original(a1, *(_QWORD *)(v4 + 88));
}
