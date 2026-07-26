/*
 * XREFs of NdisMCancelTimer @ 0x1400D5400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

void __stdcall NdisMCancelTimer(PNDIS_MINIPORT_TIMER Timer, PBOOLEAN TimerCancelled)
{
  PBOOLEAN v3; // rdi
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  BOOLEAN v5; // al
  _NDIS_MINIPORT_BLOCK *v6; // r8
  KIRQL v7; // r8
  $CC75B1CAB5130FB77AA71716FE1AF93E *i; // rcx
  struct _NDIS_MINIPORT_TIMER *TimerQueue; // rdx

  v3 = TimerCancelled;
  Miniport = Timer->Miniport;
  if ( (Miniport->DriverVerifyFlags & 8) != 0 )
  {
    *TimerCancelled = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(TimerCancelled) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)TimerCancelled,
        12,
        11,
        (struct _GUID *)&WPP_a2b6dbcfb567359ff6487843a1f14dac_Traceguids,
        (char)Miniport,
        (char)Timer);
    }
    v5 = KeCancelTimer(&Timer->Timer);
    *v3 = v5;
    v6 = Timer->Miniport;
    if ( (v6->DriverHandle->Flags & 2) != 0 && v5 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&v6->TimerQueueLock);
      for ( i = &Timer->Miniport->560; ; i = ($CC75B1CAB5130FB77AA71716FE1AF93E *)&TimerQueue->NextTimer )
      {
        TimerQueue = i->TimerQueue;
        if ( !i->TimerQueue )
          break;
        if ( TimerQueue == Timer )
        {
          i->TimerQueue = Timer->NextTimer;
          break;
        }
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
}
