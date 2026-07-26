/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x14005BA20
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x14005B860 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C680 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x14003FE50 (ndisDoPeriodicReceivesIndication.c)
 *     ndisReceiveQueueingOff @ 0x14005BBC0 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x14006D2D0 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicReceivesStart @ 0x14008BD20 (ndisTracePeriodicReceivesStart.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1400C208C (ndisTracePeriodicRcvOnOff.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1400C214C (ndisTracePeriodicReceivesEnd.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  void *v3; // rsi
  void *v4; // r14
  struct _NET_BUFFER_LIST *v5; // rbx
  int v6; // eax
  __int64 Clock; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        if ( i->MediaType == NdisMedium802_3
          && i->PeriodicReceiveQueue.BoundToIP
          && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
        {
          ndisReceiveQueueingOn(i);
        }
        i->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    v3 = qword_14011B4D8;
    qword_14011B4D8 = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (void *)*((_QWORD *)v3 + 395);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 397);
        *((_QWORD *)v3 + 398) = KeGetCurrentThread();
        ndisReceiveQueueingOff(v3);
        v5 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v3 + 400);
        *((_QWORD *)v3 + 400) = 0LL;
        *((_QWORD *)v3 + 401) = 0LL;
        if ( v5 )
        {
          v6 = *((_DWORD *)v3 + 798);
          *((_DWORD *)v3 + 808) += v6;
          *((_DWORD *)v3 + 799) += v6;
          *((_DWORD *)v3 + 798) = 0;
          *((_QWORD *)v3 + 398) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 397);
          if ( BYTE1(dword_14011D060) )
          {
            ndisTracePeriodicReceivesStart(v3);
            Clock = WmiGetClock(0LL, 0LL);
            v8 = ndisDoPeriodicReceivesIndication(v3, v5);
            v9 = WmiGetClock(0LL, 0LL);
            ndisTracePeriodicReceivesEnd(v3, v9 - Clock, v8);
          }
          else
          {
            ndisDoPeriodicReceivesIndication(v3, v5);
          }
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 397);
        }
        else
        {
          *((_DWORD *)v3 + 798) = 0;
        }
        *((_QWORD *)v3 + 395) = 0LL;
        *((_QWORD *)v3 + 398) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 397);
        v3 = v4;
      }
      while ( v4 );
    }
    if ( BYTE2(dword_14011D060) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
