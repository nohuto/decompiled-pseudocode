/*
 * XREFs of ACPIButtonEvent @ 0x14002433C
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1400223A0 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPIButtonDeviceControl @ 0x140024080 (ACPIButtonDeviceControl.c)
 *     ACPICMLidWorker @ 0x1400241F0 (ACPICMLidWorker.c)
 *     ACPICMButtonNotify @ 0x140039BD8 (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x14004BA00 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDiagTraceButtonNotification @ 0x14002442C (AcpiDiagTraceButtonNotification.c)
 *     ACPIButtonCompletePendingIrps @ 0x14002455C (ACPIButtonCompletePendingIrps.c)
 */

__int64 __fastcall ACPIButtonEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rsi
  int v5; // ebx
  KIRQL v6; // al
  unsigned int v7; // edi
  KIRQL v8; // r15

  if ( a1 )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    v5 = *(_DWORD *)(DeviceExtension + 200);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
    v7 = *(_DWORD *)(DeviceExtension + 196) | a2;
    v8 = v6;
    if ( (v5 & 4) != 0 )
    {
      if ( (v7 & 0x80080000) == 0 )
      {
LABEL_6:
        *(_DWORD *)(DeviceExtension + 196) = 0;
LABEL_4:
        KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
        return 259LL;
      }
      v7 = v7 & 0xFFFCFFFF | (*(_BYTE *)(DeviceExtension + 192) != 0 ? 0x10000 : 0x20000);
    }
    *(_DWORD *)(DeviceExtension + 196) = v7;
    if ( !v7 )
      goto LABEL_4;
    AcpiDiagTraceButtonNotification(DeviceExtension, *(unsigned int *)(DeviceExtension + 200), v7);
    if ( !(unsigned __int8)ACPIButtonCompletePendingIrps(a1, v7) )
      goto LABEL_4;
    goto LABEL_6;
  }
  return 0LL;
}
