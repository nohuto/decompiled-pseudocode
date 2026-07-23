/*
 * XREFs of KseDsCompletionHookForStartDevice @ 0x1405C8520
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpStartDevice @ 0x1405C90F8 (KsepDsEventPnpStartDevice.c)
 */

__int64 __fastcall KseDsCompletionHookForStartDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventPnpStartDevice(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
