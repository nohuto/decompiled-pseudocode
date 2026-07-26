/*
 * XREFs of ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140161CC0
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140036230 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisFInvokeNetPnPEvent(struct _NDIS_FILTER_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rsi
  _NET_PNP_EVENT_CODE NetEvent; // ebp
  __int64 result; // rax
  unsigned int v7; // edi
  char v8[4]; // [rsp+30h] [rbp-28h]
  char v9[4]; // [rsp+38h] [rbp-20h]

  FilterDriver = a1->FilterDriver;
  NetEvent = a2->NetPnPEvent.NetEvent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = a2->NetPnPEvent.NetEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Bu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  result = ((__int64 (__fastcall *)(void *, struct _NET_PNP_EVENT_NOTIFICATION *))FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler)(
             a1->FilterModuleContext,
             a2);
  v7 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = result;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Cu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      NetEvent,
      *(_DWORD *)v9);
    return v7;
  }
  return result;
}
