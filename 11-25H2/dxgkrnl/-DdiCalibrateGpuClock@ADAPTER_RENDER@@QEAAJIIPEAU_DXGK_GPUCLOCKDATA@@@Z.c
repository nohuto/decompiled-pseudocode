/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x140021718
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x14001FEAC (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ADAPTER_RENDER_DdiCalibrateGpuClock @ 0x14006BE80 (ADAPTER_RENDER_DdiCalibrateGpuClock.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1403854B8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  int v4; // esi
  unsigned int v6; // edi
  __int64 v7; // r13
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v10; // rbx
  int v11; // eax
  KIRQL CurrentIrql; // al
  __int64 v13; // r14
  struct DXGTHREAD *v14; // rbx
  struct DXGTHREAD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  KIRQL v20; // al
  unsigned int v21; // [rsp+50h] [rbp-49h]
  int v22; // [rsp+58h] [rbp-41h] BYREF
  struct DXGTHREAD *v23; // [rsp+60h] [rbp-39h]
  char v24; // [rsp+68h] [rbp-31h]
  _BYTE v25[8]; // [rsp+70h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-21h] BYREF

  v22 = -1;
  v4 = 0;
  v6 = a3;
  v21 = a3;
  v7 = a2;
  v23 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5056);
  }
  else
  {
    v24 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v23 = Current;
    v10 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 203;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 203LL, 0LL, 0LL, 0LL, 0LL);
      }
      v11 = *((_DWORD *)v10 + 13);
      if ( !v11 )
        *((_DWORD *)v10 + 14) = 5056;
      *((_DWORD *)v10 + 13) = v11 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql;
  v14 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v15 = DXGTHREAD::GetCurrent();
    v14 = v15;
    if ( v15 )
      v4 = *((_DWORD *)v15 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v25,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)this + 2) + 912LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          (unsigned int)v7,
          v6,
          a4);
  if ( v25[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v13 != KeGetCurrentIrql() )
  {
    v20 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v20);
    WdLogGlobalForLineNumber = 1715;
  }
  if ( v14 && *((_DWORD *)v14 + 12) != v4 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v14 + 12), v4, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  WdLogSingleEntry4(4LL, v16, v7, v21, a4->GpuFrequency);
  WdLogGlobalForLineNumber = 1721;
  WdLogSingleEntry2(4LL, a4->GpuClockCounter, a4->CpuClockCounter);
  WdLogGlobalForLineNumber = 1725;
  if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 1727;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v22);
  return (unsigned int)v16;
}
