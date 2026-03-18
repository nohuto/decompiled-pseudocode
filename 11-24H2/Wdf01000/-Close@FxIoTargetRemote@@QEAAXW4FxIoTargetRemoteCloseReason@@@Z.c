/*
 * XREFs of ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x140029B9C
 * Callers:
 *     imp_WdfIoTargetClose @ 0x140029910 (imp_WdfIoTargetClose.c)
 *     ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x140029AB0 (-Remove@FxIoTargetRemote@@UEAAXXZ.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x14002A5A0 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     imp_WdfIoTargetCloseForQueryRemove @ 0x14009B2E0 (imp_WdfIoTargetCloseForQueryRemove.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x14009BD50 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140006E7C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x14002B2F4 (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009B7B4 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 *     WPP_IFR_SF_qqqqi @ 0x14009BC24 (WPP_IFR_SF_qqqqi.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // bl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  unsigned __int8 m_OpenState; // cl
  int v11; // r15d
  void *m_TargetNotifyHandle; // r12
  unsigned __int8 v13; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v15; // rax
  _SINGLE_LIST_ENTRY *v16; // rbx
  _SINGLE_LIST_ENTRY *Next; // rcx
  int v18; // r14d
  const void *v19; // rbx
  const void *_a1; // rax
  const void *v21; // r14
  unsigned __int8 FxVerboseOn; // al
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  FxVerifierLock *v24; // rcx
  FxVerifierLock *v25; // rcx
  const void *v26; // rdx
  const void *v27; // rcx
  const void *v28; // rcx
  const void *v29; // rcx
  const void *v30; // rcx
  const void *v31; // rcx
  const void *v32; // rcx
  const void *v33; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v27 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, WPP_FxIoTargetRemote_cpp_Traceguids, v27, Reason);
  }
  sent.Next = 0LL;
  wait = 0;
  pended.Blink = &pended;
  pended.Flink = &pended;
  memset(&pointers, 0, sizeof(pointers));
  while ( 1 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v24 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
    {
      FxVerifierLock::Lock(v24, &irql, a3);
      v7 = irql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v7;
    }
    m_OpenState = this->m_OpenState;
    if ( m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, v7);
    if ( m_Globals->FxVerboseOn )
    {
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x17u, WPP_FxIoTargetRemote_cpp_Traceguids, v26, &this->m_OpenedEvent);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_OpenedEvent);
  }
  if ( Reason == 3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v28);
    }
    v11 = 5;
    goto LABEL_9;
  }
  if ( m_OpenState == 3 )
  {
    FxVerboseOn = m_Globals->FxVerboseOn;
    if ( Reason == 1 )
    {
      if ( FxVerboseOn )
      {
        v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v29 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v29);
      }
    }
    else
    {
      if ( FxVerboseOn )
      {
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v30 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v30);
      }
      WdfBindInfo = m_Globals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 9 )
      {
        v11 = 4;
LABEL_48:
        this->m_OpenState = 1;
        goto LABEL_9;
      }
    }
    v11 = 3;
    goto LABEL_48;
  }
  if ( m_Globals->FxVerboseOn )
  {
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v31 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v31);
  }
  v11 = 4;
LABEL_9:
  if ( m_Globals->FxVerboseOn )
  {
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v32 = 0LL;
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v6,
      v8,
      v9,
      traceGuid,
      v32,
      this->m_TargetFileObject,
      this->m_TargetDevice,
      this->m_TargetHandle,
      (__int64)this->m_TargetNotifyHandle);
  }
  m_TargetNotifyHandle = 0LL;
  if ( Reason != 1 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    this->m_TargetNotifyHandle = 0LL;
  }
  this->m_ClearedPointers = &pointers;
  LOBYTE(traceGuid) = 0;
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v11, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
    FxVerifierLock::Unlock(v25, v7, v13);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v7);
  if ( m_TargetNotifyHandle )
    IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
  while ( 1 )
  {
    Flink = pended.Flink;
    if ( pended.Flink == &pended )
      break;
    if ( pended.Flink->Blink != &pended || (v15 = pended.Flink->Flink, pended.Flink->Flink->Blink != pended.Flink) )
      __fastfail(3u);
    pended.Flink = pended.Flink->Flink;
    v15->Blink = &pended;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxIoTarget::FailPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink, -1071644154);
  }
  while ( 1 )
  {
    Next = sent.Next;
    if ( !sent.Next )
      break;
    v16 = sent.Next - 18;
    sent.Next = sent.Next->Next;
    Next->Next = 0LL;
    FxRequestBase::Cancel((FxRequestBase *)&Next[-18]);
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v16->Next[2].Next)(
      v16,
      1818455619LL,
      548LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v33 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v33);
    }
    this->WaitForSentIoToComplete(this);
  }
  v18 = Reason - 1;
  if ( v18 )
  {
    if ( v18 == 2 )
      FxIoTargetRemoteOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v11 == 5 )
    this->WaitForDisposeEvent(this);
  v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( pointers.TargetPdo )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1, pointers.TargetPdo);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( pointers.TargetFileObject )
  {
    if ( !this->m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v19, pointers.TargetFileObject);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v21, pointers.TargetHandle);
    ZwClose(pointers.TargetHandle);
  }
}
