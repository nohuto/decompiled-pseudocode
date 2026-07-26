/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160D20 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14003EE40 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140056200 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140061D50 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisMPauseComplete @ 0x14006C4B0 (NdisMPauseComplete.c)
 *     ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1400901D0 (-ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400A97F8 (Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x14015E750 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x14015F5A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x1401712D0 (-ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned int v2; // ebp
  int v4; // edx
  KIRQL v5; // al
  unsigned __int64 *p_Lock; // rcx
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  bool v10; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r8
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *v12; // rdx
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  int v14; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS v16; // [rsp+58h] [rbp-40h] BYREF

  v16.Header.Type = 0;
  *(_QWORD *)&v16.Header.Revision = 0LL;
  v2 = a2;
  memset(&Event, 0, sizeof(Event));
  *(_WORD *)((char *)&v16.PauseReason + 1) = 0;
  HIBYTE(v16.PauseReason) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      10,
      (struct _GUID *)&WPP_ca328aa65f0632792fbc319e37c63b98_Traceguids,
      (char)a1);
  }
  if ( (unsigned __int8)ndisReferenceMiniportByHandle(a1, 0, 0x1Au) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    p_Lock = &a1->Lock;
    v7 = a1->State == NdisMiniportRunning;
    a1->MiniportThread = 0LL;
    if ( v7 )
    {
      a1->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v5);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          v9,
          0xBu,
          (struct _GUID *)&WPP_ca328aa65f0632792fbc319e37c63b98_Traceguids,
          v2,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v16.Header = (_NDIS_OBJECT_HEADER)786816;
      v16.PauseReason = v2;
      if ( (unsigned int)Feature_SSDeadlock_Fix__private_IsEnabledDeviceUsageNoInline() && (a1->Flags & 0x80u) != 0 )
      {
        ndisSetBusyAsync((__int64)a1, 1, 0x22u, 0LL, 0);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisSetBusySync(a1, 0x22u, 0);
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v10 )
        PauseHandler = 0LL;
      else
        PauseHandler = a1->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ArmedWatchdog = ndisAllocateArmedWatchdog(a1, 0x21u, PauseHandler, ndisWatchdogPnPTimeout, 0LL);
      if ( a1->MajorNdisVersion < 6u )
        v14 = ndisLWM5PauseMiniport(a1, v12);
      else
        v14 = ndisMInvokePause(a1, &v16);
      if ( v14 == 259 )
        ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, &Event);
      else
        NdisMPauseComplete(a1);
      if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog(ArmedWatchdog);
      ndisLogMiniportEvent(a1, NdisMEvent_MiniportPaused);
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 34);
      a1->State = NdisMiniportPaused;
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v5);
    }
    ndisDereferenceMiniport(a1, 0x1Au);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      12,
      (struct _GUID *)&WPP_ca328aa65f0632792fbc319e37c63b98_Traceguids,
      (char)a1);
  }
}
