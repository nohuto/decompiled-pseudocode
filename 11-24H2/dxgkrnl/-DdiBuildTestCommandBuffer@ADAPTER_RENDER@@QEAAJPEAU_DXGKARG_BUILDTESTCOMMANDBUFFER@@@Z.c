/*
 * XREFs of ?DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z @ 0x1401A12AC
 * Callers:
 *     ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401D1030 (-KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildTestCommandBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDTESTCOMMANDBUFFER *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // ebp
  __int64 v11; // rsi
  KIRQL v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+58h] [rbp-70h]
  char v18; // [rsp+60h] [rbp-68h]
  _BYTE v19[56]; // [rsp+68h] [rbp-60h] BYREF

  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1720LL) )
    return 3221225659LL;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5188;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5188);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5188);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v19,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDTESTCOMMANDBUFFER *))(*((_QWORD *)this + 2) + 1720LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v12 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v12);
    WdLogGlobalForLineNumber = 837;
  }
  if ( v8 )
  {
    v13 = *((int *)v8 + 12);
    if ( (_DWORD)v13 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  if ( (_DWORD)v11 != -2147483643 && (_DWORD)v11 != -1073741811 && (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 840;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v16);
  }
  return (unsigned int)v11;
}
