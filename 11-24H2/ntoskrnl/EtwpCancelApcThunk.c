/*
 * XREFs of EtwpCancelApcThunk @ 0x14064EFB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x140438BA8 (EtwpFinalizePendingApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpCancelApcThunk(__int64 a1)
{
  unsigned int **v2; // rbx

  v2 = *(unsigned int ***)(a1 + 56);
  guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(a1 + 8));
  EtwpFinalizePendingApc(v2, (_SLIST_ENTRY *)a1);
}
