/*
 * XREFs of ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015FAC0
 * Callers:
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1400DC538 (ndisDmaTelemetryBucketizeTimeInUs.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E40C0 (NdisRegisterUserThreadExitCallback.c)
 *     _lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_ @ 0x140144450 (_lambda_1b37a015b038c0fb9460a3d4ca11395f_--_lambda_invoker_cdecl_.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x140147398 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x14015FAF0 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 */

KLockThisShared *__fastcall KLockThisShared::KLockThisShared(KLockThisShared *this, struct KPushLockBase *a2)
{
  this->m_State = Unlocked;
  this->m_Lock = a2;
  this->m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(this);
  return this;
}
