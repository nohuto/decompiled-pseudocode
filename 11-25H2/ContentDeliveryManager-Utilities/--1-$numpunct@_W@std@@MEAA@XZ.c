/*
 * XREFs of ??1?$numpunct@_W@std@@MEAA@XZ @ 0x18004C3FC
 * Callers:
 *     ??_G?$numpunct@G@std@@MEAAPEAXI@Z @ 0x18004D9F0 (--_G-$numpunct@G@std@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x18005B87C (-_Tidy@-$numpunct@_W@std@@AEAAXXZ.c)
 */

void **__fastcall std::numpunct<wchar_t>::~numpunct<wchar_t>(_QWORD *a1)
{
  void **result; // rax

  *a1 = &std::numpunct<unsigned short>::`vftable';
  std::numpunct<wchar_t>::_Tidy();
  result = &std::_Facet_base::`vftable';
  *a1 = &std::_Facet_base::`vftable';
  return result;
}
