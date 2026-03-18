/*
 * XREFs of KseHookExAllocatePoolWithTag @ 0x1405CA930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall KseHookExAllocatePoolWithTag(__int64 a1, size_t a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  void *v6; // rbx

  v5 = (void *)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v6 = v5;
  if ( v5 )
    memset_0(v5, 0, a2);
  return v6;
}
