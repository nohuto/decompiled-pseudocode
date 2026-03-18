/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x14003D09C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400B50A8 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1400172C4 (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIExtListStartEnum @ 0x14003D65C (ACPIExtListStartEnum.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140048648 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPICleanupRemovedExtension @ 0x14005A794 (ACPICleanupRemovedExtension.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 */

void __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  char *i; // rax
  _BOOL8 v4; // rdx
  char *v5; // rbx
  __int64 j; // r8
  __int64 v7; // rdi
  bool v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v17 = 0;
  v12[1] = 0LL;
  v12[0] = a1 + 800;
  v15 = 816LL;
  SpinLock = &AcpiDeviceTreeLock;
  v16 = 1;
  *(_OWORD *)NewIrql = 0LL;
  for ( i = (char *)ACPIExtListStartEnum(v12); ; i = ACPIExtListEnumNext((__int64)v12) )
  {
    v5 = i;
    if ( *(_QWORD *)&NewIrql[8] + v15 == v12[0] )
      break;
    if ( v16 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    LOBYTE(v4) = 0;
    if ( *((_QWORD *)v5 + 118) )
      v4 = *((_DWORD *)v5 + 92) == 4;
    if ( (v5[8] & 0x60) == 0x40 )
    {
      for ( j = 0LL; (unsigned int)j < *a2; j = (unsigned int)(j + 1) )
      {
        if ( *((_QWORD *)v5 + 98) == *(_QWORD *)&a2[2 * j + 2] )
          goto LABEL_8;
      }
      v7 = *((_QWORD *)v5 + 140) & 0x8000LL;
      v8 = (*((_QWORD *)v5 + 140) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*((_QWORD *)v5 + 96), v4) || v7 )
      {
        LOBYTE(v10) = v8;
        EnableDisableRegions(*((_QWORD *)v5 + 95), 0LL, v10);
      }
      v11 = *((_DWORD *)v5 + 280);
      *((_DWORD *)v5 + 92) = 5;
      if ( (*(_QWORD *)&v11 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)v5 + 1, 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)v5 + 1, 0x800uLL);
      LOBYTE(v9) = 1;
      ACPIInitStopDevice(v5, v9);
      ACPIThermalReleaseCoolingInterfaces(v5);
      ACPIBuildSurpriseRemovedExtension(v5);
    }
    else
    {
LABEL_8:
      if ( v4 )
        ACPICleanupRemovedExtension(v5);
    }
  }
  if ( v16 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
}
