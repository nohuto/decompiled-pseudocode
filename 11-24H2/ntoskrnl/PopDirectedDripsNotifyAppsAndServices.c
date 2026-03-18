/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x14074C6B4
 * Callers:
 *     PopDirectedDripsEngage @ 0x14048CC5C (PopDirectedDripsEngage.c)
 *     PopPowerAggregatorDisengageDirectedDrips @ 0x1406F668C (PopPowerAggregatorDisengageDirectedDrips.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14074CA54 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x140755FEC (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 *     PopDispatchStateCallout @ 0x1409B9D64 (PopDispatchStateCallout.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     PoBlockConsoleSwitch @ 0x140AB44F8 (PoBlockConsoleSwitch.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  _InterlockedOr((volatile signed __int32 *)a1, 0);
  v6 = MEMORY[0xFFFFF78000000008];
  if ( a3 )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    a2[17] = *a2;
    a2[15] = 2;
    a2[16] = 5;
    a2[19] = 21;
    v7 = PoBlockConsoleSwitch(a2 + 10);
    LOBYTE(v8) = 1;
    a2[8] = v7;
    LOBYTE(v9) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v9, v8);
    LOBYTE(v10) = 1;
    PopDirectedDripsSendSuspendResumeNotification(0LL, v10);
    _InterlockedOr((volatile signed __int32 *)a1, 8u);
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    PopDirectedDripsSendSuspendResumeNotification(0LL, 0LL);
    LOBYTE(v11) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v11, 0LL);
    v14 = a2[8];
    a2[18] = 7;
    PopDispatchStateCallout(a2 + 10, &v14);
    MmUnlockPagableImageSection(ExPageLockHandle);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFF7);
  }
  v12 = MEMORY[0xFFFFF78000000008] - v6;
  LOBYTE(v12) = a3;
  return PopDiagTraceDirectedDripsNotifyAppsAndServices(
           v12,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL);
}
