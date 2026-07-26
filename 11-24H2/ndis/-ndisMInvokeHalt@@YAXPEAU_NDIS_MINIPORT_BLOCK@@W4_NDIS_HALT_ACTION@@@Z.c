/*
 * XREFs of ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x140165310
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140047700 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x14006C3B0 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x14008D6A0 (--0MiniportHaltTelemetry@AzTelemetry@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMInvokeHalt(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  enum _NDIS_HALT_ACTION v3; // esi
  int v5; // edx
  _BYTE v6[64]; // [rsp+40h] [rbp-48h] BYREF

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      228,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)DriverHandle);
  }
  if ( ndisIsMiniportVerified(DriverHandle) )
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v6, a1, v3);
    (*((void (__fastcall **)(void *, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NDIS_HALT_ACTION)))ndisVerifierNdisDispatch
     + 7))(
      a1->MiniportAdapterContext,
      (unsigned int)v3,
      a1,
      a1->VerifierContext,
      DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx);
  }
  else
  {
    AzTelemetry::MiniportHaltTelemetry::MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v6, a1, v3);
    DriverHandle->MiniportDriverCharacteristics.HaltHandlerEx(a1->MiniportAdapterContext, v3);
  }
  AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry((AzTelemetry::MiniportHaltTelemetry *)v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      229,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)DriverHandle);
  }
}
