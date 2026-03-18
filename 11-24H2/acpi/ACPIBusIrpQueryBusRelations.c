/*
 * XREFs of ACPIBusIrpQueryBusRelations @ 0x1400B50A8
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400B4C70 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1400339DC (WPP_RECORDER_SF_qqqss.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v7; // rbx
  int v8; // ebp
  int v9; // r10d
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // r10
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // r8
  __int64 v17; // rdx
  const char *v18; // rax
  const char *v19; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    v8 = ACPIDetectPdoDevices(a1, a3);
    if ( v8 < 0 )
    {
      v14 = v7[1];
      v15 = byte_1400753E8;
      v16 = byte_1400753E8;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (const char *)v7[76];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (const char *)v7[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x22u,
          (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
          a2,
          v8,
          (char)v7,
          v15,
          v16);
    }
    else
    {
      ACPIFilterRemoveNonPresentDevices((__int64)v7, *a3);
      v9 = ACPIDetectFilterDevices(a1, (__int64)*a3);
      if ( v9 < 0 )
      {
        v17 = v7[1];
        v18 = byte_1400753E8;
        v19 = byte_1400753E8;
        if ( (v17 & 0x200000000000LL) != 0 )
        {
          v18 = (const char *)v7[76];
          if ( (v17 & 0x400000000000LL) != 0 )
            v19 = (const char *)v7[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x23u,
            (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
            a2,
            v9,
            (char)v7,
            v18,
            v19);
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v12 = byte_1400753E8;
    v13 = byte_1400753E8;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = (const char *)v7[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = (const char *)v7[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x21u,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        a2,
        0,
        (char)v7,
        v12,
        v13);
    return 3221225485LL;
  }
}
