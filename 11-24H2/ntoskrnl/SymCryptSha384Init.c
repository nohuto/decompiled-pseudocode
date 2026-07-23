/*
 * XREFs of SymCryptSha384Init @ 0x140523054
 * Callers:
 *     SymCryptSha384Result @ 0x1405230A0 (SymCryptSha384Result.c)
 *     HashpInitHash @ 0x140830970 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha384Init(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = SymCryptSha384InitialState;
  *(_OWORD *)(a1 + 176) = xmmword_140020260;
  *(_OWORD *)(a1 + 192) = xmmword_140020270;
  *(_OWORD *)(a1 + 208) = xmmword_140020280;
  return result;
}
