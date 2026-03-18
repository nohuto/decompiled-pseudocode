/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x1407732E8
 * Callers:
 *     PspInitializeSiloStructures @ 0x140C359B4 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
