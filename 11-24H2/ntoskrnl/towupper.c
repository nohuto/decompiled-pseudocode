/*
 * XREFs of towupper @ 0x1404FFC40
 * Callers:
 *     PfSnParametersVerify @ 0x1407480D4 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408441F0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
