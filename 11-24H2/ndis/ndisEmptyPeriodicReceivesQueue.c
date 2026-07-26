/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x14006AA70
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x14008D3A0 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400185E0 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ndisTracePeriodicReceivesStart @ 0x14008BD20 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C214C (ndisTracePeriodicReceivesEnd.c)
 */

struct _KTHREAD *__fastcall ndisEmptyPeriodicReceivesQueue(_QWORD *a1, char a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  struct _KTHREAD *result; // rax
  int v5; // ecx
  __int64 Clock; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax

  v2 = (struct _NET_BUFFER_LIST *)a1[400];
  result = 0LL;
  if ( v2 )
  {
    v5 = *((_DWORD *)a1 + 798);
    *((_DWORD *)a1 + 808) += v5;
    a1[400] = 0LL;
    a1[401] = 0LL;
    *((_DWORD *)a1 + 798) = 0;
    if ( a2 )
    {
      *((_DWORD *)a1 + 812) += v5;
      a1[398] = 0LL;
      KeReleaseSpinLockFromDpcLevel(a1 + 397);
      ndisReturnNetBufferListsInternal((struct _NDIS_FILTER_BLOCK *)a1, v2, 0, 0LL);
    }
    else
    {
      *((_DWORD *)a1 + 799) += v5;
      a1[398] = 0LL;
      KeReleaseSpinLockFromDpcLevel(a1 + 397);
      if ( BYTE1(dword_14011D060) )
      {
        ndisTracePeriodicReceivesStart(a1);
        Clock = WmiGetClock(0LL, 0LL);
        v7 = ndisDoPeriodicReceivesIndication(a1, v2);
        v8 = WmiGetClock(0LL, 0LL);
        ndisTracePeriodicReceivesEnd(a1, v8 - Clock, v7);
      }
      else
      {
        ndisDoPeriodicReceivesIndication(a1, v2);
      }
    }
    KeAcquireSpinLockAtDpcLevel(a1 + 397);
    result = KeGetCurrentThread();
    a1[398] = result;
  }
  else
  {
    a1[400] = 0LL;
    a1[401] = 0LL;
    *((_DWORD *)a1 + 798) = 0;
  }
  return result;
}
