/*
 * XREFs of ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1401A26E8
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401839C8 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiCreateCpuEvent(
        ADAPTER_RENDER *this,
        struct _DXGKARG_CREATECPUEVENT *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  KIRQL CurrentIrql; // al
  __int64 v10; // r15
  struct DXGTHREAD *v11; // rbx
  struct DXGTHREAD *Current; // rax
  int v13; // r14d
  __int64 v14; // rsi
  KIRQL v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  char v21; // [rsp+60h] [rbp-19h]
  _BYTE v22[56]; // [rsp+68h] [rbp-11h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5158);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 5158);
  v5 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v5 + 1472) )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    CurrentIrql = KeGetCurrentIrql();
    v10 = CurrentIrql;
    v11 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v11 = Current) != 0LL) )
      v13 = *((_DWORD *)Current + 12);
    else
      v13 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v22,
      *((struct DXGADAPTER **)this + 2));
    v14 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_CREATECPUEVENT *))(*((_QWORD *)this + 2) + 1472LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
            a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v22);
    if ( (_BYTE)v10 != KeGetCurrentIrql() )
    {
      v15 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v15);
      WdLogGlobalForLineNumber = 4057;
    }
    if ( v11 )
    {
      v16 = *((int *)v11 + 12);
      if ( (_DWORD)v16 != v13 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v16, v13, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    if ( (_DWORD)v14 != -1073741801 && (_DWORD)v14 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 4059;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
    return (unsigned int)v14;
  }
  else
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v19);
    }
    return 3221225659LL;
  }
}
