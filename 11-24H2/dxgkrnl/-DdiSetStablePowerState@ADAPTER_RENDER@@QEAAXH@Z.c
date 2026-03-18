/*
 * XREFs of ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1401A88F4
 * Callers:
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x14019BDC4 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x14019FB74 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
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

void __fastcall ADAPTER_RENDER::DdiSetStablePowerState(ADAPTER_RENDER *this, int a2, __int64 a3)
{
  __int64 v5; // rcx
  KIRQL CurrentIrql; // al
  __int64 v7; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // esi
  KIRQL v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+30h] [rbp-19h] BYREF
  int v16; // [rsp+38h] [rbp-11h] BYREF
  __int64 v17; // [rsp+40h] [rbp-9h]
  char v18; // [rsp+48h] [rbp-1h]
  _BYTE v19[56]; // [rsp+50h] [rbp+7h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5068;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5068);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5068);
  v5 = *((_QWORD *)this + 2);
  v15 = a2;
  DXGADAPTER::AcquireDdiSync(v5, 1);
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
  (*(void (__fastcall **)(_QWORD, int *))(*((_QWORD *)this + 2) + 1008LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
    &v15);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v19);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v11);
    WdLogGlobalForLineNumber = 755;
  }
  if ( v8 )
  {
    v12 = *((int *)v8 + 12);
    if ( (_DWORD)v12 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v16);
  }
}
