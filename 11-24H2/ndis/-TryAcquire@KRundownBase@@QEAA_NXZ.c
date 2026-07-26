/*
 * XREFs of ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x140003508
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x140146FA0 (NdisMRegisterWdiMiniportDriver.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x140147398 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 * Callees:
 *     <none>
 */

bool __fastcall KRundownBase::TryAcquire(KRundownBase *this)
{
  return ExAcquireRundownProtection(&this->m_rundown) != 0;
}
