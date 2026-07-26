/*
 * XREFs of ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400A6944
 * Callers:
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140035EE0 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     NdisMNetPnPEvent @ 0x140065E80 (NdisMNetPnPEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAX$$TPEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143CF0 (-ndisGetBindLinkNameForTracing@@YAX$$TPEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisBindRequest(
        ULONG_PTR BugCheckParameter2,
        Ndis::BindEngine *this,
        Ndis::BindState *a3,
        ULONG_PTR BugCheckParameter3)
{
  enum CallRunMode v7; // edi
  std::nullptr_t v8; // rcx
  int v9; // edx
  unsigned __int16 v10; // r9
  std::nullptr_t v11; // rcx
  int v12; // edx
  unsigned __int16 v13; // r9
  std::nullptr_t v14; // rcx
  std::nullptr_t v15; // rcx
  char v16[160]; // [rsp+48h] [rbp-49h] BYREF

  if ( *(_BYTE *)BugCheckParameter3 != 0x80
    || *(_BYTE *)(BugCheckParameter3 + 1) != 2
    || *(_WORD *)(BugCheckParameter3 + 2) < 0xACu
    || *(_DWORD *)(BugCheckParameter3 + 4)
    || *(_DWORD *)(BugCheckParameter3 + 168)
    || *(_DWORD *)(BugCheckParameter3 + 164)
    || *(_DWORD *)(BugCheckParameter3 + 160)
    || *(_QWORD *)(BugCheckParameter3 + 16)
    || *(_DWORD *)(BugCheckParameter3 + 24) )
  {
    ndisBugCheckEx(0x22uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  v7 = RunAsynchronous;
  Ndis::BindEngine::BeginPolicyUpdates(this);
  switch ( *(_DWORD *)(BugCheckParameter3 + 8) )
  {
    case 0x12:
      if ( !Ndis::BindState::SetBinding(a3, BindingEnabled, Reason_NetEventInhibitBindsAbove) )
        break;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 < 4u )
        break;
      ndisGetBindLinkNameForTracing(v15, (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        break;
      v13 = 55;
LABEL_32:
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        0x1Cu,
        v13,
        (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
        *(unsigned __int16 **)&v16[8],
        *(_QWORD *)v16);
      break;
    case 0x13:
      if ( !Ndis::BindState::SetBinding(a3, BindingDisabled, Reason_NetEventInhibitBindsAbove) )
        goto LABEL_27;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 < 4u )
        goto LABEL_27;
      ndisGetBindLinkNameForTracing(v14, (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v10 = 56;
      goto LABEL_26;
    case 0x14:
      if ( !Ndis::BindState::SetPause(a3, DatapathRunning, PauseReason_NetEventRequirePause) )
        break;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 < 4u )
        break;
      ndisGetBindLinkNameForTracing(v11, (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        break;
      v13 = 57;
      goto LABEL_32;
    case 0x15:
      if ( !Ndis::BindState::SetPause(a3, DatapathPaused, PauseReason_NetEventRequirePause) )
        goto LABEL_27;
      memset(v16, 0, sizeof(v16));
      if ( (unsigned __int8)byte_14011CBA3 < 4u )
        goto LABEL_27;
      ndisGetBindLinkNameForTracing(v8, (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v10 = 58;
LABEL_26:
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        0x1Cu,
        v10,
        (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
        *(unsigned __int16 **)&v16[8],
        *(_QWORD *)v16);
LABEL_27:
      v7 = RunSynchronous;
      break;
  }
  Ndis::BindEngine::EndPolicyUpdates(this);
  Ndis::BindEngine::ApplyBindChanges(this, v7, 0);
}
