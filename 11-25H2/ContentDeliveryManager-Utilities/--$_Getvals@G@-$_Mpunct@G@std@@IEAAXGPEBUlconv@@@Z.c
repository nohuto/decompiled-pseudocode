/*
 * XREFs of ??$_Getvals@G@?$_Mpunct@G@std@@IEAAXGPEBUlconv@@@Z @ 0x18000EC58
 * Callers:
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180014720 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _Mbrtowc @ 0x1800049AC (_Mbrtowc.c)
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x180049014 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 */

__int64 __fastcall std::_Mpunct<unsigned short>::_Getvals<unsigned short>(__int64 a1, __int64 a2, __int64 a3)
{
  const _Cvtvec *v3; // rsi
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rax
  __int64 result; // rax
  char v12; // [rsp+60h] [rbp+30h] BYREF
  wchar_t v13; // [rsp+70h] [rbp+40h] BYREF
  mbstate_t v14; // [rsp+78h] [rbp+48h] BYREF

  v3 = (const _Cvtvec *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 68) )
    v6 = *(char **)(a3 + 24);
  else
    v6 = *(char **)(a3 + 32);
  *(_QWORD *)(a1 + 32) = std::_Maklocstr<unsigned short>(v6);
  v7 = (char *)&word_1800E6298;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v7 = *(char **)(a3 + 64);
  *(_QWORD *)(a1 + 40) = std::_Maklocstr<unsigned short>(v7);
  v8 = "-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v8 = *(char **)(a3 + 72);
  *(_QWORD *)(a1 + 48) = std::_Maklocstr<unsigned short>(v8);
  v9 = *(char **)(a3 + 40);
  v13 = 0;
  v14._Wchar = 0;
  v12 = *v9;
  Mbrtowc(&v13, &v12, 1uLL, &v14, v3);
  *(_WORD *)(a1 + 24) = v13;
  v10 = *(char **)(a3 + 48);
  v13 = 0;
  v14._Wchar = 0;
  v12 = *v10;
  Mbrtowc(&v13, &v12, 1uLL, &v14, v3);
  result = v13;
  *(_WORD *)(a1 + 26) = v13;
  return result;
}
