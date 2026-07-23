/*
 * XREFs of SymCryptSha256Init @ 0x140519EB0
 * Callers:
 *     SymCryptSha256 @ 0x14051867C (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x14051AB1C (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x14051ADD0 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140830970 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14001F7B0;
  *(_OWORD *)(a1 + 112) = xmmword_14001F7C0;
}
