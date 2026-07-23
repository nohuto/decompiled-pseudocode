/*
 * XREFs of MiLockMemoryLists @ 0x1404ABAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockSlabAllocator @ 0x1404ABCD0 (MiLockSlabAllocator.c)
 *     MiWalkAllFreeZeroLists @ 0x1404ABCF8 (MiWalkAllFreeZeroLists.c)
 *     MiLockSlabRepurposedStandbyList @ 0x1406895D8 (MiLockSlabRepurposedStandbyList.c)
 */

void __fastcall MiLockMemoryLists(__int64 a1, __int64 a2)
{
  volatile LONG *v3; // rcx
  volatile LONG *v5; // rdi
  __int64 v6; // rbp
  volatile LONG *v7; // rcx
  __int64 v8; // rbp
  volatile LONG *v9; // rdi
  __int64 v10; // r14
  volatile LONG *v11; // rdi
  unsigned __int64 v12; // rdi
  _BOOL8 v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 j; // rbp
  volatile LONG *v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  volatile LONG *v22; // rdi

  v3 = (volatile LONG *)(a1 + 7072);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  MiWalkAllFreeZeroLists(a1, MiLockMemoryListsCallback, a2);
  v5 = (volatile LONG *)(a1 + 3296);
  v6 = 8LL;
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    v5 += 22;
    --v6;
  }
  while ( v6 );
  v7 = (volatile LONG *)(a1 + 4000);
  if ( a2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 4128));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 4128));
  }
  v8 = 16LL;
  v9 = (volatile LONG *)(a1 + 4256);
  v10 = 16LL;
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    v9 += 22;
    --v10;
  }
  while ( v10 );
  v11 = (volatile LONG *)(a1 + 5664);
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    v11 += 22;
    --v8;
  }
  while ( v8 );
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a2 != 0;
  v14 = v12 + 57216LL * (unsigned __int16)KeNumberNodes;
  while ( v12 < v14 )
  {
    for ( i = v12 + 15696; i < v12 + 17784; i += 232LL )
    {
      if ( (unsigned int)MiLockSlabAllocator(a1, i, v13) )
        goto LABEL_29;
    }
    v12 += 57216LL;
  }
LABEL_29:
  v16 = *(_QWORD *)(a1 + 16);
  v17 = v16 + 57216LL * (unsigned __int16)KeNumberNodes;
  while ( v16 < v17 )
  {
    for ( j = v16 + 15696; j < v16 + 17784; j += 232LL )
    {
      if ( (unsigned int)MiLockSlabRepurposedStandbyList(a1, j, v13) )
        goto LABEL_36;
    }
    v16 += 57216LL;
  }
LABEL_36:
  v19 = (volatile LONG *)(a1 + 19552);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v19);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v19);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = 0;
  if ( KeNumberNodes )
  {
    v22 = (volatile LONG *)(v20 + 15280);
    do
    {
      if ( *((_QWORD *)v22 - 1) )
      {
        if ( a2 )
          ExAcquireSpinLockExclusiveAtDpcLevel(v22);
        else
          ExReleaseSpinLockExclusiveFromDpcLevel(v22);
      }
      v22 += 14304;
      ++v21;
    }
    while ( v21 < (unsigned __int16)KeNumberNodes );
  }
}
