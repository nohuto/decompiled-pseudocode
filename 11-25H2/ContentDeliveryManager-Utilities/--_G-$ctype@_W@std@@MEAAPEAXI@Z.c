/*
 * XREFs of ??_G?$ctype@_W@std@@MEAAPEAXI@Z @ 0x18004D970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ctype@_W@std@@MEAA@XZ @ 0x18004C384 (--1-$ctype@_W@std@@MEAA@XZ.c)
 */

void *__fastcall std::ctype<wchar_t>::`scalar deleting destructor'(void *a1, char a2)
{
  std::ctype<wchar_t>::~ctype<wchar_t>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
