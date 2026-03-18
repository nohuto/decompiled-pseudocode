/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1403180B0
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x140317EFC (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v17; // rdi
  KIRQL CurrentIrql; // al
  __int64 v19; // r12
  struct DXGTHREAD *v20; // rdi
  struct DXGTHREAD *v21; // rax
  int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  KIRQL v28; // al
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  D3DKMDT_HVIDPN hDesiredVidPn; // [rsp+28h] [rbp-71h]
  D3DKMDT_HVIDPN v33; // [rsp+30h] [rbp-69h]
  int v34; // [rsp+50h] [rbp-49h] BYREF
  __int64 v35; // [rsp+58h] [rbp-41h]
  char v36; // [rsp+60h] [rbp-39h]
  _BYTE v37[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v38; // [rsp+70h] [rbp-29h]
  int v39; // [rsp+78h] [rbp-21h]
  _BYTE v40[56]; // [rsp+80h] [rbp-19h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 22, 1u);
  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 5025);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 5025);
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2->hDesiredVidPn);
  if ( v6 )
  {
    v12 = (_QWORD *)(v6 + 120);
    if ( (_QWORD *)*v12 == v12 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), v7);
      v13 = *((_QWORD *)this + 2);
      hDesiredVidPn = a2->hDesiredVidPn;
      WdLogGlobalForLineNumber = 2797;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Call to DmmIsNullVidPn with Null VidPn caught (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
        *(_QWORD *)(v13 + 288),
        (__int64)hDesiredVidPn,
        0LL,
        0LL,
        0LL);
      a2->IsVidPnSupported = 1;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v34);
      return 0LL;
    }
    else
    {
      Current = DXGPROCESS::GetCurrent((__int64)v12);
      v39 = 0;
      v17 = Current;
      v38 = (DXGPUSHLOCK *)(((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL));
      if ( v38
        && *(struct _KTHREAD **)((((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL)) + 8) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1512;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1512LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v17 )
      {
        DXGPUSHLOCK::AcquireExclusive(v38);
        v39 = 2;
      }
      DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
      CurrentIrql = KeGetCurrentIrql();
      v19 = CurrentIrql;
      v20 = 0LL;
      if ( CurrentIrql < 2u && (v21 = DXGTHREAD::GetCurrent(), (v20 = v21) != 0LL) )
        v22 = *((_DWORD *)v21 + 12);
      else
        v22 = 0;
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v40,
        *((struct DXGADAPTER **)this + 2));
      v23 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 616LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
              a2);
      DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v40);
      if ( (_BYTE)v19 != KeGetCurrentIrql() )
      {
        v28 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v19, v28);
        WdLogGlobalForLineNumber = 2812;
      }
      if ( v20 )
      {
        v25 = *((int *)v20 + 12);
        if ( (_DWORD)v25 != v22 )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v20 + 12), v22, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v29[3] = v23;
      v29[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
      v29[5] = a2->hDesiredVidPn;
      v29[6] = a2->IsVidPnSupported;
      WdLogGlobalForLineNumber = 2818;
      if ( (_DWORD)v23 != -1073741801 && (_DWORD)v23 )
      {
        WdLogSingleEntry1(2LL, v23);
        WdLogGlobalForLineNumber = 2820;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v23,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v34);
      return (unsigned int)v23;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 8744;
    WdLogSingleEntry3(2LL, -1071774973LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2->hDesiredVidPn);
    v8 = *((_QWORD *)this + 2);
    v33 = a2->hDesiredVidPn;
    WdLogGlobalForLineNumber = 2785;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Call to DmmIsNullVidPn failed with status = 0x%I64x (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      -1071774973LL,
      *(_QWORD *)(v8 + 288),
      (__int64)v33,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v34);
    }
    return 3223192323LL;
  }
}
