/*
 * XREFs of ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1401A9270
 * Callers:
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402250C0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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

__int64 __fastcall ADAPTER_RENDER::DdiSetVirtualMachineData(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETVIRTUALMACHINEDATA *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  KIRQL CurrentIrql; // al
  __int64 v8; // r14
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // ebp
  KIRQL v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  char v19; // [rsp+60h] [rbp-78h]
  _BYTE v20[56]; // [rsp+68h] [rbp-70h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5113;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5113);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 5113);
  v5 = *((_QWORD *)this + 2);
  LODWORD(v6) = 0;
  if ( *(_QWORD *)(v5 + 1304) )
  {
    DXGADAPTER::AcquireDdiSync(v5, 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v11 = *((_DWORD *)Current + 12);
    else
      v11 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v20,
      *((struct DXGADAPTER **)this + 2));
    v6 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIRTUALMACHINEDATA *))(*((_QWORD *)this + 2) + 1304LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
           a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v20);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v12 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v12);
      WdLogGlobalForLineNumber = 2172;
    }
    if ( v9 )
    {
      v13 = *((int *)v9 + 12);
      if ( (_DWORD)v13 != v11 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v11, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    if ( (_DWORD)v6 )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 2174;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v17);
  return (unsigned int)v6;
}
