/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140160FD0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1400708E0 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_ZqD @ 0x1400765E0 (WPP_RECORDER_SF_ZqD.c)
 *     WPP_RECORDER_SF_LZq @ 0x1400A8CB8 (WPP_RECORDER_SF_LZq.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x140165C10 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14016B2C0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, Ndis::BindState *this)
{
  void *m_AdditionalContext; // rcx
  struct _NDIS_PROTOCOL_BLOCK *v5; // rsi
  __int64 v6; // r8
  int v7; // r14d
  KPushLock *p_m_lock; // rbp
  int v9; // ecx
  unsigned int m_pauseReasons; // r8d
  unsigned int v11; // edx
  bool v12; // cf
  int v13; // eax
  _NDIS_MINIPORT_BLOCK *v14; // rcx
  unsigned __int16 *v15; // rdx
  unsigned __int16 v16; // r9
  int v17; // edx
  int v18; // [rsp+20h] [rbp-38h]
  _NDIS_MINIPORT_BLOCK *Miniport; // [rsp+30h] [rbp-28h]

  m_AdditionalContext = this[1].m_AdditionalContext;
  v5 = (struct _NDIS_PROTOCOL_BLOCK *)*((_QWORD *)m_AdditionalContext + 5);
  if ( v5->MajorNdisVersion < 6u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)this,
        0x1Cu,
        0x20u,
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
        *((unsigned __int16 **)m_AdditionalContext + 3),
        this->Miniport);
    this->PretendBindingActive = 1;
    p_m_lock = &a1->BindEngine.m_lock;
  }
  else
  {
    *((_BYTE *)m_AdditionalContext + 1) = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)this,
        0x1Cu,
        0x1Eu,
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
        *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    v7 = ndisBindNdis6Protocol(a1, v5);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      Miniport = this->Miniport;
      WPP_RECORDER_SF_ZqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)this[1].m_AdditionalContext,
        v6,
        0x1Fu,
        v18,
        *((unsigned __int16 **)this[1].m_AdditionalContext + 3));
    }
    p_m_lock = &a1->BindEngine.m_lock;
    if ( v7 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
      Rtl::KArray<void *,1>::resize((__int64)&this->m_bindContext);
      this->m_LastErrorCode = v7;
      if ( Ndis::BindState::SetBinding(this, BindingDisabled, Reason_LastBindAttemptFailed)
        && (unsigned __int8)byte_140126C63 >= 4u
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_LZq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          *((_QWORD *)this[1].m_AdditionalContext + 3),
          0x21u,
          (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
          v7,
          *((unsigned __int16 **)this[1].m_AdditionalContext + 3),
          this->Miniport);
      }
      if ( Ndis::BindState::SetSource(this, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_140126C63 >= 4u )
      {
        v14 = this->Miniport;
        v15 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = 34;
          goto LABEL_36;
        }
      }
      goto LABEL_10;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v9 = 0;
  m_pauseReasons = this->m_pauseReasons;
  v11 = m_pauseReasons & 0xFFFFFFFE;
  v12 = v5->MajorNdisVersion < 6u;
  this->m_pauseReasons = m_pauseReasons & 0xFFFFFFFE;
  v13 = 0;
  if ( v12 )
  {
    LOBYTE(v13) = v11 != 0;
    LOBYTE(v9) = m_pauseReasons != 0;
    if ( v9 != v13 || !this->Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LODWORD(Miniport) = m_pauseReasons & 0xFFFFFFFE;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          m_pauseReasons,
          Miniport);
      }
      v12 = (unsigned __int8)byte_140126C63 < 4u;
      this->Miniport->BindEngine.m_isDirty = 1;
      if ( !v12 )
      {
        v14 = this->Miniport;
        v15 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = 36;
          goto LABEL_36;
        }
      }
    }
  }
  else
  {
    LOBYTE(v13) = v11 != 0;
    LOBYTE(v9) = m_pauseReasons != 0;
    if ( v9 != v13 || !this->Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LODWORD(Miniport) = m_pauseReasons & 0xFFFFFFFE;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          m_pauseReasons,
          Miniport);
      }
      v12 = (unsigned __int8)byte_140126C63 < 4u;
      this->Miniport->BindEngine.m_isDirty = 1;
      if ( !v12 )
      {
        v14 = this->Miniport;
        v15 = (unsigned __int16 *)*((_QWORD *)this[1].m_AdditionalContext + 3);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v16 = 35;
LABEL_36:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v15,
            0x1Cu,
            v16,
            (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
            v15,
            v14);
        }
      }
    }
  }
LABEL_10:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
