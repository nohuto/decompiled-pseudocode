/*
 * XREFs of UsbhUnlatchPdo @ 0x140020FA0
 * Callers:
 *     UsbhInsertQueuePortChangeObject @ 0x140003F90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     UsbhPdoPnp_QueryInterface @ 0x140005410 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhSshResumePort @ 0x1400124DC (UsbhSshResumePort.c)
 *     UsbhPdoIdleCC_Worker @ 0x14001F4C0 (UsbhPdoIdleCC_Worker.c)
 *     UsbhSS_PdoWakeWorker @ 0x14001FF70 (UsbhSS_PdoWakeWorker.c)
 *     UsbhBusResume_Action @ 0x140020514 (UsbhBusResume_Action.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400225DC (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140036F20 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhBusSuspend_Action @ 0x1400408AC (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140042C7C (UsbhHubSyncSuspendPortEvent.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140043CB4 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 *     UsbhCompletePdoWakeIrps @ 0x140049810 (UsbhCompletePdoWakeIrps.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhDriverNotFoundTimer @ 0x14004F4A0 (UsbhDriverNotFoundTimer.c)
 *     UsbhDriverNotFoundWorker @ 0x14004F550 (UsbhDriverNotFoundWorker.c)
 *     UsbhGetHubNodeInfo @ 0x140054A44 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhUnlatchPdo(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // r9
  __int64 v9; // rcx
  KIRQL v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 *v14; // rdi
  __int64 *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 **v21; // rax

  v4 = a4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1329877109;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v4;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 1348891236;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v4;
      }
    }
  }
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_QWORD *)(a2 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v13 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v14 = (__int64 *)(v13 + 1272);
  v15 = *(__int64 **)(v13 + 1272);
  if ( v15 == (__int64 *)(v13 + 1272) )
  {
LABEL_19:
    v18 = (_DWORD *)(v13 + 1288);
    v19 = *(_DWORD *)(v13 + 1288);
    if ( v19 )
      *v18 = v19 - 1;
  }
  else
  {
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 64);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            *(_DWORD *)v17 = 1064591724;
            *(_QWORD *)(v17 + 8) = 0LL;
            *(_QWORD *)(v17 + 16) = v13;
            *(_QWORD *)(v17 + 24) = v4;
          }
        }
      }
      if ( *((_DWORD *)v15 + 4) == (_DWORD)v4 && v15[4] == a3 )
        break;
      v15 = (__int64 *)*v15;
      if ( v15 == v14 )
        goto LABEL_19;
    }
    v20 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 || (v21 = (__int64 **)v15[1], *v21 != v15) )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (__int64)v21;
    ExFreePoolWithTag(v15 - 1, 0);
    v18 = (_DWORD *)(v13 + 1288);
  }
  if ( (__int64 *)*v14 == v14 && !*v18 )
    KeSetEvent((PRKEVENT)(v13 + 1296), 0, 0);
  qword_14006F5E0 = 0LL;
  KeReleaseSpinLock(&HubG, v10);
}
