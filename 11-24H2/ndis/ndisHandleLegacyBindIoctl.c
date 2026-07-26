/*
 * XREFs of ndisHandleLegacyBindIoctl @ 0x1401390A8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x14006DBD0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(struct _UNICODE_STRING *a1, int a2, const UNICODE_STRING *a3)
{
  int v4; // ebp
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  __int64 m_numElements; // r15
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r14
  Ndis::BindState *p_BindState; // rcx
  NDIS_BIND_PROTOCOL_LINK *value; // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *p_Length; // rdx
  unsigned __int16 v14; // r9
  NDIS_BIND_PROTOCOL_LINK *v15; // rax
  struct _NDIS_MINIPORT_BLOCK *v16; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      13,
      (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids);
  }
  v16 = 0LL;
  ndisReferenceMiniportByName(a1, &v16, 0, MPREF_PT_UNBINDNOTIFY);
  v6 = v16;
  if ( v16 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&v16->BindEngine);
    m_numElements = v6->Bindings.Protocols.m_numElements;
    for ( i = 0LL; ; ++i )
    {
      if ( i == m_numElements )
      {
        Ndis::BindEngine::EndPolicyUpdates(&v6->BindEngine);
        Ndis::BindEngine::ApplyBindChanges(&v6->BindEngine, RunSynchronous, 0);
        ndisDereferenceMiniport(v6, 0x30u);
        return;
      }
      if ( i >= v6->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = v6->Bindings.Protocols._p;
      if ( RtlEqualUnicodeString(&p[i].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->_UNICODE_STRING, a3, 1u) )
      {
        p_BindState = &p[i].__ptr_.__value_->BindState;
        if ( v4 == 1 )
        {
          if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            value = p[i].__ptr_.__value_;
            Miniport = value->BindState.Miniport;
            p_Length = &value->BindDriver._p->_t.Name.__ptr_.__value_->Length;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v14 = 14;
LABEL_17:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)p_Length,
                0x1Cu,
                v14,
                (struct _GUID *)&WPP_1554e880d08a3eb9ddfb9ea105b80242_Traceguids,
                p_Length,
                Miniport);
              continue;
            }
          }
        }
        else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          v15 = p[i].__ptr_.__value_;
          Miniport = v15->BindState.Miniport;
          p_Length = &v15->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 15;
            goto LABEL_17;
          }
        }
      }
    }
  }
}
