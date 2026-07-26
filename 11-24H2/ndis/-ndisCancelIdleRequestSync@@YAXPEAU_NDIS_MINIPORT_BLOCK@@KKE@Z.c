/*
 * XREFs of ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140069790
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140039950 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140039B90 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B770 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140082890 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400866C0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 * Callees:
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140069880 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401528A0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisCancelIdleRequestSync(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned int a3, char a4)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  KIRQL v10; // dl

  SelectiveSuspend = a1->SelectiveSuspend;
  ArmedWatchdog = ndisAllocateArmedWatchdog(a1, 0x26u, a1->DriverHandle->CancelIdleNotificationHandler, 0x2710u, 0LL);
  ndisCancelIdleRequest(a1, a2, a3);
  ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, (struct _KEVENT *)((char *)SelectiveSuspend + 200));
  if ( !a4 )
  {
    if ( ArmedWatchdog == (struct NDISWATCHDOG__ *)-1LL )
      return;
    goto LABEL_3;
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x410) == 0x10 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
    ndisWaitForKernelObject((char *)SelectiveSuspend + 248);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
  }
  if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
LABEL_3:
    ndisFreeWatchdog(ArmedWatchdog);
}
