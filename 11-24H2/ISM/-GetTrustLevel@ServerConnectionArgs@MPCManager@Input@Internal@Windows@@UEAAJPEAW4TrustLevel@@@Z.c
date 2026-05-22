/*
 * XREFs of ?GetTrustLevel@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800F5760
 * Callers:
 *     ?GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801630C0 (-GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@MPCManagerClient@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1801630D0 (-GetTrustLevel@MPCManagerClient@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@MPCManagerClientFactory@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1801630E0 (-GetTrustLevel@MPCManagerClientFactory@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
