/*
 * XREFs of PnpSurpriseFailUnsafeDmaDevices @ 0x140A7F278
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140735FE8 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408B220C (PnpSynchronizeDeviceEventQueue.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140A7F3B4 (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PiCslIsConsoleLocked @ 0x140A7F420 (PiCslIsConsoleLocked.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140AB8880 (PnpPowerStateTransitionWatchdogPopRecord.c)
 */

void PnpSurpriseFailUnsafeDmaDevices()
{
  int v0; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // ebx
  char v3; // di
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8

  if ( PipDmaGuardPolicy == 2 && (unsigned __int8)PiCslIsConsoleLocked() )
  {
    v0 = PnpPowerStateTransitionWatchdogPushRecord();
    CurrentThread = KeGetCurrentThread();
    v2 = v0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    if ( v2 >= 0 )
      PnpPowerStateTransitionWatchdogPopRecord();
    v3 = 0;
    if ( IopRootDeviceNode )
    {
      for ( i = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); ; i = v6 )
      {
LABEL_8:
        if ( !i )
          break;
        v5 = i[90];
        if ( v5 && (*(_BYTE *)(v5 + 16) & 2) != 0 && !PiIommuIsDeviceSafeWhileConsoleLocked(v5) )
        {
          PipDmgEnforceEnumerationPolicy((ULONG_PTR)i, v9, v10);
          v3 = 1;
        }
        else
        {
          v6 = (_QWORD *)i[1];
          if ( v6 )
            continue;
        }
        v6 = (_QWORD *)*i;
        if ( !*i )
        {
          while ( i != IopRootDeviceNode )
          {
            i = (_QWORD *)i[2];
            v7 = (_QWORD *)*i;
            if ( *i )
            {
              i = (_QWORD *)*i;
              if ( v7 != IopRootDeviceNode )
                goto LABEL_8;
              goto LABEL_17;
            }
          }
          break;
        }
      }
    }
LABEL_17:
    ExReleaseResourceLite(&IopDeviceTreeLock);
    ExReleaseResourceLite(&PiEngineLock);
    KeLeaveCriticalRegion();
    if ( v3 )
    {
      v8 = PnpPowerStateTransitionWatchdogPushRecord();
      PnpSynchronizeDeviceEventQueue();
      if ( v8 >= 0 )
        PnpPowerStateTransitionWatchdogPopRecord();
    }
  }
}
