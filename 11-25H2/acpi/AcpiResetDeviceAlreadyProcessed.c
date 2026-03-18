/*
 * XREFs of AcpiResetDeviceAlreadyProcessed @ 0x14005DCB4
 * Callers:
 *     AcpiDeviceResetCompleteResetWorker @ 0x14005D700 (AcpiDeviceResetCompleteResetWorker.c)
 *     AcpiDeviceResetInvokeReset @ 0x14005D938 (AcpiDeviceResetInvokeReset.c)
 *     AcpiPlatformLevelDeviceReset @ 0x14005DBA4 (AcpiPlatformLevelDeviceReset.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiResetDeviceAlreadyProcessed(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rax

  v2 = a1 + 48;
  for ( i = *(_QWORD *)(a2 + 48); i != v2; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_QWORD *)(i - 8) == *(_QWORD *)(a2 + 32) )
      return 1;
  }
  return 0;
}
