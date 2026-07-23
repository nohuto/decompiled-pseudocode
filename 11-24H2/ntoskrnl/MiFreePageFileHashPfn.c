/*
 * XREFs of MiFreePageFileHashPfn @ 0x1404A3400
 * Callers:
 *     MiFreePageFileHashPfns @ 0x140353E18 (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 */

int __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rdx
  int v3; // [rsp+30h] [rbp+8h]

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  HIWORD(v3) = HIWORD(*(_DWORD *)(v1 + 32));
  LOWORD(v3) = 0;
  *(_DWORD *)(v1 + 32) = v3;
  return MiInsertPageInFreeOrZeroedList(a1, 2LL);
}
