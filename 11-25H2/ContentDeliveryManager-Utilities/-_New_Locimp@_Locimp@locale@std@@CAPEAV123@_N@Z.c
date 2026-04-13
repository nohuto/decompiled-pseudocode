/*
 * XREFs of ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x180005538
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005328 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180066E60 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 */

struct std::locale::_Locimp *__fastcall std::locale::_Locimp::_New_Locimp(char a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v2[2] = 1;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  v2[8] = 0;
  *(_QWORD *)v2 = &std::locale::_Locimp::`vftable';
  *((_BYTE *)v2 + 36) = a1;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_BYTE *)v2 + 48) = 0;
  std::_Yarn<char>::operator=(v2 + 10, "*");
  return (struct std::locale::_Locimp *)v3;
}
