/*
 * XREFs of KsepCacheUninitialize @ 0x14073E600
 * Callers:
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx

  v2 = (_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  while ( v4 != v2 )
  {
    v5 = v4 - 3;
    v4 = (_QWORD *)*v4;
    guard_dispatch_icall_no_overrides(v5, a2);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
