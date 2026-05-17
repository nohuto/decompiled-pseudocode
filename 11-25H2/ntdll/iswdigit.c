/*
 * XREFs of iswdigit @ 0x180126570
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180018CB0 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
