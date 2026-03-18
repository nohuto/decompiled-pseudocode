/*
 * XREFs of ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403B4F34
 * Callers:
 *     ADAPTER_RENDER_DdiDestroyHwQueue @ 0x14006BCA0 (ADAPTER_RENDER_DdiDestroyHwQueue.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CDD74 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
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
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyHwQueue(ADAPTER_RENDER *this, void *a2, __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v8; // r15
  struct DXGTHREAD *v9; // rdi
  struct DXGTHREAD *v10; // rax
  int v11; // r14d
  __int64 (__fastcall *v12)(void *); // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  KIRQL v18; // al
  int v19; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+58h] [rbp-31h]
  char v21; // [rsp+60h] [rbp-29h]
  _BYTE v22[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v23[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5111);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 5111);
  Current = DXGPROCESS::GetCurrent(v5);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v22, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = CurrentIrql;
  v9 = 0LL;
  if ( CurrentIrql < 2u && (v10 = DXGTHREAD::GetCurrent(), (v9 = v10) != 0LL) )
    v11 = *((_DWORD *)v10 + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v23,
    *((struct DXGADAPTER **)this + 2));
  v12 = *(__int64 (__fastcall **)(void *))(*((_QWORD *)this + 2) + 1112LL);
  if ( v12 )
    v13 = v12(a2);
  else
    v13 = -1073741822;
  if ( v23[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v8 != KeGetCurrentIrql() )
  {
    v18 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v18);
    WdLogGlobalForLineNumber = 4179;
  }
  if ( v9 )
  {
    v14 = *((int *)v9 + 12);
    if ( (_DWORD)v14 != v11 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v11, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  WdLogSingleEntry2(4LL, v13, a2);
  WdLogGlobalForLineNumber = 4183;
  if ( v13 != -1073741822 && v13 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 4185;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v19);
  return (unsigned int)v13;
}
