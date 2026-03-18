/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x1407CB028
 * Callers:
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmpFreezeHive @ 0x140A9F674 (CmpFreezeHive.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  void *Pool2; // rsi
  unsigned int v6; // eax
  const void **v7; // rdi
  __int64 v8; // rax

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = *(_DWORD *)(a1 + 2920);
  v7 = (const void **)(a1 + 2928);
  if ( v6 )
  {
    memmove(Pool2, *v7, 8LL * v6);
    ExFreePoolWithTag((PVOID)*v7, 0);
  }
  v8 = *(unsigned int *)(a1 + 2920);
  *v7 = Pool2;
  *((_QWORD *)Pool2 + v8) = a2;
  ++*(_DWORD *)(a1 + 2920);
  PsReferenceSiloContext(a2);
  return 0LL;
}
