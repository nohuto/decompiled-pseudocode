/*
 * XREFs of ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x14015DE20
 * Callers:
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x140147568 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401518A4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140151A14 (-ReferenceWdi@@YA_NXZ.c)
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x140151F64 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::AcquireExclusive(KLockHolder *this)
{
  KPushLockBase *m_Lock; // rcx

  KeEnterCriticalRegion();
  m_Lock = this->m_Lock;
  this->m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
  this->m_State = Exclusive;
}
