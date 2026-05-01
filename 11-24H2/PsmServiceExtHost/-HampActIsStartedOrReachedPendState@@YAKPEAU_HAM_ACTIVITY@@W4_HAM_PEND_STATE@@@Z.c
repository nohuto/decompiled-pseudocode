/*
 * XREFs of ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800575B0
 * Callers:
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180083C04 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActIsStartedOrReachedPendState(__int64 a1, unsigned __int8 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 562);
  if ( v2 == 3 )
    return 1LL;
  if ( v2 == 2 )
    return *(_BYTE *)(a1 + 563) >= a2;
  return 0LL;
}
