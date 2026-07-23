/*
 * XREFs of iswdigit @ 0x180122CC0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180072C30 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
