/*
 * XREFs of ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x14015E000
 * Callers:
 *     _lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_ @ 0x14014F110 (_lambda_1b37a015b038c0fb9460a3d4ca11395f_--_lambda_invoker_cdecl_.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x14015E140 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseShared(KLockHolder *this)
{
  ExReleasePushLockEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}
