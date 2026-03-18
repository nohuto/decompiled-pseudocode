/*
 * XREFs of ACPIEcCreateEcData @ 0x14005F744
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x14005F83C (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcStartDevice @ 0x14005FAE0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 ACPIEcCreateEcData()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = ExAllocatePool2(64LL, 2320LL, 1164993345LL);
  v1 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = _InterlockedExchange64(&EcExtensionList, result);
    *(_DWORD *)(result + 64) = 50;
    *(_DWORD *)(result + 68) = 10;
    if ( (AcpiOverrideAttributes & 0x1000000) != 0 )
      *(_DWORD *)(result + 68) = 50;
    *(_WORD *)(result + 121) = 0;
    *(_BYTE *)(result + 488) = 0;
    *(_BYTE *)(result + 504) = 0;
    *(_BYTE *)(result + 458) = 1;
    KeQueryPerformanceCounter((PLARGE_INTEGER)(result + 512));
    *(_QWORD *)(v1 + 472) = v1 + 464;
    *(_QWORD *)(v1 + 464) = v1 + 464;
    KeInitializeEvent((PRKEVENT)(v1 + 96), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 88));
    KeInitializeTimer((PKTIMER)(v1 + 520));
    KeInitializeDpc((PRKDPC)(v1 + 584), (PKDEFERRED_ROUTINE)ACPIEcWatchdogDpc, (PVOID)v1);
    return v1;
  }
  return result;
}
