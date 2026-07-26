/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x140171ED0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x14006DBD0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x140055540 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1400A32B8 (ndisMapOpenByName.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E18 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401529A0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EA0 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153EE0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140172478 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        PCUNICODE_STRING SourceString,
        PCUNICODE_STRING a2,
        void *a3,
        unsigned int a4,
        int a5)
{
  __int64 v7; // rdi
  char v8; // r13
  char v9; // r12
  int v10; // edx
  int v11; // esi
  int v12; // r9d
  struct _NDIS_PROTOCOL_BLOCK *v13; // rbx
  char v14; // r14
  const UNICODE_STRING *v15; // rsi
  int v16; // r9d
  struct _NDIS_MINIPORT_BLOCK *v17; // r13
  bool v18; // cf
  bool v20; // r15
  KIRQL v21; // r13
  struct _KEVENT *v22; // rcx
  int v23; // edx
  struct _NDIS_PROTOCOL_BLOCK *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v25; // [rsp+50h] [rbp-B0h]
  unsigned int v26; // [rsp+58h] [rbp-A8h]
  void *v27; // [rsp+68h] [rbp-98h]
  struct _KEVENT v28; // [rsp+70h] [rbp-90h] BYREF
  char v29[160]; // [rsp+90h] [rbp-70h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v30; // [rsp+130h] [rbp+30h] BYREF

  v27 = a3;
  v24[0] = 0LL;
  v25 = 0LL;
  v26 = a4;
  v7 = 0LL;
  memset(&v30, 0, sizeof(v30));
  memset(&v28, 0, sizeof(v28));
  v8 = 0;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x12u,
      (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
      &a2->Length);
  v11 = ndisReferenceProtocolByName(a2, v24, 0, PTREF_RECONFIG);
  if ( v11 < 0 )
  {
    LOBYTE(v13) = 0;
    goto LABEL_29;
  }
  v14 = 1;
  if ( SourceString->Length )
  {
    v15 = SourceString;
    while ( 1 )
    {
      v13 = v24[0];
      WAIT_FOR_PROTO_MUTEX(v24[0]);
      v7 = ndisMapOpenByName(v15, (__int64)v13);
      if ( v7 )
        break;
      RELEASE_PROT_MUTEX(v13);
      ndisDereferenceProtocol(v13, 0, 4u, v16);
      if ( !v8 )
      {
        v8 = 1;
        v24[0] = 0LL;
      }
      if ( (int)ndisReferenceProtocolByName(a2, v24, 1u, PTREF_RECONFIG) < 0 )
      {
        v17 = v25;
        v14 = 0;
        v13 = v24[0];
        v11 = -1073741772;
        goto LABEL_25;
      }
    }
    v18 = v13->MajorNdisVersion < 6u;
    v9 = 1;
    v25 = *(struct _NDIS_MINIPORT_BLOCK **)(v7 + 16);
    if ( v18 && !v13->PnPEventHandler )
    {
      RELEASE_PROT_MUTEX(v13);
      v17 = v25;
      v11 = -1073741823;
LABEL_24:
      ndisMDereferenceOpenUnlocked(v7, 4u);
      goto LABEL_25;
    }
  }
  else
  {
    v13 = v24[0];
    if ( v24[0]->MajorNdisVersion < 6u && !v24[0]->PnPEventHandler )
    {
      v14 = 0;
      v11 = -1073741823;
      v17 = 0LL;
      goto LABEL_25;
    }
    WAIT_FOR_PROTO_MUTEX(v24[0]);
  }
  ndisInitializeNetPnPEvent(&v30, &v28);
  if ( a5 == 3 )
  {
    v30.NetPnPEvent.NetEvent = NetEventReconfigure;
  }
  else
  {
    if ( a5 != 9 )
    {
      v11 = -1073741808;
      RELEASE_PROT_MUTEX(v13);
LABEL_22:
      v17 = v25;
      goto LABEL_23;
    }
    v30.NetPnPEvent.NetEvent = NetEventBindList;
  }
  v30.NetPnPEvent.Buffer = v27;
  v30.NetPnPEvent.BufferLength = v26;
  v11 = ndisDeliverNetPnPEventSynchronously(v13, (struct _NDIS_PROTOCOL_BLOCK *)v7, &v30);
  RELEASE_PROT_MUTEX(v13);
  v20 = v11 == 65539;
  if ( !v7 )
    goto LABEL_22;
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 232));
  if ( (*(_DWORD *)(v7 + 224) & 0x80000) == 0 )
  {
    *(_DWORD *)(v7 + 224) &= ~0x10u;
    v22 = *(struct _KEVENT **)(v7 + 912);
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      *(_QWORD *)(v7 + 912) = 0LL;
      v20 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 232), v21);
  v17 = v25;
  if ( v25 && v20 )
  {
    v13 = v24[0];
    if ( v24[0]->MajorNdisVersion <= 6u && (v24[0]->MajorNdisVersion != 6 || v24[0]->MinorNdisVersion < 0x28u) )
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5120LL));
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v7 + 856), BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v29, 0, sizeof(v29));
        if ( (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v7 + 856),
            (struct NDIS_PNPTRACE_LOCALS *)v29);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v23,
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
              *(unsigned __int16 **)&v29[8],
              *(_QWORD *)v29);
        }
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5120LL));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v7 + 16) + 5120LL), RunSynchronous, 0);
    }
  }
  else
  {
    v13 = v24[0];
  }
LABEL_23:
  v14 = v9;
  if ( v9 )
    goto LABEL_24;
LABEL_25:
  if ( v13 )
    ndisDereferenceProtocol(v13, 0, 4u, v12);
  if ( v14 )
    ndisDereferenceMiniport(v17, 0x34u);
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      20,
      (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
      (char)v13);
  }
  return (unsigned int)v11;
}
