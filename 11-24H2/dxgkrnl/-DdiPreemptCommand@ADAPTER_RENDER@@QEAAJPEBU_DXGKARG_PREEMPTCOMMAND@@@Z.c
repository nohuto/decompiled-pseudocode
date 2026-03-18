/*
 * XREFs of ?DdiPreemptCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1400152B8
 * Callers:
 *     ADAPTER_RENDER_DdiPreemptCommand @ 0x1400152A0 (ADAPTER_RENDER_DdiPreemptCommand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPreemptCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_PREEMPTCOMMAND *a2,
        __int64 a3)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL CurrentIrql; // al
  __int64 v14; // r15
  struct DXGTHREAD *v15; // rbx
  struct DXGTHREAD *v16; // rax
  int v17; // esi
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  KIRQL v23; // al
  int v24; // [rsp+50h] [rbp-39h] BYREF
  struct DXGTHREAD *v25; // [rsp+58h] [rbp-31h]
  char v26; // [rsp+60h] [rbp-29h]
  _BYTE v27[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5014);
  }
  else
  {
    v26 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v25 = Current;
    v6 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 201;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 201LL, 0LL, 0LL, 0LL, 0LL);
      }
      v7 = *((_DWORD *)v6 + 13);
      if ( !v7 )
        *((_DWORD *)v6 + 14) = 5014;
      *((_DWORD *)v6 + 13) = v7 + 1;
    }
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(_QWORD *)(v8 + 3128);
  if ( !v9
    || (v10 = *(_QWORD *)(v9 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL) + 72LL))(v10)
    && *(struct _KTHREAD **)(v8 + 3136) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v8 + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, 73);
      KeWaitForSingleObject((PVOID)(v8 + 256), Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 280), 1u);
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v14 = CurrentIrql;
  v15 = 0LL;
  if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v15 = v16) != 0LL) )
    v17 = *((_DWORD *)v16 + 12);
  else
    v17 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v18 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PREEMPTCOMMAND *))(*((_QWORD *)this + 2) + 536LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v14 != KeGetCurrentIrql() )
  {
    v23 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v14, v23);
    WdLogGlobalForLineNumber = 1512;
  }
  if ( v15 && *((_DWORD *)v15 + 12) != v17 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v15 + 12), v17, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v19[3] = v18;
  v19[4] = a2->Flags.Value;
  v19[5] = a2->PreemptionFenceId;
  WdLogGlobalForLineNumber = 1517;
  if ( (_DWORD)v18 )
  {
    WdLogSingleEntry1(2LL, v18);
    WdLogGlobalForLineNumber = 1519;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v24);
  return (unsigned int)v18;
}
