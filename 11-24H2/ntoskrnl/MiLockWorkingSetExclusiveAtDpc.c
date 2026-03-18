/*
 * XREFs of MiLockWorkingSetExclusiveAtDpc @ 0x1402E39BC
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MmStealTopLevelPage @ 0x1403116F0 (MmStealTopLevelPage.c)
 *     MiMapWithLargePages @ 0x1403A7068 (MiMapWithLargePages.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x14066D068 (MiFreedUnusedPfnPagesDpc.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiLockWorkingSetExclusiveAtDpc(__int64 a1)
{
  volatile LONG **v1; // rbx
  volatile LONG *v2; // rbx
  volatile LONG *v3; // rbx
  __int64 v4; // rdi

  v1 = (volatile LONG **)&unk_140E38740;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v1 = (volatile LONG **)(a1 + 192);
  v2 = *v1;
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  v3 = v2 + 16;
  v4 = 3LL;
  do
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    v3 += 16;
    --v4;
  }
  while ( v4 );
}
