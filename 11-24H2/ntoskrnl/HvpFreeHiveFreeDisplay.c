/*
 * XREFs of HvpFreeHiveFreeDisplay @ 0x140883428
 * Callers:
 *     HvHiveCleanup @ 0x140882B48 (HvHiveCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 */

void __fastcall HvpFreeHiveFreeDisplay(__int64 a1)
{
  void **v2; // rdi
  __int64 v3; // rsi
  void **v4; // rbx
  __int64 v5; // rbp
  void *v6; // rcx
  __int64 v7; // rdx

  v2 = (void **)(a1 + 328);
  v3 = 2LL;
  do
  {
    v4 = v2;
    v5 = 24LL;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        v7 = *((unsigned int *)v4 - 4);
        if ( *(void (__fastcall **)(PVOID, unsigned int))(a1 + 32) == CmpFree )
          CmpFree(v6, v7);
        else
          guard_dispatch_icall_no_overrides(v6, v7);
        *((_DWORD *)v4 - 2) = 0;
        *v4 = 0LL;
        *((_DWORD *)v4 - 4) = 0;
      }
      v4 += 3;
      --v5;
    }
    while ( v5 );
    v2 += 79;
    --v3;
  }
  while ( v3 );
}
