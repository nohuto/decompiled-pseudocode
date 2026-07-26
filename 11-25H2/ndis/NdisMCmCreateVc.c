/*
 * XREFs of NdisMCmCreateVc @ 0x1400D8FF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisMCmCreateVc(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE MiniportVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  __int64 Pool2; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _LIST_ENTRY *v11; // rbx
  _QWORD *v12; // rcx
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  _LIST_ENTRY *v22; // rcx
  _LIST_ENTRY *Flink; // rax
  int v24; // edx
  void (__fastcall *v25)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v26)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (*v27)(int, void *, struct _NDIS_PACKET *); // rdx
  void (*v28)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v29)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  void (__fastcall *v30)(void *, struct _NDIS_PACKET **, unsigned int); // rbp
  _LIST_ENTRY *v31; // r13
  void *v32; // rbx
  _QWORD *v33; // [rsp+30h] [rbp-48h]
  NDIS_STATUS v34; // [rsp+80h] [rbp+8h]

  if ( !NdisAfHandle )
    return -1073741823;
  *NdisVcHandle = 0LL;
  Pool2 = ExAllocatePool2(64LL, 144LL, 1868776526);
  v9 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 8));
  v10 = ExAllocatePool2(64LL, 344LL, 1868776526);
  v33 = (_QWORD *)v10;
  v11 = (_LIST_ENTRY *)v10;
  if ( !v10 )
  {
    ExFreePoolWithTag(v9, 0);
    return -1073741670;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 16));
  v12 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 470);
  v11[12].Flink = (_LIST_ENTRY *)MiniportAdapterHandle;
  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
  {
    v11[13].Flink = (_LIST_ENTRY *)v12[35];
    v11[15].Flink = 0LL;
  }
  else
  {
    v11[15].Flink = (_LIST_ENTRY *)v12[67];
  }
  v11[13].Blink = (_LIST_ENTRY *)v12[64];
  v11[14].Flink = (_LIST_ENTRY *)v12[65];
  v11[14].Blink = (_LIST_ENTRY *)v12[66];
  v13 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 46);
  v9[15] = MiniportAdapterHandle;
  v9[16] = MiniportVcContext;
  v11[12].Blink = (_LIST_ENTRY *)MiniportVcContext;
  v11[4].Blink = (_LIST_ENTRY *)v9;
  v11->Blink = (_LIST_ENTRY *)((char *)v9 + 4);
  v11[4].Flink = (_LIST_ENTRY *)NdisAfHandle;
  LODWORD(v11->Flink) = 1;
  v11[5].Flink = v13;
  v11[8].Blink = 0LL;
  v9[2] = v13;
  Blink = v13[1].Blink;
  if ( LOBYTE(Blink[3].Blink) < 6u )
  {
    v9[6] = Blink[19].Flink;
    v9[7] = v13[1].Blink[19].Blink;
  }
  else
  {
    v9[8] = Blink[13].Blink;
    v9[9] = v13[1].Blink[13].Flink;
  }
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v15 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 44);
    v16 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 41);
    v17 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 36);
  }
  else
  {
    v15 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 25);
    v16 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 22);
    v17 = (_LIST_ENTRY *)*((_QWORD *)NdisAfHandle + 17);
  }
  v11[7].Flink = v17;
  v11[7].Blink = v16;
  v11[8].Flink = v15;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
    v18 = (_QWORD *)*((_QWORD *)NdisAfHandle + 4);
  else
    v18 = (_QWORD *)*((_QWORD *)NdisAfHandle + 3);
  v11[10].Blink = (_LIST_ENTRY *)v18[12];
  v11[11].Flink = (_LIST_ENTRY *)v18[13];
  v11[11].Blink = (_LIST_ENTRY *)v18[14];
  v19 = *((_QWORD *)NdisAfHandle + 46);
  v20 = *((_QWORD *)NdisAfHandle + 47);
  v11[9].Flink = (_LIST_ENTRY *)MiniportVcContext;
  v9[11] = MiniportVcContext;
  v34 = (*(__int64 (__fastcall **)(__int64, _LIST_ENTRY *, _LIST_ENTRY **))(v19 + 1048))(v20, v11, &v11[1].Blink);
  if ( v34 )
  {
    ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag(v11, 0);
    v32 = 0LL;
  }
  else
  {
    v21 = *((_QWORD *)NdisAfHandle + 46);
    v22 = v11[1].Blink;
    v9[3] = v22;
    v11[6].Blink = v22;
    v11[6].Flink = *(_LIST_ENTRY **)(v21 + 1056);
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v21 + 1112), v11 + 2, (PKSPIN_LOCK)(v21 + 232));
    Flink = v11[12].Flink;
    v9[5] = v11;
    LOBYTE(v24) = Flink[2].Flink;
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) < 6u )
    {
      if ( (unsigned __int8)v24 < 6u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            19,
            25,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v25 = 0LL;
        v26 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
        v27 = ndisMCoSendCompleteToNdisPacket;
        v28 = 0LL;
        v30 = (void (__fastcall *)(void *, struct _NDIS_PACKET **, unsigned int))ndisCoSendPacketsToNdisPackets;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            19,
            24,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v25 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
        v26 = 0LL;
        v27 = 0LL;
        v30 = ndisCoSendPacketsToNetBufferLists;
        v28 = ndisMCoSendNetBufferListsCompleteToNdisPackets;
      }
      v29 = 0LL;
    }
    else
    {
      if ( (unsigned __int8)v24 < 6u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            19,
            23,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v25 = 0LL;
        v26 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v27 = (void (*)(int, void *, struct _NDIS_PACKET *))ndisMCoSendCompleteToNetBufferLists;
        v28 = 0LL;
        v29 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            19,
            22,
            (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
        }
        v25 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v26 = 0LL;
        v27 = 0LL;
        v28 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v29 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisCoSendNetBufferListsToNetBufferLists;
      }
      v30 = 0LL;
    }
    v31 = v11;
    v11[15].Blink = (_LIST_ENTRY *)v29;
    v32 = v33;
    v33[32] = v28;
    v33[33] = v30;
    v33[34] = v27;
    v31[17].Blink = (_LIST_ENTRY *)v26;
    v31[18].Flink = (_LIST_ENTRY *)v25;
  }
  *NdisVcHandle = v32;
  return v34;
}
