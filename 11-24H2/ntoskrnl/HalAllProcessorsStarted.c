/*
 * XREFs of HalAllProcessorsStarted @ 0x140C0D6B0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140B4B718 (HalpInitSystemHelper.c)
 */

bool __fastcall HalAllProcessorsStarted(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (int)HalpInitSystemHelper(0x15u, 22, 0LL, a4) >= 0;
}
