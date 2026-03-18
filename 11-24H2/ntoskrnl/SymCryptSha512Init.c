/*
 * XREFs of SymCryptSha512Init @ 0x140526DCC
 * Callers:
 *     HashpInitHash @ 0x140830140 (HashpInitHash.c)
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
  *(_OWORD *)(a1 + 176) = xmmword_14001FF20;
  *(_OWORD *)(a1 + 192) = xmmword_14001FF30;
  *(_OWORD *)(a1 + 208) = xmmword_14001FF40;
  return result;
}
