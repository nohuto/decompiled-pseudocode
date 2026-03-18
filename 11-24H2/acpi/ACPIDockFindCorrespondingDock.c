/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x14003D958
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005CFE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 */

char *__fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  char *i; // rax
  char *v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  v10 = 0;
  v5[1] = 0LL;
  v5[0] = RootDeviceExtension + 800;
  v8 = 816LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v9 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = i;
    if ( *(_QWORD *)&NewIrql[8] + v8 == v5[0] )
    {
      if ( !v9 )
        return v3;
      goto LABEL_9;
    }
    if ( v9 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    if ( !v3 || _bittest64((const signed __int64 *)v3 + 1, 0x39u) && *((_QWORD *)v3 + 23) == a1 )
      break;
  }
  if ( v9 == 2 )
LABEL_9:
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  return v3;
}
