/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x140523FE4
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x14053702C (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x1405376A8 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}
