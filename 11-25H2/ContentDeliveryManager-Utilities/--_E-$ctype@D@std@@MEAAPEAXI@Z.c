/*
 * XREFs of ??_E?$ctype@D@std@@MEAAPEAXI@Z @ 0x180006C90
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z_0 @ 0x180022476 (--_V@YAXPEAX@Z_0.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 */

void *__fastcall std::ctype<char>::`vector deleting destructor'(void *a1, char a2)
{
  int v4; // eax

  *(_QWORD *)a1 = &std::ctype<char>::`vftable';
  v4 = *((_DWORD *)a1 + 8);
  if ( v4 <= 0 )
  {
    if ( v4 < 0 )
      operator delete[](*((void **)a1 + 3));
  }
  else
  {
    free(*((void **)a1 + 3));
  }
  free(*((void **)a1 + 5));
  *(_QWORD *)a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
