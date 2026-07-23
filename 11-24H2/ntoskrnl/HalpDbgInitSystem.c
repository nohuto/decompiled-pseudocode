/*
 * XREFs of HalpDbgInitSystem @ 0x140B4F4D0
 * Callers:
 *     <none>
 * Callees:
 *     HalAcpiGetTable @ 0x14053A6E0 (HalAcpiGetTable.c)
 *     KdGetDebugDevice @ 0x1405AC680 (KdGetDebugDevice.c)
 *     HalpCopyDebugDescriptor @ 0x140C165E0 (HalpCopyDebugDescriptor.c)
 *     HalpRegisterKdSupportFunctions @ 0x140C1671C (HalpRegisterKdSupportFunctions.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    KdDebugDevice = HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    HalpRegisterKdSupportFunctions();
    HalpDebugPortTable = HalAcpiGetTable(a3, 1346847300);
    *KdGetDebugDevice() = KdDebugDevice;
  }
  return 0LL;
}
