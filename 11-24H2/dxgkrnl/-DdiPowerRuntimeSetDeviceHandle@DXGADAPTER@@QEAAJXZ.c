/*
 * XREFs of ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1401A6D9C
 * Callers:
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x140195D1C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
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

__int64 __fastcall DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r14
  struct DXGTHREAD *v7; // rdi
  struct DXGTHREAD *Current; // rax
  int v9; // esi
  __int64 v10; // rbp
  KIRQL v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+50h] [rbp-78h] BYREF
  __int64 v16; // [rsp+58h] [rbp-70h]
  char v17; // [rsp+60h] [rbp-68h]
  _BYTE v18[56]; // [rsp+68h] [rbp-60h] BYREF

  if ( !*((_QWORD *)this + 107) )
    return 3221225474LL;
  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 5127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5127);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 5127);
  _InterlockedIncrement((volatile signed __int32 *)this + 1201);
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v18, this);
  v10 = (*((int (__fastcall **)(_QWORD, _QWORD))this + 107))(*((_QWORD *)this + 36), *((_QWORD *)this + 404));
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v18);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v11);
    WdLogGlobalForLineNumber = 2657;
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v9, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1201);
  if ( (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 2659;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v15);
  }
  return (unsigned int)v10;
}
