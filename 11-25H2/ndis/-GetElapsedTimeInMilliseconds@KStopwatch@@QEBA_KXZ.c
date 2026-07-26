/*
 * XREFs of ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1400982C0
 * Callers:
 *     ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x14008E680 (-AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140091420 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x140097340 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStopwatch::GetElapsedTimeInMilliseconds(KStopwatch *this)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 && (v2 = *((_QWORD *)this + 2), v2 >= *(_QWORD *)this) )
    return 1000 * (v2 - *(_QWORD *)this) / v1;
  else
    return 0LL;
}
