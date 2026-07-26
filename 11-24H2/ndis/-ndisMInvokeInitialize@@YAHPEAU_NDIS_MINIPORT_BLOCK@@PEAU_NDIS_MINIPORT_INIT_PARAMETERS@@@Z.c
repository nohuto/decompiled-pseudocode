/*
 * XREFs of ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x140165450
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x1400727C0 (-AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x14008BB90 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_INIT_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  struct _NDIS_MINIPORT_INIT_PARAMETERS *v3; // rdi
  unsigned int v5; // edi
  char v7[4]; // [rsp+38h] [rbp-30h]
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  v3 = a2;
  PerformanceCounter.QuadPart = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      226,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)DriverHandle);
  }
  PerformanceFrequency[0] = KeQueryPerformanceCounter(&PerformanceFrequency[1]);
  v5 = DriverHandle->MiniportDriverCharacteristics.InitializeHandlerEx(a1, DriverHandle->MiniportDriverContext, v3);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  AzTelemetryWriteMiniportInitialize(a1, v5, (const struct KStopwatch *)PerformanceFrequency);
  NdisTraceLoggingDeviceInitialized((__int64)a1, (__int64)PerformanceFrequency, v5 != 0 ? 0xB : 0, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xE3u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)DriverHandle,
      *(_DWORD *)v7);
  }
  return v5;
}
