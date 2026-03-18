/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400B4C70 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1400339DC (WPP_RECORDER_SF_qqqss.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x14003D958 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  char *CorrespondingDock; // rax
  int v8; // edi
  __int64 v10; // r8
  const char *v11; // rax
  const char *v12; // r10
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    if ( ACPIDockIsDockDevice() )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v8 = ACPIDetectEjectDevices((__int64)v6, a3, (__int64)CorrespondingDock);
    if ( v8 < 0 )
    {
      v13 = v6[1];
      v14 = byte_140075488;
      v15 = byte_140075488;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)v6[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)v6[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x11u,
          (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
          v8,
          (char)v6,
          v14,
          v15);
    }
    return (unsigned int)v8;
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = byte_140075488;
    v12 = byte_140075488;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)v6[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (const char *)v6[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x10u,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        a2,
        0,
        (char)v6,
        v11,
        v12);
    return 3221225485LL;
  }
}
