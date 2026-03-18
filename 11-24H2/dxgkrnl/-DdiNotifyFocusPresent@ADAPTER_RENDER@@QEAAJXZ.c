/*
 * XREFs of ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x140014598
 * Callers:
 *     ADAPTER_RENDER_DdiNotifyFocusPresent @ 0x140014580 (ADAPTER_RENDER_DdiNotifyFocusPresent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiNotifyFocusPresent(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v5; // r15
  struct DXGTHREAD *v6; // rbx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v15; // al
  __int64 v16; // rcx
  int v17; // [rsp+58h] [rbp-19h] BYREF
  __int64 v18; // [rsp+60h] [rbp-11h]
  char v19; // [rsp+68h] [rbp-9h]
  _BYTE v20[8]; // [rsp+70h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+7h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5116);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry(&v17, 5116LL);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  v6 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v6 = Current) != 0LL) )
    v7 = *((_DWORD *)Current + 12);
  else
    v7 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v20,
    *((struct DXGADAPTER **)this + 2));
  v8 = *((_QWORD *)this + 2);
  v9 = *(__int64 (__fastcall **)(_QWORD))(v8 + 1272);
  if ( v9 )
    v10 = v9(*(_QWORD *)(v8 + 288));
  else
    v10 = -1073741822;
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v5 != KeGetCurrentIrql() )
  {
    v15 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v5, v15);
    WdLogGlobalForLineNumber = 4116;
  }
  if ( v6 )
  {
    v16 = *((int *)v6 + 12);
    if ( (_DWORD)v16 != v7 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v16, v7, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  if ( v10 != -1073741822 && v10 != -1073741801 && v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 4118;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v17);
  return (unsigned int)v10;
}
