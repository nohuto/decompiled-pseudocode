/*
 * XREFs of ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140089250
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x14000E770 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140057060 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __fastcall ndisFNotifyDetach(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  KIRQL v3; // al
  KIRQL v4; // di
  _DWORD v5[4]; // [rsp+20h] [rbp-D8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v6; // [rsp+30h] [rbp-C8h] BYREF

  *(_QWORD *)&v6.Header.Type = 10748288LL;
  *(_QWORD *)&v6.NetPnPEvent.NetEvent = 15LL;
  FilterDriver = a1->FilterDriver;
  memset(&v6.NetPnPEvent.Buffer, 0, 160);
  if ( (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
     || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
     && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x1Eu)
    && !FILTER_TEST_FLAG(a1, 0x10000) )
  {
    v5[0] = 0;
    if ( ndisReferenceRefEx(&a1->PnPRef.SpinLock, 0x15u, (enum _NDIS_REFERENCE_STATUS *)v5) )
    {
      ndisFForwardNetPnPEventToFilter(a1, &v6);
      ndisDereferenceRef(&a1->PnPRef.SpinLock, 0x15u);
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  v4 = v3;
  FILTER_SET_FLAG(a1, 0x10000);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
