/*
 * XREFs of ?_Init@?$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18005AD7C
 * Callers:
 *     ??0?$ctype@G@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x18004AC78 (--0-$ctype@G@std@@QEAA@AEBV_Locinfo@1@_K@Z.c)
 * Callees:
 *     _Getctype @ 0x180005CC4 (_Getctype.c)
 *     _Getcvt @ 0x180005EF8 (_Getcvt.c)
 */

_Cvtvec *__fastcall std::ctype<wchar_t>::_Init(__int64 a1)
{
  _Cvtvec *result; // rax
  _Cvtvec v3; // [rsp+20h] [rbp-38h] BYREF

  *(_Ctypevec *)(a1 + 16) = *Getctype((_Ctypevec *)&v3);
  result = Getcvt(&v3);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&result->_Page;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&result->_Isleadbyte[4];
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&result->_Isleadbyte[20];
  return result;
}
