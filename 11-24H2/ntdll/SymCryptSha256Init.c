/*
 * XREFs of SymCryptSha256Init @ 0x18015999C
 * Callers:
 *     SymCryptSha256 @ 0x180158618 (SymCryptSha256.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1801995A8;
  *(_OWORD *)(a1 + 112) = xmmword_1801995B8;
}
