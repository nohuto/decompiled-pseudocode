/*
 * XREFs of ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14006D030
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140176CB0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140017B10 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140036230 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall ndisFNotifyDetach(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  KIRQL v3; // al
  _DWORD v4[4]; // [rsp+20h] [rbp-D8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v5; // [rsp+30h] [rbp-C8h] BYREF

  *(_QWORD *)&v5.Header.Type = 10748288LL;
  *(_QWORD *)&v5.NetPnPEvent.NetEvent = 15LL;
  FilterDriver = a1->FilterDriver;
  memset(&v5.NetPnPEvent.Buffer, 0, 160);
  if ( (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
     || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
     && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x1Eu)
    && !FILTER_TEST_FLAG(a1, 0x10000) )
  {
    v4[0] = 0;
    if ( ndisReferenceRefEx(&a1->PnPRef.SpinLock, 0x15u, (enum _NDIS_REFERENCE_STATUS *)v4) )
    {
      ndisFForwardNetPnPEventToFilter(a1, &v5);
      ndisDereferenceRef(&a1->PnPRef.SpinLock, 0x15u);
    }
  }
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = KeGetCurrentThread();
  FILTER_SET_FLAG(a1, 0x10000);
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v3);
}
