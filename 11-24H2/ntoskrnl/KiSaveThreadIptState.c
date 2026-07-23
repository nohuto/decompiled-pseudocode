/*
 * XREFs of KiSaveThreadIptState @ 0x1405B6310
 * Callers:
 *     SwapContext @ 0x1406B3AE0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1404B82CC (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
