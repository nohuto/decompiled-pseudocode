/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140010844
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x14007C57C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x140083444 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1400A1114 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // r14
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  _LIST_ENTRY *p_m_DriverOwned; // r14
  unsigned __int8 v13; // al
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // r14
  FxIoQueue *j; // rcx
  unsigned int v23; // r15d
  unsigned int v24; // edx
  unsigned __int8 v25; // dl
  WDFREQUEST__ *v26; // r8
  WDFQUEUE__ *v27; // rdx
  __int64 v28; // r8
  _LIST_ENTRY *v29; // rcx
  _LIST_ENTRY *v30; // rax
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  char v33; // r14
  unsigned __int8 v34; // cl
  unsigned __int8 FxVerboseOn; // al
  unsigned __int16 v36; // r9
  int v37; // ecx
  unsigned __int8 v38; // al
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v41; // rcx
  FxTagTracker *v42; // rcx
  FxVerifierLock *v43; // rcx
  unsigned __int16 v44; // r9
  unsigned __int64 v45; // rdx
  void *v46; // rdx
  const void *v47; // rcx
  _LIST_ENTRY *v48; // rdx
  _LIST_ENTRY *Blink; // rdx
  FxIoQueueIoStop m_IoStop; // xmm0
  FxIoQueue *i; // rcx
  unsigned int v52; // r15d
  void *v53; // rdx
  const void *v54; // rcx
  WDFREQUEST__ *v55; // r8
  WDFQUEUE__ *v56; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v58; // rbx
  _LIST_ENTRY *v59; // rdx
  _LIST_ENTRY *v60; // rdx
  void *v61; // rdx
  const void *v62; // rcx
  WDFREQUEST__ *v63; // r8
  WDFQUEUE__ *v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int16 v66; // ax
  const void *v67; // rbx
  _LIST_ENTRY *v68; // rdx
  _LIST_ENTRY *v69; // rax
  _LIST_ENTRY *v70; // rax
  _LIST_ENTRY *v71; // rax
  unsigned __int16 v72; // r9
  const void *v73; // rcx
  unsigned __int16 v74; // ax
  const void *v75; // rbx
  unsigned int RefCount[2]; // [rsp+28h] [rbp-38h]
  void *_a2; // [rsp+30h] [rbp-30h]
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+50h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState <= FxIoQueuePowerPurgeNotifyingDriver )
  {
    if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
    {
      p_m_PowerNotify = &this->m_PowerNotify;
      Flink = this->m_PowerNotify.Flink;
      if ( Flink == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
        return 1;
      }
      if ( Flink->Blink == p_m_PowerNotify )
      {
        v48 = Flink->Flink;
        if ( Flink->Flink->Blink == Flink )
        {
          p_m_PowerNotify->Flink = v48;
          v48->Blink = p_m_PowerNotify;
          Blink = this->m_PowerDriverNotified.Blink;
          if ( Blink->Flink == &this->m_PowerDriverNotified )
          {
            Flink->Flink = &this->m_PowerDriverNotified;
            v21 = Flink - 19;
            Flink->Blink = Blink;
            Blink->Flink = Flink;
            this->m_PowerDriverNotified.Blink = Flink;
            m_IoStop = this->m_IoStop;
            BYTE1(Flink[3].Flink) = 0;
            resumeCallback = (FxIoQueueIoResume)m_IoStop;
            if ( !_mm_srli_si128((__m128i)m_IoStop, 8).m128i_u64[0] || HIBYTE(v21[13].Flink) )
              return 1;
            for ( i = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
                  i != (FxIoQueue *)&this->m_DriverCancelable;
                  i = (FxIoQueue *)i->FxNonPagedObject::FxObject::__vftable )
            {
              if ( i[-1].m_IoPkgListNode.m_ListEntry.Blink == (_LIST_ENTRY *)&v21[7].Blink )
              {
                v52 = 268435458;
                goto LABEL_92;
              }
            }
            v52 = 2;
LABEL_92:
            if ( m_Globals->FxVerboseOn )
            {
              if ( WORD1(v21->Blink) )
                v53 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v53 = 0LL;
              _a2 = v53;
              v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v54 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v54, _a2);
            }
            FxObject::AddRef(
              (FxObject *)v21,
              (void *)0x646C6F48,
              5361,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Unlock(this, *PreviousIrql);
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::SetVerifierFlags((FxRequestBase *)v21, 512);
            if ( WORD1(v21->Blink) )
              v55 = (WDFREQUEST__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v55 = 0LL;
            v56 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v56 = 0LL;
            FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v56, v55, v52);
            v28 = 5371LL;
            goto LABEL_36;
          }
        }
      }
      goto LABEL_66;
    }
    v14 = m_PowerState - 3;
    if ( !v14 )
    {
      if ( this->m_Dispatching == 1 )
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
      return 0;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      FxVerboseOn = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !FxVerboseOn )
          return 1;
        v36 = 87;
        goto LABEL_137;
      }
      if ( FxVerboseOn )
      {
        v44 = 86;
LABEL_132:
        v65 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v65 = 0LL;
        *(_QWORD *)RefCount = v65;
LABEL_135:
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v44, WPP_FxIoQueue_cpp_Traceguids, *(const void **)RefCount);
      }
