/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x140143584
 * Callers:
 *     NdisFDeregisterFilterDriver @ 0x14009ABF0 (NdisFDeregisterFilterDriver.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015F1B0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::SetRunningDriver(
        NDIS_BIND_FILTER_DRIVER *this,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        enum CallRunMode a3)
{
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_14011D080 + 16));
    this->RunningDriver = a2;
    KLockHolder::~KLockHolder(&v5);
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, a2 != 0LL, RunSynchronous);
  if ( !a2 )
  {
    KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_14011D080 + 16));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
