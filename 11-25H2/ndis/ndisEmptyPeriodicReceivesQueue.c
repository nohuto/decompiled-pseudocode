/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x1400866D0
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x140098C40 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14001C7D0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x140043410 (ndisDoPeriodicReceivesIndication.c)
 *     ndisTracePeriodicReceivesStart @ 0x1400974D0 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C937C (ndisTracePeriodicReceivesEnd.c)
 */

struct _KTHREAD *__fastcall ndisEmptyPeriodicReceivesQueue(struct _NDIS_FILTER_BLOCK *a1, char a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  struct _KTHREAD *result; // rax
  int RcvLinkSpeed; // ecx
  __int64 Clock; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax

  v2 = *(struct _NET_BUFFER_LIST **)&a1[2].PauseFunctions;
  result = 0LL;
  if ( v2 )
  {
    RcvLinkSpeed = a1[2].RcvLinkSpeed;
    LODWORD(a1[2].RcvLinkSpeedIndicateUp) += RcvLinkSpeed;
    *(_QWORD *)&a1[2].PauseFunctions = 0LL;
    *(_QWORD *)&a1[2].XState = 0LL;
    LODWORD(a1[2].RcvLinkSpeed) = 0;
    if ( a2 )
    {
      LODWORD(a1[2].NextRequestHandle) += RcvLinkSpeed;
      a1[2].XmitLinkSpeed = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1[2].MediaConnectState);
      ndisReturnNetBufferListsInternal(a1, v2, 0, 0LL);
    }
    else
    {
      HIDWORD(a1[2].RcvLinkSpeed) += RcvLinkSpeed;
      a1[2].XmitLinkSpeed = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1[2].MediaConnectState);
      if ( BYTE1(dword_140127110) )
      {
        ndisTracePeriodicReceivesStart(a1);
        Clock = WmiGetClock(0LL, 0LL);
        v7 = ndisDoPeriodicReceivesIndication((struct _NDIS_MINIPORT_BLOCK *)a1, v2);
        v8 = WmiGetClock(0LL, 0LL);
        ndisTracePeriodicReceivesEnd(a1, v8 - Clock, v7);
      }
      else
      {
        ndisDoPeriodicReceivesIndication((struct _NDIS_MINIPORT_BLOCK *)a1, v2);
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&a1[2].MediaConnectState);
    result = KeGetCurrentThread();
    a1[2].XmitLinkSpeed = (unsigned __int64)result;
  }
  else
  {
    *(_QWORD *)&a1[2].PauseFunctions = 0LL;
    *(_QWORD *)&a1[2].XState = 0LL;
    LODWORD(a1[2].RcvLinkSpeed) = 0;
  }
  return result;
}