LABEL_60:
      v41 = p_m_DriverOwned->Flink;
      this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
      this->m_PowerNotify.Flink = v41;
      v41->Blink = &this->m_PowerNotify;
      this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
      p_m_DriverOwned->Blink = p_m_DriverOwned;
      p_m_DriverOwned->Flink = p_m_DriverOwned;
      return 1;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v17 = &this->m_PowerNotify;
      v18 = this->m_PowerNotify.Flink;
      if ( v18 == &this->m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
        return 1;
      }
      if ( v18->Blink == v17 )
      {
        v19 = v18->Flink;
        if ( v18->Flink->Blink == v18 )
        {
          v17->Flink = v19;
          v19->Blink = v17;
          v20 = this->m_PowerDriverNotified.Blink;
          if ( v20->Flink == &this->m_PowerDriverNotified )
          {
            v18->Flink = &this->m_PowerDriverNotified;
            v21 = v18 - 19;
            v18->Blink = v20;
            v20->Flink = v18;
            this->m_PowerDriverNotified.Blink = v18;
            resumeCallback = (FxIoQueueIoResume)this->m_IoStop;
            if ( !this->m_IoStop.Method || HIBYTE(v21[13].Flink) )
              return 1;
            for ( j = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
                  ;
                  j = (FxIoQueue *)j->FxNonPagedObject::FxObject::__vftable )
            {
              if ( j == (FxIoQueue *)&this->m_DriverCancelable )
              {
                v23 = 1;
                goto LABEL_25;
              }
              if ( j[-1].m_IoPkgListNode.m_ListEntry.Blink == (_LIST_ENTRY *)&v21[7].Blink )
                break;
            }
            v23 = 268435457;
LABEL_25:
            if ( m_Globals->FxVerboseOn )
            {
              if ( WORD1(v21->Blink) )
                v46 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v46 = 0LL;
              _a2 = v46;
              v47 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v47 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v47, _a2);
            }
            v24 = _InterlockedIncrement((volatile signed __int32 *)&v21->Blink + 1);
            if ( SLOBYTE(v21[1].Blink) < 0 )
            {
              v42 = (FxTagTracker *)v21[-3].Flink;
              if ( v42 )
                FxTagTracker::UpdateTagHistory(
                  v42,
                  (void *)0x646C6F48,
                  5279,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                  TagAddRef,
                  v24);
            }
            v25 = *PreviousIrql;
            if ( SLOBYTE(this->m_ObjectFlags) < 0
              && (v43 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Unlock(v43, v25, a3);
            }
            else
            {
              KeReleaseSpinLock(&this->m_NPLock.m_Lock, v25);
            }
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::SetVerifierFlags((FxRequestBase *)v21, 512);
            if ( WORD1(v21->Blink) )
              v26 = (WDFREQUEST__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v26 = 0LL;
            v27 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v27 = 0LL;
            FxIoQueueIoStop::Invoke((FxIoQueueIoStop *)&resumeCallback, v27, v26, v23);
            v28 = 5289LL;
            goto LABEL_36;
          }
        }
      }
      goto LABEL_66;
    }
    v37 = v16 - 1;
    if ( v37 )
    {
      if ( v37 != 1 )
        return 0;
      *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      v38 = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !v38 )
          return 1;
        v36 = 89;
        goto LABEL_137;
      }
      if ( v38 )
      {
        v44 = 88;
        v45 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v45 = 0LL;
        *(_QWORD *)RefCount = v45;
        goto LABEL_135;
      }
      goto LABEL_60;
    }
  }
  else
  {
    v8 = m_PowerState - 9;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            if ( m_Globals->FxVerboseOn )
            {
              m_ObjectSize = this->m_ObjectSize;
              v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_ObjectSize )
                v58 = 0LL;
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v58);
            }
            *p_m_PowerState = FxIoQueuePowerOn;
          }
          return 0;
        }
        v29 = &this->m_PowerNotify;
        v30 = this->m_PowerNotify.Flink;
        if ( v30 == &this->m_PowerNotify )
        {
          *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
          return 1;
        }
        if ( v30->Blink == v29 )
        {
          v59 = v30->Flink;
          if ( v30->Flink->Blink == v30 )
          {
            v29->Flink = v59;
            v59->Blink = v29;
            v60 = this->m_DriverOwned.Blink;
            if ( v60->Flink == &this->m_DriverOwned )
            {
              v30->Flink = &this->m_DriverOwned;
              v21 = v30 - 19;
              v30->Blink = v60;
              v60->Flink = v30;
              this->m_DriverOwned.Blink = v30;
              resumeCallback = this->m_IoResume;
              if ( this->m_IoResume.Method && !HIBYTE(v21[13].Flink) )
              {
                if ( m_Globals->FxVerboseOn )
                {
                  if ( WORD1(v21->Blink) )
                    v61 = (void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v61 = 0LL;
                  _a2 = v61;
                  v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !this->m_ObjectSize )
                    v62 = 0LL;
                  WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v62, _a2);
                }
                FxObject::AddRef(
                  (FxObject *)v21,
                  (void *)0x646C6F48,
                  5602,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxNonPagedObject::Unlock(this, *PreviousIrql);
                if ( WORD1(v21->Blink) )
                  v63 = (WDFREQUEST__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v63 = 0LL;
                v64 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v64 = 0LL;
                FxIoQueueIoResume::Invoke(&resumeCallback, v64, v63);
                v28 = 5608LL;
LABEL_36:
                ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v21->Flink[1].Flink)(
                  v21,
                  1684827976LL,
                  v28,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
                FxNonPagedObject::Lock(this, PreviousIrql);
                return 1;
              }
              if ( !m_Globals->FxVerboseOn )
                return 1;
              v36 = 99;
LABEL_137:
              v66 = this->m_ObjectSize;
              v67 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v66 )
                v67 = 0LL;
              WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v36, WPP_FxIoQueue_cpp_Traceguids, v67);
              return 1;
            }
          }
        }
