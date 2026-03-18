/*
 * XREFs of ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDBGINFO2@@@Z @ 0x140382528
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x1403816F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::_DdiCollectDbgInfoNoLocks(
        DXGADAPTER *this,
        struct _DXGKARG_COLLECTDBGINFO2 *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r15
  struct DXGTHREAD *v8; // rsi
  struct DXGTHREAD *Current; // rax
  int v10; // ebp
  __int64 (__fastcall *v11)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *); // rax
  unsigned int v12; // edi
  KIRQL v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  char v19; // [rsp+60h] [rbp-78h]
  _BYTE v20[56]; // [rsp+68h] [rbp-70h] BYREF

  if ( !*((_QWORD *)this + 75) && !*((_QWORD *)this + 214) )
    return 3221225474LL;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5023;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5023);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 5023);
  _InterlockedIncrement((volatile signed __int32 *)this + 1201);
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v20, this);
  v11 = (__int64 (__fastcall *)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *))*((_QWORD *)this + 214);
  if ( !v11 )
    v11 = (__int64 (__fastcall *)(_QWORD, struct _DXGKARG_COLLECTDBGINFO2 *))*((_QWORD *)this + 75);
  v12 = v11(*((_QWORD *)this + 36), a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v20);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v13 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v13);
    WdLogGlobalForLineNumber = 2704;
  }
  if ( v8 )
  {
    v14 = *((int *)v8 + 12);
    if ( (_DWORD)v14 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v14, v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1201);
  WdLogSingleEntry5(
    4LL,
    (int)v12,
    *((_QWORD *)this + 36),
    *(unsigned int *)a2,
    *((_QWORD *)a2 + 1),
    *((_QWORD *)a2 + 2));
  WdLogGlobalForLineNumber = 2711;
  if ( v12 != -1073741823 && v12 != -1073741801 && v12 )
  {
    WdLogSingleEntry1(2LL, (int)v12);
    WdLogGlobalForLineNumber = 2713;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v17);
  }
  return v12;
}
