/*
 * XREFs of SymCryptSha256Init @ 0x14051C5E0
 * Callers:
 *     SymCryptSha256 @ 0x14051ADAC (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x14051D24C (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x14051D500 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140830140 (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14001F4F0;
  *(_OWORD *)(a1 + 112) = xmmword_14001F500;
}
