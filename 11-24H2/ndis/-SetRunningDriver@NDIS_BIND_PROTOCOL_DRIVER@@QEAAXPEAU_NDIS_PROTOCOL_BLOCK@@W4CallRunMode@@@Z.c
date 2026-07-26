/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x14015F110
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14004C300 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisDeregisterProtocol @ 0x140172660 (NdisDeregisterProtocol.c)
 * Callees:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015F1B0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(
        NDIS_BIND_PROTOCOL_DRIVER *this,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        enum CallRunMode a3)
{
  KLockThisExclusive v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    KLockThisExclusive::KLockThisExclusive(&v6, (struct KPushLockBase *)(qword_14011D080 + 16));
    this->RunningDriver = a2;
    this->NeedsBindCompleteEvent = 1;
    KLockHolder::~KLockHolder(&v6);
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, a2 != 0LL, a3);
  if ( !a2 )
  {
    KLockThisExclusive::KLockThisExclusive(&v6, (struct KPushLockBase *)(qword_14011D080 + 16));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v6);
  }
}
