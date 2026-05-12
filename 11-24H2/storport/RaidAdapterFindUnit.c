/*
 * XREFs of RaidAdapterFindUnit @ 0x14001BA70
 * Callers:
 *     RaidAdapterPauseUnit @ 0x14000125C (RaidAdapterPauseUnit.c)
 *     RaidAdapterResumeUnit @ 0x14000189C (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x140014A50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x140014F00 (StorPortResumeDevice.c)
 *     StorPortGetLogicalUnit @ 0x14001BCB0 (StorPortGetLogicalUnit.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorpTelemetryMiniportEventWStr @ 0x140035200 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryMiniportEvent @ 0x140039E04 (StorpTelemetryMiniportEvent.c)
 *     StorPortDeviceBusy @ 0x14003DC40 (StorPortDeviceBusy.c)
 *     StorEtwMiniportLogError @ 0x140042658 (StorEtwMiniportLogError.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaidAdapterDeviceBusy @ 0x140059C04 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140059CF8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x14006239C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x140064FD0 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073920 (StorPortDeviceReady.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x14008A5E8 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x14009FB50 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwMiniportLogByteStream @ 0x1400A8AB0 (StorEtwMiniportLogByteStream.c)
 *     StorEtwRaidMiniportEvent @ 0x1400A9F58 (StorEtwRaidMiniportEvent.c)
 *     RaidAdapterPassThrough @ 0x1401B53BC (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140017930 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r14
  __int64 *v6; // rbp
  __int64 v7; // rsi
  __int64 *j; // rdi
  KIRQL v10; // bp
  __int64 (__fastcall *v11)(_QWORD *); // r15
  __int64 (__fastcall *v12)(__int64, unsigned __int64); // r12
  unsigned __int64 v13; // rsi
  _QWORD **v14; // rbx
  _QWORD *i; // r14
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // r14
  __int64 v19; // rsi
  unsigned int v20; // ebx
  PKINTERRUPT *v21; // rdi
  struct _KINTERRUPT *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(a1 + 856) )
    {
      return RaidAdapterFindUnitAtDirql(a1, a2);
    }
    else
    {
      v10 = RaidAdapterAcquireInterruptLock(a1);
      v11 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
      v12 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
      v13 = BYTE2(a2) | (unsigned __int64)((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8);
      v14 = (_QWORD **)(*(_QWORD *)(a1 + 184)
                      + 16LL
                      * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v13) % *(_DWORD *)(a1 + 172)));
      for ( i = *v14; i != v14; i = (_QWORD *)*i )
      {
        v16 = v11(i);
        v17 = v12(v16, v13);
        if ( !v17 )
        {
          v18 = i - 10;
          goto LABEL_13;
        }
        if ( v17 < 0 )
          break;
      }
      v18 = 0LL;
LABEL_13:
      if ( *(_BYTE *)(a1 + 4369) )
      {
        v19 = *(_QWORD *)(a1 + 4352);
        if ( *(_DWORD *)(a1 + 4336) == 2 )
        {
          v20 = *(_DWORD *)(v19 + 4) - 1;
          if ( *(_DWORD *)(v19 + 4) != 1 )
          {
            v21 = (PKINTERRUPT *)(v19 + 48LL * v20 + 24);
            do
            {
              KeReleaseInterruptSpinLock(*v21, *(_BYTE *)v19);
              v21 -= 6;
              --v20;
            }
            while ( v20 );
          }
        }
        KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v19 + 24), v10);
        return v18;
      }
      else
      {
        v22 = *(struct _KINTERRUPT **)(a1 + 848);
        if ( v22 )
          KeReleaseInterruptSpinLock(v22, v10);
        return v18;
      }
    }
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    v7 = a1 + 144;
    for ( j = *(__int64 **)(a1 + 144); j != (__int64 *)v7; j = (__int64 *)*j )
    {
      v6 = j - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)j + 10)) | ((((unsigned __int8)*((_DWORD *)j + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)j + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( j != (__int64 *)v7 )
      return v6;
    return (__int64 *)v5;
  }
}
