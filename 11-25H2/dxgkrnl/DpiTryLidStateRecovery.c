/*
 * XREFs of DpiTryLidStateRecovery @ 0x14007C334
 * Callers:
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401BF110 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1400515C8 (DpiAcpiCallAcpiEventHandler.c)
 */

bool DpiTryLidStateRecovery()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject, 2, 4u, (__int64)&v1) >= 0;
}
