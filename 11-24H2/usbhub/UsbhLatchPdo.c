/*
 * XREFs of UsbhLatchPdo @ 0x14000ABA0
 * Callers:
 *     UsbhInsertQueuePortChangeObject @ 0x140003F90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSshResumePort @ 0x1400124DC (UsbhSshResumePort.c)
 *     UsbhPortResumeComplete @ 0x1400191B0 (UsbhPortResumeComplete.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001C40C (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_SignalPdoWake @ 0x14001CA90 (UsbhSS_SignalPdoWake.c)
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
 *     UsbhGetHubNodeInfo @ 0x140054A44 (UsbhGetHubNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v7; // rsi
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 Pool2; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx

  v4 = 0LL;
  v5 = a4;
  v7 = a2;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1329877100;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v5;
      }
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v15 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        v11 = 0LL;
        *(_DWORD *)v15 = 1413771367;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v7;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v7 )
  {
    v16 = FdoExt(a1, v11, v12, v13);
    if ( (unsigned __int16)v7 <= *(unsigned __int8 *)(FdoExt(a1, v17, v18, v19) + 2938) )
    {
      v20 = *(_QWORD *)(v16 + 3056);
      if ( v20 )
      {
        v21 = v20 + 2928 * v7 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v22 = *(_QWORD *)(a1 + 64);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
              *(_DWORD *)v23 = 1044672615;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = v7;
              *(_QWORD *)(v23 + 24) = v21;
            }
          }
        }
        if ( v21 )
        {
          v4 = *(_QWORD *)(v21 + 392);
          if ( v4 )
          {
            v24 = *(_QWORD *)(v4 + 64);
            if ( !v24 )
              UsbhTrapFatal_Dbg(v4, 0LL);
            if ( *(_DWORD *)v24 != 1329877064 )
              UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v4;
              *(_DWORD *)(Pool2 + 24) = v5;
              *(_QWORD *)(Pool2 + 40) = a3;
              v26 = (_QWORD *)(Pool2 + 8);
              v27 = *(_QWORD **)(v24 + 1280);
              if ( *v27 != v24 + 1272 )
                __fastfail(3u);
              *v26 = v24 + 1272;
              v26[1] = v27;
              *v27 = v26;
              *(_QWORD *)(v24 + 1280) = v26;
            }
            else
            {
              ++*(_DWORD *)(v24 + 1288);
            }
          }
        }
      }
    }
  }
  qword_14006F5E0 = 0LL;
  KeReleaseSpinLock(&HubG, v14);
  return v4;
}
