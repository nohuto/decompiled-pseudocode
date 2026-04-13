/*
 * XREFs of ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x18005B87C
 * Callers:
 *     ??1?$numpunct@_W@std@@MEAA@XZ @ 0x18004C3FC (--1-$numpunct@_W@std@@MEAA@XZ.c)
 *     _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800B8B3A (_std--numpunct_wchar_t_--_Init_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::numpunct<wchar_t>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
