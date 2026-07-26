/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015F2C0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x140055460 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x140055480 (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x140059B80 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14005AB40 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x14005DE20 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400601E0 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006A4A0 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140085100 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140152680 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x140154100 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401541C0 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401543D0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x140154450 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401544B0 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401545F0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140154760 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140155620 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140155640 (-ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140155BA0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x140155F40 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14015E370 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FCE0 (-ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FD60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140164600 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this, const struct _GUID *a2)
{
  KPushLock *p_m_lock; // r13
  unsigned __int64 v3; // rbx
  __int64 v6; // rdx
  _NDIS_MINIPORT_BLOCK *m_miniport; // r14
  __int64 m_numElements; // r15
  __int64 value; // rsi
  _NDIS_MINIPORT_BLOCK *v10; // r8
  __int64 v11; // r14
  unsigned __int64 i; // rsi
  _NDIS_MINIPORT_BLOCK *v13; // r8
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  NDIS_BIND_FILTER_LINK *v15; // rbx
  __int64 v16; // r9
  _NDIS_MINIPORT_BLOCK *v17; // r8
  unsigned __int64 v18; // rsi
  unsigned int *p_m_numElements; // rdx
  __int64 v20; // r9
  __int64 v21; // r14
  unsigned int *v22; // r15
  _NDIS_MINIPORT_BLOCK *v23; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v24; // rax
  Ndis::BindState *p_BindState; // rcx
  struct NDIS_BIND_PROTOCOL_LINK **p_value; // rbx
  Ndis::BindState *v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v30; // rax
  struct NDIS_BIND_FILTER_LINK *v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 j; // rbx
  _NDIS_MINIPORT_BLOCK *v35; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v36; // rax
  struct NDIS_BIND_FILTER_LINK *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r14
  unsigned __int64 k; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v41; // rax
  NDIS_BIND_LINK_BASE *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rdx
  _NDIS_MINIPORT_BLOCK *v45; // r8
  unsigned __int64 m; // rbx
  NDIS_BIND_FILTER_LINK *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  _NDIS_MINIPORT_BLOCK *v50; // r15
  unsigned __int64 v51; // rbx
  __int64 v52; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v53; // rax
  __int64 v54; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v55; // r14
  __int64 v56; // rdx
  _NDIS_MINIPORT_BLOCK *v57; // r8
  _NDIS_MINIPORT_BLOCK *v59; // r8
  unsigned __int16 *p_Length; // rdx
  struct NDIS_BIND_PROTOCOL_LINK *v61; // rbx
  _NDIS_MINIPORT_BLOCK *v62; // r8
  KLockHolder v64; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v65[64]; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_RESTART_INFORMATION v66; // [rsp+A0h] [rbp-60h] BYREF

  p_m_lock = &this->m_lock;
  v3 = 0LL;
  *(_QWORD *)&v66.FilterInstanceBuffer.m_bufferSize = 0LL;
  v66.FilterInstanceBuffer._p = 0LL;
  memset(&v66, 0, 104);
  v64.m_Lock = &this->m_lock;
  memset(&v66.RssCaps, 0, sizeof(v66.RssCaps));
  memset(&v66.ProtocolParameters, 0, 60);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
  KeLeaveCriticalRegion();
  ndisMCheckForInitModeExit(this->m_miniport);
  KeEnterCriticalRegion();
  v64.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v64.m_State = Exclusive;
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
  {
    KLockHolder::~KLockHolder(&v64);
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
    return 1;
  }
  else
  {
    m_miniport = this->m_miniport;
    m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= m_miniport->Bindings.Protocols.m_numElements )
LABEL_90:
        __fastfail(5u);
      value = (__int64)m_miniport->Bindings.Protocols._p[v3].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)value) == BindingEnabled
        && *(_DWORD *)(value + 36)
        && *(_DWORD *)(value + 40) == 1 )
      {
        v10 = this->m_miniport;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
        LOBYTE(v6) = 1;
        BindingMetrics::Filter::Filter((__int64)v65, v6, (__int64)v10, value, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)value);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
          KLockHolder::~KLockHolder(&v64);
