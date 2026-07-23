/*
 * XREFs of EtwpCancelApcThunk @ 0x1406449C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x14030CD94 (EtwpFinalizePendingApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpCancelApcThunk(__int64 a1)
{
  unsigned int **v2; // rbx

  v2 = *(unsigned int ***)(a1 + 56);
  guard_dispatch_icall_no_overrides(v2);
  EtwpFinalizePendingApc(v2, (_SLIST_ENTRY *)a1);
}
