/*
 * XREFs of ??_G?$numpunct@G@std@@MEAAPEAXI@Z @ 0x18004DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$numpunct@_W@std@@MEAA@XZ @ 0x18004C5FC (--1-$numpunct@_W@std@@MEAA@XZ.c)
 */

_QWORD *__fastcall std::numpunct<unsigned short>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  std::numpunct<wchar_t>::~numpunct<wchar_t>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