LABEL_67:
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
      }
      ++v3;
    }
    v11 = this->m_miniport->Bindings.Filters.m_numElements;
    for ( i = v11 - 1; ; --i )
    {
      v13 = this->m_miniport;
      if ( !v11 )
        break;
      if ( i >= v13->Bindings.Filters.m_numElements )
        goto LABEL_90;
      p = v13->Bindings.Filters._p;
      v15 = p[i].__ptr_.__value_;
      if ( (v15->BindState.PretendBindingActive || v15->BindState.m_bindContext.m_numElements)
        && v15->BindState.m_pauseReasons
        && v15->BindState.m_actualPauseState == DatapathRunning )
      {
        v16 = (__int64)p[i].__ptr_.__value_;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v15;
        LOBYTE(v6) = 1;
        BindingMetrics::Filter::Filter((__int64)v65, v6, (__int64)v13, v16, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseFilter(this->m_miniport, v15);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_77:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
          goto LABEL_66;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
      }
      --v11;
    }
    if ( v13->Bindings.Miniport.m_pauseReasons && v13->Bindings.Miniport.m_actualPauseState == DatapathRunning )
    {
      LOBYTE(v6) = 1;
      BindingMetrics::Miniport::Miniport((__int64)v65, v6, (__int64)v13, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMPauseMiniport(this->m_miniport);
      KeEnterCriticalRegion();
      v64.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v64.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v65);
LABEL_66:
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_67;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v65);
    }
    v17 = this->m_miniport;
    v18 = 0LL;
    p_m_numElements = &this->m_miniport->Bindings.Protocols.m_numElements;
    v20 = *p_m_numElements;
    while ( 1 )
    {
      v21 = v20;
      v22 = p_m_numElements;
      v23 = v17;
      if ( v18 == v20 )
        break;
      if ( v18 >= *p_m_numElements )
        goto LABEL_90;
      v24 = v17->Bindings.Protocols._p;
      p_BindState = &v24[v18].__ptr_.__value_->BindState;
      p_value = &v24[v18].__ptr_.__value_;
      if ( p_BindState->m_unbindReasons && Ndis::BindState::GetActualBindingState(p_BindState) == BindingEnabled )
      {
        if ( Ndis::BindState::SetSource(v27, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          p_Length = &(*p_value)->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)p_Length,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_5ba552c322ee33529412a828c3ecb581_Traceguids,
              p_Length,
              (*p_value)->BindState.Miniport);
        }
        v61 = *p_value;
        v62 = this->m_miniport;
        LOBYTE(p_Length) = 2;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v61;
        BindingMetrics::Filter::Filter((__int64)v65, (__int64)p_Length, (__int64)v62, (__int64)v61, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisUnbindProtocol(this->m_miniport, v61);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_75:
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
          goto LABEL_66;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
        v17 = v23;
        p_m_numElements = v22;
        v20 = v21;
      }
      ++v18;
    }
    v28 = this->m_miniport->Bindings.Filters.m_numElements;
    v29 = v28 - 1;
    while ( v28 )
    {
      if ( v29 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_90;
      v30 = this->m_miniport->Bindings.Filters._p;
      v31 = v30[v29].__ptr_.__value_;
      if ( v31->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v30[v29].__ptr_.__value_->BindState) == BindingEnabled )
      {
        LOBYTE(v32) = 5;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v31;
        BindingMetrics::Filter::Filter((__int64)v65, v32, v33, (__int64)v31, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisDetachFilter(this->m_miniport, v31);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_77;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
      }
      --v28;
      --v29;
    }
    for ( j = 0LL; ; ++j )
    {
      v35 = this->m_miniport;
      if ( j >= this->m_miniport->Bindings.Filters.m_numElements )
        break;
      v36 = v35->Bindings.Filters._p;
      v37 = v36[j].__ptr_.__value_;
      if ( !v37->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v36[j].__ptr_.__value_->BindState) == BindingDisabled )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v37;
        LOBYTE(v38) = 6;
        BindingMetrics::Filter::Filter((__int64)v65, v38, (__int64)v35, (__int64)v37, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisAttachFilter(this->m_miniport, v37);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_89:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
          KLockHolder::~KLockHolder(&v64);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
          return 1;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
      }
    }
    v39 = v35->Bindings.Protocols.m_numElements;
    for ( k = 0LL; k != v39; ++k )
    {
      if ( k >= v35->Bindings.Protocols.m_numElements )
        goto LABEL_90;
      v41 = v35->Bindings.Protocols._p;
      v42 = &v41[k].__ptr_.__value_->NDIS_BIND_LINK_BASE;
      if ( !v42->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v41[k].__ptr_.__value_->BindState) == BindingDisabled )
      {
        v59 = this->m_miniport;
        LOBYTE(v43) = 3;
        this->m_currentOperation = v42;
        BindingMetrics::Filter::Filter((__int64)v65, v43, (__int64)v59, (__int64)v42, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisBindProtocol(this->m_miniport, &v42->BindState);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
          KLockHolder::~KLockHolder(&v64);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
      }
    }
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    v45 = this->m_miniport;
    if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
      && v45->Bindings.Miniport.m_actualPauseState == DatapathPaused )
    {
      LOBYTE(v44) = 4;
      BindingMetrics::Miniport::Miniport((__int64)v65, v44, (__int64)v45, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMRestartMiniport(this->m_miniport, &v66);
      KeEnterCriticalRegion();
      v64.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v64.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v65);
        KLockHolder::~KLockHolder(&v64);
        NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
        return 1;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v65);
    }
    ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v66);
    for ( m = 0LL; m < this->m_miniport->Bindings.Filters.m_numElements; ++m )
    {
      v47 = this->m_miniport->Bindings.Filters._p[m].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState(&v47->BindState) == BindingEnabled
        && !v47->BindState.m_pauseReasons
        && v47->BindState.m_actualPauseState == DatapathPaused )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v47;
        LOBYTE(v48) = 4;
        BindingMetrics::Filter::Filter((__int64)v65, v48, v49, (__int64)v47, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartFilter(this->m_miniport, v47, &v66);
        KeEnterCriticalRegion();
        v64.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v64.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_89;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v65);
      }
    }
    ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v66);
    v50 = this->m_miniport;
    v51 = 0LL;
    v52 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v51 != v52 )
    {
      if ( v51 >= v50->Bindings.Protocols.m_numElements )
        goto LABEL_90;
      v53 = v50->Bindings.Protocols._p;
      v54 = (__int64)v53[v51].__ptr_.__value_;
      v55 = &v53[v51];
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)v54) == BindingEnabled
        && !*(_DWORD *)(v54 + 36)
        && !*(_DWORD *)(v54 + 40) )
      {
        v57 = this->m_miniport;
        LOBYTE(v56) = 4;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v54;
        BindingMetrics::Filter::Filter((__int64)v65, v56, (__int64)v57, v54, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)v54, &v66);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_75;
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v65);
        v56 = 0LL;
      }
      ++v51;
      v55->__ptr_.__value_->BindState.m_AdditionalContext = (void *)v56;
    }
    ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v66);
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
    Ndis::BindStack::GarbageCollectDeadBindings(&this->m_miniport->Bindings);
    ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
    KeLeaveCriticalRegion();
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v66);
    return 0;
  }
}
