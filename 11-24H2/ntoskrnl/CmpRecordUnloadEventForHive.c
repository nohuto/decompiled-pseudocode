/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x1407DAD3C
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmpFreezeHive @ 0x140AA0194 (CmpFreezeHive.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  void *Pool2; // rsi
  unsigned int v6; // eax
  const void **v7; // rdi
  __int64 v8; // rax

  Pool2 = (void *)ExAllocatePool2(0x100uLL, 8LL * (unsigned int)(*(_DWORD *)(a1 + 2920) + 1), 0x76456D43u);
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
