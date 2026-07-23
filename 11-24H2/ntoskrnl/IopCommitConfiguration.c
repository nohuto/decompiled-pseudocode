/*
 * XREFs of IopCommitConfiguration @ 0x140AA1FD4
 * Callers:
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // ebp
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  v1 = *a1;
  for ( i = 0; v1 != a1; *v9 = v9 )
  {
    v4 = v1;
    v5 = v1;
    v1 = (_QWORD *)*v1;
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(v4 - 8) + 8LL), 2LL);
    v7 = v4 - 2;
    if ( v6 < 0 )
      i = v6;
    *((_WORD *)v4 + 8) = 0;
    v5[1] = v5;
    *v5 = v5;
    v7[1] = v7;
    *v7 = v7;
    v8 = v4 - 6;
    v8[1] = v8;
    *v8 = v8;
    v9 = v4 - 4;
    v9[1] = v9;
  }
  return i;
}
