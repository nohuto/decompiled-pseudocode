/*
 * XREFs of ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015FB30
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x140076710 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di
  char v6[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      242,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
  v3 = DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx(a1->MiniportAdapterContext);
  v4 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v3;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xF3u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      *(_DWORD *)v6);
  }
  return v4;
}
