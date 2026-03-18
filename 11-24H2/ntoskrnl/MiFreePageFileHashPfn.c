/*
 * XREFs of MiFreePageFileHashPfn @ 0x1404A8FE0
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1402D2BA0 (MiFreePageFileHashPfns.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
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
