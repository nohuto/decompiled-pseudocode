/*
 * XREFs of IopCommitConfiguration @ 0x140AA6ED4
 * Callers:
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1407348C0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PnpAllocateResources @ 0x14098DAA8 (PnpAllocateResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned int i; // ebp
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx

  v4 = *a1;
  for ( i = 0; v4 != a1; *v12 = v12 )
  {
    v7 = v4;
    v8 = v4;
    v4 = (_QWORD *)*v4;
    v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(*(v7 - 8) + 8LL), 2LL, 0LL, a4);
    v10 = v7 - 2;
    if ( v9 < 0 )
      i = v9;
    *((_WORD *)v7 + 8) = 0;
    v8[1] = v8;
    *v8 = v8;
    v10[1] = v10;
    *v10 = v10;
    v11 = v7 - 6;
    v11[1] = v11;
    *v11 = v11;
    v12 = v7 - 4;
    v12[1] = v12;
  }
  return i;
}
