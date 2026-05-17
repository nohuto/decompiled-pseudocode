/*
 * XREFs of SymCryptMd4Init @ 0x180161700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMd4Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_18019C758;
  return result;
}
