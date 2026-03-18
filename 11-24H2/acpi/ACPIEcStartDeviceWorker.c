/*
 * XREFs of ACPIEcStartDeviceWorker @ 0x14005FD10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIEcConnectInterrupt @ 0x14009C90C (ACPIEcConnectInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x14009C9D8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x14009CA7C (ACPIEcGetUid.c)
 *     ACPIEcInstallOpRegionHandler @ 0x14009CB10 (ACPIEcInstallOpRegionHandler.c)
 *     ACPIEcGetResources @ 0x14009CB88 (ACPIEcGetResources.c)
 *     ACPIEvaluateDsmMethodOnBurstModeThreshold @ 0x14009CC5C (ACPIEvaluateDsmMethodOnBurstModeThreshold.c)
 */

_UNKNOWN **__fastcall ACPIEcStartDeviceWorker(__int64 a1)
{
  int Resources; // edi
  __int64 DeviceExtension; // rax
  IRP *v4; // rbp
  _QWORD *v5; // rsi
  _BYTE *v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int MinorFunction; // r14d
  int GpeVector; // eax
  __int64 v10; // rax
  const char *v11; // rcx
  const char *v12; // rdx
  _UNKNOWN **result; // rax
  __int64 v14; // rax

  Resources = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v4 = *(IRP **)(a1 + 40);
  v5 = (_QWORD *)DeviceExtension;
  v6 = *(_BYTE **)(DeviceExtension + 184);
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( v6 != (_BYTE *)gECDTContext )
  {
    Resources = ACPIEcGetResources(
                  CurrentStackLocation->Parameters.WMI.ProviderId,
                  CurrentStackLocation->Parameters.QueryDirectory.FileName,
                  *(_QWORD *)(DeviceExtension + 184));
    if ( Resources >= 0 )
    {
      GpeVector = ACPIEcGetGpeVector(v6);
      Resources = GpeVector;
      if ( GpeVector < 0 )
      {
        if ( GpeVector != -1073741772 || !*((_BYTE *)AcpiInformation + 133) || !v6[2212] )
          goto LABEL_11;
        v6[2213] = 1;
      }
      ACPIEcGetUid(v6);
      Resources = ACPIEcConnectInterrupt(v6);
      if ( Resources >= 0 )
      {
        Resources = ACPIEcInstallOpRegionHandler(v6);
        if ( Resources >= 0 )
          v6[120] = 1;
      }
    }
  }
LABEL_11:
  ACPIEvaluateDsmMethodOnBurstModeThreshold(v5);
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Resources;
  IofCompleteRequest(v4, 0);
  v10 = v5[1];
  v11 = byte_1400753E8;
  v12 = byte_1400753E8;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = (const char *)v5[76];
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = (const char *)v5[77];
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v14 = 26LL;
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0xBu,
                          (__int64)&WPP_9aa2d9f287f0345c39ef087519b57e4d_Traceguids,
                          (char)v4,
                          ACPIDispatchPnpTableNames[v14],
                          Resources,
                          (char)v5,
                          v11,
                          v12);
  }
  return result;
}
