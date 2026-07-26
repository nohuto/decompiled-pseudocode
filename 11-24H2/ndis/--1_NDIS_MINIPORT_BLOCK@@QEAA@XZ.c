/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140072950
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140059E80 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x140073DE0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140153320 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1401657E0 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x140165FA0 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ??1KnobNamespace@@QEAA@XZ @ 0x1401674A0 (--1KnobNamespace@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  TriageData *value; // rbx
  NdisWdfIdle *v3; // r14
  struct SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rbx
  KIRQL v5; // bp
  int v6; // eax
  bool v7; // r15
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  unsigned __int8 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  char v12; // cl
  unsigned __int8 v13; // cl
  char v14; // r9
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  __int16 v17; // r8
  __int64 v18; // rax
  void (__fastcall *v19)(_QWORD, _QWORD); // rax
  char v20; // al
  KnobDescriptor *p; // rcx
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v23; // rcx
  NDISWATCHDOG__ *v24; // rcx
  Rtl::KString *v25; // rcx
  Rtl::KString *v26; // rcx

  value = this->Triage.__ptr_.__value_;
  this->Triage.__ptr_.__value_ = 0LL;
  if ( value )
  {
    ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
    ExFreePoolWithTag(value, 0);
  }
  v3 = this->IdleSm.__ptr_.__value_;
  this->IdleSm.__ptr_.__value_ = 0LL;
  if ( v3 )
  {
    m_impl = v3->m_engine.m_impl;
    if ( !v3->m_engine.m_impl )
    {
LABEL_43:
      ExFreePoolWithTag(v3, 0);
      goto LABEL_44;
    }
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v5;
    v6 = *((_DWORD *)m_impl + 248);
    if ( v6 == 5 )
    {
      if ( *((_WORD *)m_impl + 440) == 1 )
      {
        v8 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
        if ( v8 )
          v8(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 4LL));
        *((_WORD *)m_impl + 440) = 0;
        goto LABEL_11;
      }
      v7 = 0;
    }
    else
    {
      v7 = v6 == 1;
    }
    switch ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 6LL) )
    {
      case 1:
        v15 = *((unsigned __int8 *)m_impl + 979);
        v12 = (v15 + 1) & 0xF;
        if ( v12 == *((_BYTE *)m_impl + 978) )
          goto LABEL_40;
        break;
      case 2:
        v13 = *((_BYTE *)m_impl + 978);
        v14 = 0;
        LOBYTE(v15) = *((_BYTE *)m_impl + 979);
        v16 = v13;
        if ( v13 != (_BYTE)v15 )
        {
          do
          {
            v17 = *((_WORD *)m_impl + v13 + 416);
            if ( v17 == 1 )
            {
              v14 = 1;
            }
            else
            {
              v18 = v16;
              v16 = (v16 + 1) & 0xF;
              *((_WORD *)m_impl + v18 + 416) = v17;
            }
            LOBYTE(v15) = *((_BYTE *)m_impl + 979);
            v13 = (v13 + 1) & 0xF;
          }
          while ( v13 != (_BYTE)v15 );
          if ( v14 )
          {
            *((_WORD *)m_impl + (((unsigned __int8)v15 - 1) & 0xF) + 416) = 1;
            goto LABEL_38;
          }
        }
        v12 = (v15 + 1) & 0xF;
        if ( v12 == *((_BYTE *)m_impl + 978) )
          goto LABEL_40;
        v15 = (unsigned __int8)v15;
        break;
      case 3:
        v9 = *((_BYTE *)m_impl + 978);
        v10 = *((unsigned __int8 *)m_impl + 979);
        v11 = v9;
        if ( v9 != (_BYTE)v10 )
        {
          while ( *((_WORD *)m_impl + v11 + 416) != 1 )
          {
            v11 = (v11 + 1) & 0xF;
            if ( v11 == (_BYTE)v10 )
              goto LABEL_21;
          }
          goto LABEL_17;
        }
LABEL_21:
        v12 = (v10 + 1) & 0xF;
        if ( v12 != v9 )
        {
          *((_WORD *)m_impl + v10 + 416) = 1;
LABEL_33:
          v19 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
          *((_BYTE *)m_impl + 979) = v12;
          if ( v19 )
            v19(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 4LL));
          v20 = 1;
LABEL_36:
          if ( !v20 )
            goto LABEL_43;
          if ( !v7 )
          {
LABEL_38:
            KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, *((_BYTE *)m_impl + 1009));
            goto LABEL_43;
          }
LABEL_11:
          *((_BYTE *)m_impl + 983) = v5;
          *((_BYTE *)m_impl + 982) = 0;
          if ( v5 >= 2u )
            *((_DWORD *)m_impl + 246) = KeGetPcr()->Prcb.Number;
          else
            *((_QWORD *)m_impl + 123) = KeGetCurrentThread();
          SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(m_impl);
          goto LABEL_43;
        }
LABEL_40:
        SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
          m_impl,
          RequiresDedicatedThread,
          1u,
          0);
        v20 = 0;
        goto LABEL_36;
      default:
LABEL_17:
        KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, v5);
        goto LABEL_43;
    }
    *((_WORD *)m_impl + v15 + 416) = 1;
    goto LABEL_33;
  }
LABEL_44:
  p = this->PollModeConfigKnobDescriptors._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->PollModeConfigKnobDescriptors._p = 0LL;
    *(_QWORD *)&this->PollModeConfigKnobDescriptors.m_bufferSize = 0LL;
  }
  KnobNamespace::~KnobNamespace(&this->PollModeConfigKnobsNamespace);
  m_ptr = this->ReenumerateWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v23 = this->HookedOidWatchdog.m_ptr;
  if ( v23 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v23);
  v24 = this->PendingOidWatchdog.m_ptr;
  if ( v24 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v24);
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  v25 = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( v25 )
    ExFreePoolWithTag(v25, 0x7274534Bu);
  v26 = this->ExportName.__ptr_.__value_;
  this->ExportName.__ptr_.__value_ = 0LL;
  if ( v26 )
    ExFreePoolWithTag(v26, 0x7274534Bu);
}
