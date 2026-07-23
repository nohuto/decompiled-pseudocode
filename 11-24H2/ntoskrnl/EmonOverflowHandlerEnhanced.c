/*
 * XREFs of EmonOverflowHandlerEnhanced @ 0x140559E00
 * Callers:
 *     <none>
 * Callees:
 *     EmonOverflowHandlerInternalV1Enhanced @ 0x140559E3C (EmonOverflowHandlerInternalV1Enhanced.c)
 *     EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0 (EmonOverflowHandlerInternalV2Enhanced.c)
 */

__int64 __fastcall EmonOverflowHandlerEnhanced(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  v2 = KiProcessorBlock[a2];
  if ( (unsigned int)EmonVersion >= 2 )
    return EmonOverflowHandlerInternalV2Enhanced(a1, a2, v2);
  else
    return EmonOverflowHandlerInternalV1Enhanced(a1, *(_QWORD *)(v2 + 88));
}
