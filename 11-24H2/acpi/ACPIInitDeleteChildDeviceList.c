/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x14003C9AC
 * Callers:
 *     ACPIFilterFastIoDetachCallback @ 0x14003C550 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 */

void __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  char *i; // rax
  ULONG_PTR v2; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-18h]
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]

  v8 = 0;
  v3[1] = 0LL;
  v3[0] = a1 + 800;
  v6 = 816LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v7 = 1;
  for ( i = (char *)ACPIExtListStartEnum(v3); ; i = ACPIExtListEnumNext((__int64)v3) )
  {
    v2 = (ULONG_PTR)i;
    if ( *(_QWORD *)&NewIrql[8] + v6 == v3[0] )
      break;
    if ( v7 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    ACPIInitResetDeviceExtension(v2);
  }
  if ( v7 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
}
