/*
 * XREFs of ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x1801009C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180100974 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

__int64 __fastcall CPolicyConfig::DisconnectSessions(CPolicyConfig *this, CEndpointStoreCache *a2)
{
  CPolicyConfig::DisconnectHelper(a2);
  return 0LL;
}
