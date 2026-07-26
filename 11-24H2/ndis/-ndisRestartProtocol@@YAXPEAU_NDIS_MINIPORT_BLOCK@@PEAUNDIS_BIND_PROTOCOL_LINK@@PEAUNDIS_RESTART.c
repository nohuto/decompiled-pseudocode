/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x140052BB0 (WPP_RECORDER_SF_Zqq.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x140055770 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_ZqD @ 0x14005C510 (WPP_RECORDER_SF_ZqD.c)
 *     ?ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14005D620 (-ndisInitializeMiniportRestartAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMAT.c)
 *     WPP_RECORDER_SF_LZq @ 0x1400A084C (WPP_RECORDER_SF_LZq.c)
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140155A50 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14015E370 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016BDD0 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rdi
  __int64 m_numElements; // rsi
  unsigned __int64 i; // rdi
  struct _NDIS_OPEN_BLOCK *v9; // r15
  KPushLock *p_m_lock; // rdi
  int v11; // esi
  __int64 v12; // r8
  int v13; // r8d
  unsigned int m_unbindReasons; // edx
  bool v15; // cf
  int v16; // [rsp+20h] [rbp-48h]
  _NDIS_MINIPORT_BLOCK *Miniport; // [rsp+30h] [rbp-38h]

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      v9 = (struct _NDIS_OPEN_BLOCK *)a2->BindState.m_bindContext._p[i];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x14u,
          (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
      ndisRestartProtocolInner(v9, a3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x15u,
          (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v9);
    }
    p_m_lock = &a1->BindEngine.m_lock;
LABEL_13:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathRunning;
    goto LABEL_14;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x1Cu,
      0x16u,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  v11 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Miniport = a2->BindState.Miniport;
    WPP_RECORDER_SF_ZqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2->BindDriver._p,
      v12,
      0x17u,
      v16,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length);
  }
  p_m_lock = &a1->BindEngine.m_lock;
  if ( !v11 )
    goto LABEL_13;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  Rtl::KArray<void *,1>::resize((__int64)&a2->BindState.m_bindContext);
  m_unbindReasons = a2->BindState.m_unbindReasons;
  a2->BindState.m_LastErrorCode = v11;
  a2->BindState.m_unbindReasons = m_unbindReasons | 4;
  if ( !m_unbindReasons || !a2->BindState.Miniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LODWORD(Miniport) = m_unbindReasons | 4;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xEu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        m_unbindReasons,
        Miniport);
    }
    v15 = (unsigned __int8)byte_14011CBA3 < 4u;
    a2->BindState.Miniport->BindEngine.m_isDirty = 1;
    if ( !v15 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
        v13,
        0x18u,
        (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
        v11,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        a2->BindState.Miniport);
  }
  if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
    && (unsigned __int8)byte_14011CBA3 >= 4u
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Zq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
      0x1Cu,
      0x19u,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
      a2->BindState.Miniport);
  }
LABEL_14:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
