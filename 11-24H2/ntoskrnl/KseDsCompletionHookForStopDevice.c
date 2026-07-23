/*
 * XREFs of KseDsCompletionHookForStopDevice @ 0x1405C8550
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpStopDevice @ 0x1405C91DC (KsepDsEventPnpStopDevice.c)
 */

__int64 __fastcall KseDsCompletionHookForStopDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventPnpStopDevice(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
