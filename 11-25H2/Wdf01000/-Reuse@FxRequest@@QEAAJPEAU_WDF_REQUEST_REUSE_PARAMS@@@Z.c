/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14002BE90
 * Callers:
 *     imp_WdfRequestReuse @ 0x14002BCB0 (imp_WdfRequestReuse.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14002CA9C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14002C884 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v4; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  _IRP *_a1; // rbx
  FxRequestContext *v7; // rcx
  unsigned __int8 v8; // al
  unsigned int *p_Flags; // r14
  unsigned __int8 *v10; // r15
  __int64 result; // rax
  _WDF_BIND_INFO *v12; // rcx
  int v13; // edx
  unsigned int v14; // r8d
  unsigned __int16 v15; // ax
  const void *_a2; // rdi
  _IRP *v17; // rcx
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  FxTagTracker *v21; // rcx
  unsigned __int8 v22; // r8
  char v23; // al
  unsigned __int8 v24; // bl
  unsigned __int8 v25; // r8
  unsigned __int64 v26; // rdx
  const void *v27; // rax
  unsigned __int16 v28; // cx
  const void *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  FxVerifierLock *v33; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = (unsigned __int64)this;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    v23 = *(_BYTE *)(v4 + 24);
    irql = 0;
    if ( v23 < 0 && (v33 = *(FxVerifierLock **)(v4 - 40)) != 0LL )
    {
      FxVerifierLock::Lock(v33, &irql, v22);
      v24 = irql;
    }
    else
    {
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 112));
      irql = v24;
    }
    if ( _bittest16((const signed __int16 *)(v4 + 218), 8u) )
    {
      v26 = *(_QWORD *)(v4 + 160);
      v27 = (const void *)v4;
      v28 = *(_WORD *)(v26 + 10);
      v29 = (const void *)(v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v28 )
        v29 = 0LL;
      v30 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v4 + 10) )
        v30 = 0LL;
      if ( v30 )
        v27 = (const void *)v30;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, v27, v29);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock((FxNonPagedObject *)v4, v24, v25);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_QWORD *)(v4 + 200) = 0LL;
  }
  _a1 = *(_IRP **)(v4 + 152);
  if ( _a1 )
  {
    v7 = *(FxRequestContext **)(v4 + 168);
    if ( v7 )
      v7->ReleaseAndRestore(v7, (FxRequestBase *)v4);
    v8 = *(_BYTE *)(v4 + 213);
    if ( !v8 )
    {
      if ( (ReuseParams->Flags & 1) != 0 )
        return 3223323144LL;
      _a1->IoStatus.Status = ReuseParams->Status;
      result = 0LL;
      _a1->Cancel = 0;
      *(_WORD *)(v4 + 214) = 0;
      return result;
    }
    if ( v8 == 2 && *(_BYTE *)(v4 + 238) && !*(_BYTE *)(v4 + 214) )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
      (*(void (__fastcall **)(unsigned __int64, void *, __int64, const char *))(*(_QWORD *)v4 + 16LL))(
        v4,
        (void *)1129464644,
        2242LL,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  p_Flags = &ReuseParams->Flags;
  v10 = (unsigned __int8 *)(v4 + 213);
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    _a1 = ReuseParams->NewIrp;
    if ( *v10 == 1 )
    {
      v17 = *(_IRP **)(v4 + 152);
      *(_QWORD *)(v4 + 152) = _a1;
      if ( v17 )
        IoFreeIrp(v17);
      p_Flags = &ReuseParams->Flags;
      *v10 = 2;
    }
    else
    {
      *(_QWORD *)(v4 + 152) = _a1;
      *v10 = 2;
    }
  }
  if ( *v10 == 1 && _a1 )
  {
    IoReuseIrp(_a1, ReuseParams->Status);
    _a1->Cancel = 0;
    v10 = (unsigned __int8 *)(v4 + 213);
  }
  if ( (*p_Flags & 2) == 0 )
  {
    *(_BYTE *)(v4 + 238) = 0;
    *(_WORD *)(v4 + 214) = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 1);
    return 0LL;
  }
  v12 = m_Globals->WdfBindInfo;
  if ( v12->Version.Major <= 1 && (v12->Version.Major != 1 || v12->Version.Minor < 0xB) )
  {
    v18 = 43;
    v19 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v19 = 0LL;
    if ( v19 )
      v4 = v19;
    goto LABEL_48;
  }
  if ( !_a1 )
  {
    v31 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v31 = 0LL;
    if ( v31 )
      v4 = v31;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, -1073741811);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225485LL;
  }
  if ( *v10 == 1 )
  {
    v18 = 45;
    v20 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v20 = 0LL;
    if ( v20 )
      v4 = v20;
LABEL_48:
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v18, WPP_FxRequest_cpp_Traceguids, (const void *)v4, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v13 = *(_DWORD *)(v4 + 12);
  if ( v13 == 1 )
  {
    if ( _a1->CurrentLocation <= _a1->StackCount )
    {
      v14 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
      if ( *(char *)(v4 + 24) < 0 )
      {
        v21 = *(FxTagTracker **)(v4 - 48);
        if ( v21 )
          FxTagTracker::UpdateTagHistory(
            v21,
            (void *)0x43524344,
            2395,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v14);
      }
      *(_QWORD *)(v4 + 264) = 0LL;
      *(_QWORD *)(v4 + 280) = 0LL;
      FxRequestBase::ClearFieldsForReuse((FxRequestBase *)v4);
      *(_BYTE *)(v4 + 238) = 1;
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags((FxRequestBase *)v4, 1);
      return 0LL;
    }
    v15 = *(_WORD *)(v4 + 10);
    _a2 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      _a2 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, _a1, _a2, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  else
  {
    v32 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v32 = 0LL;
    if ( v32 )
      v4 = v32;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, (const void *)v4, v13, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
}
