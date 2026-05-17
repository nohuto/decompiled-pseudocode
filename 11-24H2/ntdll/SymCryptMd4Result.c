/*
 * XREFs of SymCryptMd4Result @ 0x180161720
 * Callers:
 *     MD4Final @ 0x18015BA00 (MD4Final.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x180131590 (SymCryptWipeAsm.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x18015B808 (SymCryptHashCommonPaddingMd4Style.c)
 */

__int64 __fastcall SymCryptMd4Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style((__int64)SymCryptMd4Algorithm_default, (unsigned int *)a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipeAsm(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_18019C758;
  return result;
}
