/*
 * XREFs of ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1401A63C4
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D8EC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
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
 *     ?VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x140229F8C (-VmBusSendDdiGetNodeMetadata@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiGetNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // r13
  unsigned int NodeMetadata; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v12; // r12
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  int v15; // r14d
  __int64 v16; // rsi
  KIRQL v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+58h] [rbp-41h]
  char v22; // [rsp+60h] [rbp-39h]
  _BYTE v23[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v24[56]; // [rsp+80h] [rbp-19h] BYREF

  v20 = -1;
  v4 = a2;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 5053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5053);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 5053);
  if ( *((_BYTE *)this + 209) )
  {
    NodeMetadata = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata((DXGADAPTER *)((char *)this + 4664), v4, a3);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v20);
    }
    return NodeMetadata;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v23, Current);
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1201, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v12 = CurrentIrql;
    v13 = 0LL;
    if ( CurrentIrql < 2u && (v14 = DXGTHREAD::GetCurrent(), (v13 = v14) != 0LL) )
      v15 = *((_DWORD *)v14 + 12);
    else
      v15 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24, this);
    a3->FriendlyName[0] = 0;
    v16 = (*((int (__fastcall **)(_QWORD, _QWORD, struct _DXGK_NODEMETADATA *))this + 110))(
            *((_QWORD *)this + 36),
            (unsigned int)v4,
            a3);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24);
    if ( (_BYTE)v12 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v17);
      WdLogGlobalForLineNumber = 123;
    }
    if ( v13 && *((_DWORD *)v13 + 12) != v15 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v15, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1201);
    WdLogSingleEntry3(4LL, v16, v4, a3->EngineType);
    WdLogGlobalForLineNumber = 128;
    if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 )
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 130;
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
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v20);
    return (unsigned int)v16;
  }
}
