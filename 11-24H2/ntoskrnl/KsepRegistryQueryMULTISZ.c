/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x140740C7C
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x140740CAC (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return KsepRegistryQuerySZ(a1, a2, a4, a5);
}
