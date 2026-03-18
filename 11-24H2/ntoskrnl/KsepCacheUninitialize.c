/*
 * XREFs of KsepCacheUninitialize @ 0x1407406D0
 * Callers:
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx

  v4 = (_QWORD *)(a1 + 32);
  v6 = *(_QWORD **)(a1 + 32);
  while ( v6 != v4 )
  {
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
    guard_dispatch_icall_no_overrides(v7, a2, a3, a4);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
