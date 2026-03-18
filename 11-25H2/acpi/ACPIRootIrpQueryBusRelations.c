/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1400B3F44
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400BA750 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     AcpiCheckExternalConnection @ 0x1400B4158 (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // r14
  int v10; // edi
  char *v12; // rax
  const char *v13; // r8
  const char *v14; // r10
  char v15; // r11
  char *IrpText; // rax
  const char *v17; // r8
  const char *v18; // r10
  char *v19; // rax
  const char *v20; // r8
  const char *v21; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_BYTE *)(v7 + 1);
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    AcpiCheckExternalConnection();
    v10 = ACPIDetectPdoDevices(a1, a3);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xDu,
          (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
          a2,
          IrpText,
          v10,
          v8,
          v17,
          v18);
      }
    }
    else
    {
      v10 = ACPIDetectDockDevices(v8, a3);
      if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = ACPIDebugGetIrpText(*(_QWORD *)(v8 + 8), v9);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x12u,
          0xEu,
          (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
          a2,
          v19,
          v10,
          v8,
          v20,
          v21);
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = ACPIDebugGetIrpText(*(_QWORD *)(DeviceExtension + 8), *(_BYTE *)(v7 + 1));
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xCu,
        (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
        a2,
        v12,
        v15,
        v8,
        v13,
        v14);
    }
    return 3221225485LL;
  }
}
