/*
 * XREFs of ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x140068DAC
 * Callers:
 *     ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x14006AC10 (-DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019360C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x140195D1C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeControlRequest(
        DXGADAPTER *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  KIRQL CurrentIrql; // al
  __int64 v12; // r15
  struct DXGTHREAD *v13; // rbx
  struct DXGTHREAD *Current; // rax
  int v15; // r14d
  __int64 v16; // rsi
  KIRQL v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+50h] [rbp-71h] BYREF
  __int64 v22; // [rsp+58h] [rbp-69h]
  char v23; // [rsp+60h] [rbp-61h]
  unsigned __int64 *v24; // [rsp+68h] [rbp-59h]
  void *v25; // [rsp+70h] [rbp-51h]
  _BYTE v26[56]; // [rsp+78h] [rbp-49h] BYREF

  v21 = -1;
  v22 = 0LL;
  v25 = a5;
  v24 = a7;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5126);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 5126);
  _InterlockedIncrement((volatile signed __int32 *)this + 1201);
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  v13 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v13 = Current) != 0LL) )
    v15 = *((_DWORD *)Current + 12);
  else
    v15 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26, this);
  v16 = (*((int (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64, void *, unsigned __int64, unsigned __int64 *))this
         + 106))(
          *((_QWORD *)this + 36),
          a2,
          a3,
          a4,
          v25,
          a6,
          v24);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v26);
  if ( (_BYTE)v12 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v17);
    WdLogGlobalForLineNumber = 2628;
  }
  if ( v13 && *((_DWORD *)v13 + 12) != v15 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v15, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1201);
  if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 2630;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
  return (unsigned int)v16;
}
