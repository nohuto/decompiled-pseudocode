/*
 * XREFs of SymCryptDivisorCreate @ 0x14052373C
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x140521B70 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140529024 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x14053702C (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
