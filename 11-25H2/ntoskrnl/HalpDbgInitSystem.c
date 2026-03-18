/*
 * XREFs of HalpDbgInitSystem @ 0x140B3D480
 * Callers:
 *     <none>
 * Callees:
 *     HalAcpiGetTable @ 0x14053A5B0 (HalAcpiGetTable.c)
 *     KdGetDebugDevice @ 0x1405ABD80 (KdGetDebugDevice.c)
 *     HalpCopyDebugDescriptor @ 0x140C03550 (HalpCopyDebugDescriptor.c)
 *     HalpRegisterKdSupportFunctions @ 0x140C0368C (HalpRegisterKdSupportFunctions.c)
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
