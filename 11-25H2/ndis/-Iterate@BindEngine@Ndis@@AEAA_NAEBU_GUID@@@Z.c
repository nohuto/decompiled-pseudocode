/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015DC00 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400591E0 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x140070590 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x1400705B0 (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x140074800 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400756B0 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x140079940 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x14007C110 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x140086100 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015E3B0 (-ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015E430 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015EFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015F380 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x140160970 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160A30 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x140160C40 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x140160CC0 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160D20 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140160E60 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140160FD0 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x140161E90 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140161EB0 (-ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140161F20 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140162410 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1401627B0 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14016B2C0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140170380 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int64 i; // rsi
  _NDIS_MINIPORT_BLOCK *v16; // r8
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  NDIS_BIND_FILTER_LINK *v18; // rbx
  __int64 v19; // r9
  _NDIS_MINIPORT_BLOCK *v20; // r8
  unsigned __int64 v21; // rsi
  unsigned int *p_m_numElements; // rdx
  __int64 v23; // r9
  __int64 v24; // r14
  unsigned int *v25; // r15
  _NDIS_MINIPORT_BLOCK *v26; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v27; // rax
  Ndis::BindState *p_BindState; // rcx
  struct NDIS_BIND_PROTOCOL_LINK **p_value; // rbx
  Ndis::BindState *v30; // rcx
  __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v33; // rax
  struct NDIS_BIND_FILTER_LINK *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 j; // rbx
  _NDIS_MINIPORT_BLOCK *v38; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v39; // rax
  struct NDIS_BIND_FILTER_LINK *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r14
  unsigned __int64 k; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v44; // rax
  NDIS_BIND_LINK_BASE *v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rdx
  _NDIS_MINIPORT_BLOCK *v48; // r8
  unsigned __int64 m; // rbx
  NDIS_BIND_FILTER_LINK *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r8
  _NDIS_MINIPORT_BLOCK *v53; // r15
  unsigned __int64 v54; // rbx
  __int64 v55; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v56; // rax
  __int64 v57; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v58; // r14
  __int64 v59; // rdx
  _NDIS_MINIPORT_BLOCK *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  _NDIS_MINIPORT_BLOCK *v71; // r8
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int16 *p_Length; // rdx
  struct NDIS_BIND_PROTOCOL_LINK *v76; // rbx
  _NDIS_MINIPORT_BLOCK *v77; // r8
  __int64 v78; // r8
  KLockHolder v80; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v81[64]; // [rsp+60h] [rbp-A0h] BYREF
  struct NDIS_RESTART_INFORMATION v82; // [rsp+A0h] [rbp-60h] BYREF

  p_m_lock = &this->m_lock;
  v3 = 0LL;
  *(_QWORD *)&v82.FilterInstanceBuffer.m_bufferSize = 0LL;
  v82.FilterInstanceBuffer._p = 0LL;
  memset(&v82, 0, 104);
  v80.m_Lock = &this->m_lock;
  memset(&v82.RssCaps, 0, sizeof(v82.RssCaps));
  memset(&v82.ProtocolParameters, 0, 60);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
  KeLeaveCriticalRegion();
  ndisMCheckForInitModeExit(this->m_miniport);
  KeEnterCriticalRegion();
  v80.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v80.m_State = Exclusive;
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
  {
    KLockHolder::~KLockHolder(&v80);
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
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
        BindingMetrics::Filter::Filter((__int64)v81, v6, (__int64)v10, value, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)value);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v11, v12, v13);
          KLockHolder::~KLockHolder(&v80);
LABEL_67:
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v11, v12, v13);
      }
      ++v3;
    }
    v14 = this->m_miniport->Bindings.Filters.m_numElements;
    for ( i = v14 - 1; ; --i )
    {
      v16 = this->m_miniport;
      if ( !v14 )
        break;
      if ( i >= v16->Bindings.Filters.m_numElements )
        goto LABEL_90;
      p = v16->Bindings.Filters._p;
      v18 = p[i].__ptr_.__value_;
      if ( (v18->BindState.PretendBindingActive || v18->BindState.m_bindContext.m_numElements)
        && v18->BindState.m_pauseReasons
        && v18->BindState.m_actualPauseState == DatapathRunning )
      {
        v19 = (__int64)p[i].__ptr_.__value_;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v18;
        LOBYTE(v6) = 1;
        BindingMetrics::Filter::Filter((__int64)v81, v6, (__int64)v16, v19, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisPauseFilter(this->m_miniport, v18);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_77:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
          goto LABEL_66;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
      }
      --v14;
    }
    if ( v16->Bindings.Miniport.m_pauseReasons && v16->Bindings.Miniport.m_actualPauseState == DatapathRunning )
    {
      LOBYTE(v6) = 1;
      BindingMetrics::Miniport::Miniport((__int64)v81, v6, (__int64)v16, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMPauseMiniport(this->m_miniport);
      KeEnterCriticalRegion();
      v80.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v80.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v81, v64, v65, v66);
LABEL_66:
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_67;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v81, v64, v65, v66);
    }
    v20 = this->m_miniport;
    v21 = 0LL;
    p_m_numElements = &this->m_miniport->Bindings.Protocols.m_numElements;
    v23 = *p_m_numElements;
    while ( 1 )
    {
      v24 = v23;
      v25 = p_m_numElements;
      v26 = v20;
      if ( v21 == v23 )
        break;
      if ( v21 >= *p_m_numElements )
        goto LABEL_90;
      v27 = v20->Bindings.Protocols._p;
      p_BindState = &v27[v21].__ptr_.__value_->BindState;
      p_value = &v27[v21].__ptr_.__value_;
      if ( p_BindState->m_unbindReasons && Ndis::BindState::GetActualBindingState(p_BindState) == BindingEnabled )
      {
        if ( Ndis::BindState::SetSource(v30, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_140126C63 >= 4u )
        {
          p_Length = &(*p_value)->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)p_Length,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_2e89932a50af35deab5418396cb84628_Traceguids,
              p_Length,
              (*p_value)->BindState.Miniport);
        }
        v76 = *p_value;
        v77 = this->m_miniport;
        LOBYTE(p_Length) = 2;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v76;
        BindingMetrics::Filter::Filter((__int64)v81, (__int64)p_Length, (__int64)v77, (__int64)v76, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisUnbindProtocol(this->m_miniport, v76);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_75:
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v61, v62, v63);
          goto LABEL_66;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v61, v62, v63);
        v20 = v26;
        p_m_numElements = v25;
        v23 = v24;
      }
      ++v21;
    }
    v31 = this->m_miniport->Bindings.Filters.m_numElements;
    v32 = v31 - 1;
    while ( v31 )
    {
      if ( v32 >= this->m_miniport->Bindings.Filters.m_numElements )
        goto LABEL_90;
      v33 = this->m_miniport->Bindings.Filters._p;
      v34 = v33[v32].__ptr_.__value_;
      if ( v34->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v33[v32].__ptr_.__value_->BindState) == BindingEnabled )
      {
        LOBYTE(v35) = 5;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v34;
        BindingMetrics::Filter::Filter((__int64)v81, v35, v36, (__int64)v34, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisDetachFilter(this->m_miniport, v34);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_77;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
      }
      --v31;
      --v32;
    }
    for ( j = 0LL; ; ++j )
    {
      v38 = this->m_miniport;
      if ( j >= this->m_miniport->Bindings.Filters.m_numElements )
        break;
      v39 = v38->Bindings.Filters._p;
      v40 = v39[j].__ptr_.__value_;
      if ( !v40->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v39[j].__ptr_.__value_->BindState) == BindingDisabled )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v40;
        LOBYTE(v41) = 6;
        BindingMetrics::Filter::Filter((__int64)v81, v41, (__int64)v38, (__int64)v40, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisAttachFilter(this->m_miniport, v40, v78);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
LABEL_89:
          BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
          KLockHolder::~KLockHolder(&v80);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
          return 1;
        }
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
      }
    }
    v42 = v38->Bindings.Protocols.m_numElements;
    for ( k = 0LL; k != v42; ++k )
    {
      if ( k >= v38->Bindings.Protocols.m_numElements )
        goto LABEL_90;
      v44 = v38->Bindings.Protocols._p;
      v45 = &v44[k].__ptr_.__value_->NDIS_BIND_LINK_BASE;
      if ( !v45->BindState.m_unbindReasons
        && Ndis::BindState::GetActualBindingState(&v44[k].__ptr_.__value_->BindState) == BindingDisabled )
      {
        v71 = this->m_miniport;
        LOBYTE(v46) = 3;
        this->m_currentOperation = v45;
        BindingMetrics::Filter::Filter((__int64)v81, v46, (__int64)v71, (__int64)v45, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisBindProtocol(this->m_miniport, &v45->BindState);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
        {
          BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v72, v73, v74);
          KLockHolder::~KLockHolder(&v80);
          NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
          return 1;
        }
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v72, v73, v74);
      }
    }
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    v48 = this->m_miniport;
    if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
      && v48->Bindings.Miniport.m_actualPauseState == DatapathPaused )
    {
      LOBYTE(v47) = 4;
      BindingMetrics::Miniport::Miniport((__int64)v81, v47, (__int64)v48, (__int64)a2);
      ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
      KeLeaveCriticalRegion();
      ndisMRestartMiniport(this->m_miniport, &v82);
      KeEnterCriticalRegion();
      v80.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
      v80.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
      {
        BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v81, v68, v69, v70);
        KLockHolder::~KLockHolder(&v80);
        NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
        return 1;
      }
      BindingMetrics::Miniport::~Miniport((BindingMetrics::Miniport *)v81, v68, v69, v70);
    }
    ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v82);
    for ( m = 0LL; m < this->m_miniport->Bindings.Filters.m_numElements; ++m )
    {
      v50 = this->m_miniport->Bindings.Filters._p[m].__ptr_.__value_;
      if ( Ndis::BindState::GetActualBindingState(&v50->BindState) == BindingEnabled
        && !v50->BindState.m_pauseReasons
        && v50->BindState.m_actualPauseState == DatapathPaused )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v50;
        LOBYTE(v51) = 4;
        BindingMetrics::Filter::Filter((__int64)v81, v51, v52, (__int64)v50, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartFilter(this->m_miniport, v50, &v82);
        KeEnterCriticalRegion();
        v80.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        v80.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_89;
        BindingMetrics::Filter::~Filter((BindingMetrics::Filter *)v81);
      }
    }
    ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v82);
    v53 = this->m_miniport;
    v54 = 0LL;
    v55 = this->m_miniport->Bindings.Protocols.m_numElements;
    while ( v54 != v55 )
    {
      if ( v54 >= v53->Bindings.Protocols.m_numElements )
        goto LABEL_90;
      v56 = v53->Bindings.Protocols._p;
      v57 = (__int64)v56[v54].__ptr_.__value_;
      v58 = &v56[v54];
      if ( Ndis::BindState::GetActualBindingState((Ndis::BindState *)v57) == BindingEnabled
        && !*(_DWORD *)(v57 + 36)
        && !*(_DWORD *)(v57 + 40) )
      {
        v60 = this->m_miniport;
        LOBYTE(v59) = 4;
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v57;
        BindingMetrics::Filter::Filter((__int64)v81, v59, (__int64)v60, v57, (__int64)a2);
        ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)v57, &v82);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_75;
        BindingMetrics::Protocol::~Protocol((BindingMetrics::Protocol *)v81, v61, v62, v63);
        v59 = 0LL;
      }
      ++v54;
      v58->__ptr_.__value_->BindState.m_AdditionalContext = (void *)v59;
    }
    ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v82);
    ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
    Ndis::BindStack::GarbageCollectDeadBindings(&this->m_miniport->Bindings);
    ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
    KeLeaveCriticalRegion();
    NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v82);
    return 0;
  }
}
