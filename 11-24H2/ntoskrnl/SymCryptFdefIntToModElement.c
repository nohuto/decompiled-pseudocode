/*
 * XREFs of SymCryptFdefIntToModElement @ 0x14053580C
 * Callers:
 *     SymCryptIntToModElement @ 0x140523ADC (SymCryptIntToModElement.c)
 * Callees:
 *     SymCryptFdefRawDivMod @ 0x14052F378 (SymCryptFdefRawDivMod.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefIntToModElement(__int64 a1, __int64 a2, void *a3, _DWORD *a4, __int64 a5)
{
  SymCryptFdefRawDivMod((void *)(a1 + 32), *(_DWORD *)(a1 + 4), (_DWORD *)(a2 + 64), 0LL, a3, a4);
  return guard_dispatch_icall_no_overrides(a2, a3, a4, a5);
}