LABEL_66:
        __fastfail(3u);
      }
      *p_m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      p_m_DriverOwned = &this->m_DriverOwned;
      v13 = m_Globals->FxVerboseOn;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !v13 )
          return 1;
        v36 = 97;
        goto LABEL_137;
      }
      if ( v13 )
      {
        v44 = 96;
        goto LABEL_132;
      }
      goto LABEL_60;
    }
  }
  v31 = this->m_PowerDriverNotified.Flink;
  acknowledgedList.Blink = &acknowledgedList;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  v33 = 0;
  if ( v31 != &this->m_PowerDriverNotified )
  {
    while ( 1 )
    {
      v68 = v31->Flink;
      if ( (unsigned __int8)(BYTE1(v31[3].Flink) - 1) <= 1u )
      {
        if ( v68->Blink != v31 )
          goto LABEL_66;
        v69 = v31->Blink;
        if ( v69->Flink != v31 )
          goto LABEL_66;
        v69->Flink = v68;
        v68->Blink = v69;
        v70 = acknowledgedList.Blink;
        if ( acknowledgedList.Blink->Flink != &acknowledgedList )
          goto LABEL_66;
        v31->Blink = acknowledgedList.Blink;
        v31->Flink = &acknowledgedList;
        v70->Flink = v31;
        acknowledgedList.Blink = v31;
      }
      v31 = v68;
      if ( v68 == &this->m_PowerDriverNotified )
        goto LABEL_146;
    }
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    if ( p_acknowledgedList->Blink != &acknowledgedList )
      goto LABEL_66;
    v71 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Flink->Blink != p_acknowledgedList )
      goto LABEL_66;
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v71->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql);
    v33 = 1;
LABEL_146:
    p_acknowledgedList = acknowledgedList.Flink;
  }
  if ( this->m_PowerDriverNotified.Flink == &this->m_PowerDriverNotified )
  {
    if ( this->m_TwoPhaseCompletions )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v72 = 93;
LABEL_159:
        v74 = this->m_ObjectSize;
        v75 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v74 )
          v75 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v72, WPP_FxIoQueue_cpp_Traceguids, v75);
      }
    }
    else
    {
      v34 = m_Globals->FxVerboseOn;
      if ( this->m_Dispatching == 1 )
      {
        if ( v34 )
        {
          v73 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v73 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v73);
        }
        this->m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( v34 )
      {
        v72 = 95;
        goto LABEL_159;
      }
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v72 = 92;
    goto LABEL_159;
  }
  return v33;
}
