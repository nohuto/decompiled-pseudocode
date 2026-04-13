/*
 * XREFs of ??_E?$numpunct@D@std@@MEAAPEAXI@Z @ 0x180006D00
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x180022476 (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::numpunct<char>::`vector deleting destructor'(void **a1, char a2)
{
  *a1 = &std::numpunct<char>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
