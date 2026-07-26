/*
 * XREFs of ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14016D360
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140057060 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = a2->NetPnPEvent.NetEvent;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Au,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  result = ((__int64 (__fastcall *)(void *, struct _NET_PNP_EVENT_NOTIFICATION *))FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler)(
             a1->FilterModuleContext,
             a2);
  v7 = result;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = result;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Bu,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      NetEvent,
      *(_DWORD *)v9);
    return v7;
  }
  return result;
}
