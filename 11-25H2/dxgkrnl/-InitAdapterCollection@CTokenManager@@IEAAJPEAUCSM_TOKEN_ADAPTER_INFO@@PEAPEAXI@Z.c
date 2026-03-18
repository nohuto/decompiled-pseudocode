/*
 * XREFs of ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E750
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14000CEB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E7DC (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1400989C8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 */

__int64 __fastcall CTokenManager::InitAdapterCollection(
        CTokenManager *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  int v8; // edi

  v8 = 0;
  CTokenManager::AcquireTokenManagerLock(this);
  if ( !CAdapterCollection::UpdateCollection((CTokenManager *)((char *)this + 112), a2, a3, a4) )
  {
    *((_DWORD *)this + 22) = 0;
    v8 = CAdapterCollection::PopulateFromInfo((CTokenManager *)((char *)this + 112), a2, a3, a4);
    if ( v8 >= 0 )
      *((_DWORD *)this + 22) = a4;
  }
  CTokenManager::ReleaseTokenManagerLock(this);
  return (unsigned int)v8;
}
