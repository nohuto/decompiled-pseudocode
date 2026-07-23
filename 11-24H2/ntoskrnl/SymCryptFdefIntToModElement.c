/*
 * XREFs of SymCryptFdefIntToModElement @ 0x14052FCAC
 * Callers:
 *     SymCryptIntToModElement @ 0x1405213F4 (SymCryptIntToModElement.c)
 * Callees:
 *     SymCryptFdefRawDivMod @ 0x140529820 (SymCryptFdefRawDivMod.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefIntToModElement(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  SymCryptFdefRawDivMod((void *)(a1 + 32), *(_DWORD *)(a1 + 4), (_DWORD *)(a2 + 64), 0LL, a3, a4);
  return guard_dispatch_icall_no_overrides(a2, a3);
}
