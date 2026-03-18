/*
 * XREFs of KiSaveThreadIptState @ 0x1405B8CD0
 * Callers:
 *     SwapContext @ 0x1406B2B40 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1404BD15C (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
