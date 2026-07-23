/*
 * XREFs of SymCryptMd5Result @ 0x1801571F0
 * Callers:
 *     MD5Final @ 0x180118010 (MD5Final.c)
 *     ImportTablepHashCanonicalLists @ 0x180132F7C (ImportTablepHashCanonicalLists.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x180159BC8 (SymCryptHashCommonPaddingMd4Style.c)
 */

__int64 __fastcall SymCryptMd5Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style(SymCryptMd5Algorithm_default, a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipeAsm(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_180199580;
  return result;
}
