/*
 * XREFs of ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x14019FEDC
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x14019381C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     SendColorimetricControlToDriverCallback @ 0x1401C1780 (SendColorimetricControlToDriverCallback.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002EC24 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlModeBehavior(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLMODEBEHAVIOR *a2,
        __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v7; // r12
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *v9; // rax
  int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // al
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-41h]
  char v23; // [rsp+60h] [rbp-39h]
  _BYTE v24[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v25[56]; // [rsp+80h] [rbp-19h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5071);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 5071);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v24, Current);
  DXGADAPTER::AcquireDdiSync((__int64)this, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 1201);
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (v9 = DXGTHREAD::GetCurrent(), (v8 = v9) != 0LL) )
    v10 = *((_DWORD *)v9 + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v25, this);
  v11 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLMODEBEHAVIOR *))this + 135))(*((_QWORD *)this + 36), a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v25);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v16 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
    WdLogGlobalForLineNumber = 153;
  }
  if ( v8 )
  {
    v13 = *((int *)v8 + 12);
    if ( (_DWORD)v13 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1201);
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
  v17[3] = v11;
  v17[4] = *((_QWORD *)this + 36);
  v17[5] = a2->Request.Value;
  v17[6] = a2->Satisfied.Value;
  v17[7] = a2->NotSatisfied.Value;
  WdLogGlobalForLineNumber = 160;
  if ( (_DWORD)v11 != -1073741801 && (_DWORD)v11 != -1073741637 && (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 162;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( (a2->NotSatisfied.Value & a2->Satisfied.Value) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 171;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pArgControlModeBehavior->Satisfied.Value & pArgControlModeBehavior->NotSatisfied.Value) == 0",
      171LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
  return (unsigned int)v11;
}
