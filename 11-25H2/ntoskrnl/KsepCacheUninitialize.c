/*
 * XREFs of KsepCacheUninitialize @ 0x1407346B0
 * Callers:
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A64EC (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx

  v1 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 32);
  while ( v3 != v1 )
  {
    v4 = v3 - 3;
    v3 = (_QWORD *)*v3;
    guard_dispatch_icall_no_overrides(v4);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
