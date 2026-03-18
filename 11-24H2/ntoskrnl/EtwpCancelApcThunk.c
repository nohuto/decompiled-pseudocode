/*
 * XREFs of EtwpCancelApcThunk @ 0x1406509D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x140441FD8 (EtwpFinalizePendingApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpCancelApcThunk(__int64 a1)
{
  unsigned int **v2; // rbx

  v2 = *(unsigned int ***)(a1 + 56);
  guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(a1 + 8), v2, *(_QWORD *)(a1 + 64));
  EtwpFinalizePendingApc(v2, (struct _SLIST_ENTRY *)a1);
}
