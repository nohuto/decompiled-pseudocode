/*
 * XREFs of SymCryptDivisorCreate @ 0x140520FB8
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x14053487C (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
