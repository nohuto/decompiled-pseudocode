/*
 * XREFs of SymCryptMd5Result @ 0x140528B80
 * Callers:
 *     HashpFinalizeHash @ 0x14083005C (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x14051DC34 (SymCryptWipe.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14052EA38 (SymCryptHashCommonPaddingMd4Style.c)
 */

__int64 __fastcall SymCryptMd5Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style(SymCryptMd5Algorithm_default, a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipe(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14001FF68;
  return result;
}
