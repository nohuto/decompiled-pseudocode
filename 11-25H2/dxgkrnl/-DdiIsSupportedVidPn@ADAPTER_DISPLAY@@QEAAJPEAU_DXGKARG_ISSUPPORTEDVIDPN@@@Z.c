/*
 * XREFs of ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1402A4254
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1402A40A0 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002EC24 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003E4C0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiIsSupportedVidPn(ADAPTER_DISPLAY *this, struct _DXGKARG_ISSUPPORTEDVIDPN *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v11; // r12
  struct DXGTHREAD *v12; // rdi
  struct DXGTHREAD *v13; // rax
  int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  KIRQL v29; // al
  D3DKMDT_HVIDPN v30; // [rsp+28h] [rbp-71h]
  D3DKMDT_HVIDPN hDesiredVidPn; // [rsp+30h] [rbp-69h]
  int v32; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  char v34; // [rsp+60h] [rbp-39h]
  _BYTE v35[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v36[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 22, 1u);
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 5025);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 5025);
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2->hDesiredVidPn);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 8732;
    LODWORD(v15) = -1071774973;
    WdLogSingleEntry3(2LL, -1071774973LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2->hDesiredVidPn);
    v28 = *((_QWORD *)this + 2);
    hDesiredVidPn = a2->hDesiredVidPn;
    WdLogGlobalForLineNumber = 2785;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Call to DmmIsNullVidPn failed with status = 0x%I64x (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
      -1071774973LL,
      *(_QWORD *)(v28 + 288),
      (__int64)hDesiredVidPn,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return (unsigned int)v15;
    v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_23:
    if ( !v24 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v32);
    return (unsigned int)v15;
  }
  if ( *(_QWORD *)(v6 + 120) != v6 + 120 )
  {
    Current = DXGPROCESS::GetCurrent(v8);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v11 = CurrentIrql;
    v12 = 0LL;
    if ( CurrentIrql < 2u && (v13 = DXGTHREAD::GetCurrent(), (v12 = v13) != 0LL) )
      v14 = *((_DWORD *)v13 + 12);
    else
      v14 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v36,
      *((struct DXGADAPTER **)this + 2));
    v15 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ISSUPPORTEDVIDPN *))(*((_QWORD *)this + 2) + 616LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
            a2);
    if ( v36[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v11 != KeGetCurrentIrql() )
    {
      v29 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v29);
      WdLogGlobalForLineNumber = 2812;
    }
    if ( v12 )
    {
      v17 = *((int *)v12 + 12);
      if ( (_DWORD)v17 != v14 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v14, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v20[3] = v15;
    v20[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 288LL);
    v20[5] = a2->hDesiredVidPn;
    v20[6] = a2->IsVidPnSupported;
    WdLogGlobalForLineNumber = 2818;
    if ( (_DWORD)v15 != -1073741801 && (_DWORD)v15 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 2820;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return (unsigned int)v15;
    v24 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
    goto LABEL_23;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 2) + 288LL), a2->hDesiredVidPn);
  v25 = *((_QWORD *)this + 2);
  v30 = a2->hDesiredVidPn;
  WdLogGlobalForLineNumber = 2797;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Call to DmmIsNullVidPn with Null VidPn caught (hAdapter = 0x%I64x, hDesiredVidPn = 0x%I64x) ",
    *(_QWORD *)(v25 + 288),
    (__int64)v30,
    0LL,
    0LL,
    0LL);
  a2->IsVidPnSupported = 1;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v32);
  return 0LL;
}
