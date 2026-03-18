/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x14087F578
 * Callers:
 *     HvHiveCleanup @ 0x14087EC98 (HvHiveCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFree @ 0x14087EC70 (CmpFree.c)
 */

void __fastcall HvpFreeHiveFreeDisplay(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v5; // rdi
  __int64 v6; // rsi
  void **v7; // rbx
  __int64 v8; // rbp
  void *v9; // rcx
  __int64 v10; // rdx

  v5 = (void **)(a1 + 328);
  v6 = 2LL;
  do
  {
    v7 = v5;
    v8 = 24LL;
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        v10 = *((unsigned int *)v7 - 4);
        if ( *(void (__fastcall **)(PVOID, unsigned int))(a1 + 32) == CmpFree )
          CmpFree(v9, v10);
        else
          guard_dispatch_icall_no_overrides(v9, v10, CmpFree, a4);
        *((_DWORD *)v7 - 2) = 0;
        *v7 = 0LL;
        *((_DWORD *)v7 - 4) = 0;
      }
      v7 += 3;
      --v8;
    }
    while ( v8 );
    v5 += 79;
    --v6;
  }
  while ( v6 );
}
