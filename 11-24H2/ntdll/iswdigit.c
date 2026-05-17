/*
 * XREFs of iswdigit @ 0x180124A90
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x18005D050 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
