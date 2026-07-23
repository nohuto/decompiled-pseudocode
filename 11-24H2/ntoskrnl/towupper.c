/*
 * XREFs of towupper @ 0x1404FD500
 * Callers:
 *     PfSnParametersVerify @ 0x1407463C4 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
