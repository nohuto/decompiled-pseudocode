/*
 * XREFs of KiSaveThreadIptState @ 0x1405B4F10
 * Callers:
 *     SwapContext @ 0x1406A7870 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1404BE0A4 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
