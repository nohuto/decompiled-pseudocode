/*
 * XREFs of HalpDbgInitSystem @ 0x140B4D480
 * Callers:
 *     <none>
 * Callees:
 *     HalAcpiGetTable @ 0x14053CDE0 (HalAcpiGetTable.c)
 *     KdGetDebugDevice @ 0x1405AF710 (KdGetDebugDevice.c)
 *     HalpCopyDebugDescriptor @ 0x140C145E0 (HalpCopyDebugDescriptor.c)
 *     HalpRegisterKdSupportFunctions @ 0x140C1471C (HalpRegisterKdSupportFunctions.c)
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
