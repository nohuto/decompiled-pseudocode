/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x140034330
 * Callers:
 *     ACPIFreeWaitWakePowerRequest @ 0x140033370 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x140033F48 (ACPIAssociateWakeInterrupt.c)
 * Callees:
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1400344A0 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(int a1, PVOID a2)
{
  KIRQL v4; // al
  PVOID *v5; // rbx
  KIRQL v6; // di
  KIRQL v7; // al
  _QWORD *v8; // rax
  PVOID *v9; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(Parameters.ConnectionContext.Generic) = 0;
  *(_QWORD *)&Parameters.Version = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v5 = (PVOID *)AcpiPowerWaitWakeInterruptList;
  v6 = v4;
  while ( v5 != &AcpiPowerWaitWakeInterruptList )
  {
    if ( *((_DWORD *)v5 + 8) == a1 && v5[5] == a2 )
    {
      if ( *((_DWORD *)v5 + 22) )
        break;
      if ( *((_DWORD *)v5 + 14) != 5 )
      {
        if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(v5) )
          break;
        *((_DWORD *)v5 + 14) = 1;
        KeReleaseSpinLock(&AcpiPowerLock, v6);
        Parameters.Version = 1;
        Parameters.ConnectionContext.Generic = v5[6];
        IoDisconnectInterruptEx(&Parameters);
        v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        *((_DWORD *)v5 + 14) = 5;
        v6 = v7;
        KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
      }
      if ( !*((_DWORD *)v5 + 22) )
      {
        v8 = *v5;
        if ( *((PVOID **)*v5 + 1) != v5 || (v9 = (PVOID *)v5[1], *v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        v5[1] = v5;
        *v5 = v5;
        ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v5);
      }
      break;
    }
    v5 = (PVOID *)*v5;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
