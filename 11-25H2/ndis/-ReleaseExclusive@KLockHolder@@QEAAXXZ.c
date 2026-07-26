/*
 * XREFs of ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0
 * Callers:
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x14014474C (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x140147568 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x14014839C (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1401485A0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x140149790 (-NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014A5F4 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x14014B5E4 (-ndisNdkPcwMiniportCleanup@@YAXPEAX@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401518A4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140151A14 (-ReferenceWdi@@YA_NXZ.c)
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x140151E70 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x140151F64 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x14015DB60 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseExclusive(KLockHolder *this)
{
  ExReleasePushLockExclusiveEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}
