/*
 * XREFs of ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1401A8FB8
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x140203074 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400300D8 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v11; // r15
  struct DXGTHREAD *v12; // rdi
  struct DXGTHREAD *v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  KIRQL v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  _BYTE v27[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[56]; // [rsp+80h] [rbp-19h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5140);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 5140);
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1368LL) )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v27, Current);
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
      (DXGVALIDATIONPROCESSATTACH *)v28,
      *((struct DXGADAPTER **)this + 2));
    v15 = (*(int (__fastcall **)(void *, struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL *))(*((_QWORD *)this + 2) + 1368LL))(
            a2,
            a3);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28);
    if ( (_BYTE)v11 != KeGetCurrentIrql() )
    {
      v20 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v20);
      WdLogGlobalForLineNumber = 4743;
    }
    if ( v12 )
    {
      v17 = *((int *)v12 + 12);
      if ( (_DWORD)v17 != v14 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v17, v14, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    v21 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = v15;
    *(_QWORD *)(v21 + 32) = a2;
    WdLogGlobalForLineNumber = 4747;
    if ( (_DWORD)v15 != -1073741592 && (_DWORD)v15 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 4749;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v24);
    return (unsigned int)v15;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v24);
    }
    return 3221225474LL;
  }
}
