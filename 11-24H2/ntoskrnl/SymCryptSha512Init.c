/*
 * XREFs of SymCryptSha512Init @ 0x1405246E4
 * Callers:
 *     HashpInitHash @ 0x140830970 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha512Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = SymCryptSha512InitialState;
  *(_OWORD *)(a1 + 176) = xmmword_1400202A0;
  *(_OWORD *)(a1 + 192) = xmmword_1400202B0;
  *(_OWORD *)(a1 + 208) = xmmword_1400202C0;
  return result;
}
