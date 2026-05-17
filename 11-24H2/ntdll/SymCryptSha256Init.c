/*
 * XREFs of SymCryptSha256Init @ 0x18015B5DC
 * Callers:
 *     SymCryptSha256 @ 0x18015A258 (SymCryptSha256.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_18019A478;
  *(_OWORD *)(a1 + 112) = xmmword_18019A488;
}
