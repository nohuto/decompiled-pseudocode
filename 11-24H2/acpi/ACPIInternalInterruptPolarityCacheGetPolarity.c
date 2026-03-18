/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4
 * Callers:
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1400A61C4 (PnpiCmResourceToBiosExtendedIrq.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400AA210 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x14003C8BC (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x140061D68 (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v8; // bp
  _QWORD *i; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 *j; // rax
  __int64 v13; // rax
  const char *v14; // rdx
  const char *v15; // rcx
  int v16; // edx
  int v17; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension); i; i = (_QWORD *)i[99] )
  {
    for ( j = (__int64 *)i[89]; j != i + 89; j = (__int64 *)*j )
    {
      if ( a2 == *((_DWORD *)j + 4) )
      {
        v16 = *((_DWORD *)j + 5);
        if ( v16 != -1 )
        {
          *a3 = v16;
          v3 = 1;
        }
        goto LABEL_18;
      }
    }
    v13 = i[1];
    if ( (v13 & 0x20) != 0 )
    {
      v14 = byte_1400753E8;
      v15 = byte_1400753E8;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)i[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)i[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v14,
          v10,
          v11,
          v17,
          a2,
          (char)i,
          (char)i,
          (__int64)v14,
          (__int64)v15);
    }
  }
LABEL_18:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  return v3;
}
