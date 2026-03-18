/*
 * XREFs of MiFreePageFileHashPfn @ 0x1404A8010
 * Callers:
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiFreePageFileHashPfns @ 0x1403793FC (MiFreePageFileHashPfns.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiFreePageFileHashPfn(ULONG_PTR a1)
{
  __int64 v1; // rdx
  int v2; // [rsp+30h] [rbp+8h]

  v1 = 48 * a1 - 0x220000000000LL;
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  HIWORD(v2) = HIWORD(*(_DWORD *)(v1 + 32));
  LOWORD(v2) = 0;
  *(_DWORD *)(v1 + 32) = v2;
  MiInsertPageInFreeOrZeroedList(a1, 2);
}
