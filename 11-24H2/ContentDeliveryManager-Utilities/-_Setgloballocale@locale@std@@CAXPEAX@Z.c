/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800055C0
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005338 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18000D020 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(__int64 a1)
{
  if ( !byte_18017A4B8 )
  {
    byte_18017A4B8 = 1;
    _Atexit(tidy_global);
  }
  qword_18017A478 = a1;
}
