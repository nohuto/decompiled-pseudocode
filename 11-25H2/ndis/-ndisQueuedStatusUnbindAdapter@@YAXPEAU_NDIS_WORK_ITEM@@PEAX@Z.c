/*
 * XREFs of ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400BF530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAE0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisQueuedStatusUnbindAdapter(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  __int64 m_numElements; // r15
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rsi
  Ndis::BindState *p_BindState; // rcx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edx
  char v11[160]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      81,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a1);
  }
  Ndis::BindEngine::BeginPolicyUpdates(&v2->BindEngine);
  m_numElements = v2->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= v2->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    p = v2->Bindings.Protocols._p;
    p_BindState = &p[i].__ptr_.__value_->BindState;
    v8 = *((_QWORD *)p_BindState[1].m_AdditionalContext + 5);
    if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 56) < 6u && Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_RebindNeeded) )
      {
        memset(v11, 0, sizeof(v11));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v11);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              0x1Cu,
              0x52u,
              (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
              *(unsigned __int16 **)&v11[8],
              *(_QWORD *)v11);
        }
      }
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&v2->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&v2->BindEngine, RunSynchronous, 0);
  ndisDereferenceMiniport(v2, 0x36u);
  ExFreePoolWithTag(a1, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      6,
      83,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)v2);
  }
}
