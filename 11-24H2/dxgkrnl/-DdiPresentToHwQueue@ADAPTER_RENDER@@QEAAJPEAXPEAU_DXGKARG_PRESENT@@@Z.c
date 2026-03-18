/*
 * XREFs of ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x140374424
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034A950 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresentToHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  int v3; // r14d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rbx
  KIRQL CurrentIrql; // al
  __int64 v11; // r15
  struct DXGTHREAD *v12; // rdi
  struct DXGTHREAD *v13; // rax
  __int64 (__fastcall *v14)(void *, struct _DXGKARG_PRESENT *); // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  KIRQL v20; // al
  _QWORD *v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+50h] [rbp-49h] BYREF
  __int64 v27; // [rsp+58h] [rbp-41h]
  char v28; // [rsp+60h] [rbp-39h]
  _BYTE v29[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  _BYTE v32[56]; // [rsp+80h] [rbp-19h] BYREF

  v26 = -1;
  v3 = 0;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5135);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 5135);
  Current = DXGPROCESS::GetCurrent(v7);
  v31 = 0;
  v9 = Current;
  v30 = (DXGPUSHLOCK *)(((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL));
  if ( v30
    && *(struct _KTHREAD **)((((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL)) + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive(v30);
    v31 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql;
  v12 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v13 = DXGTHREAD::GetCurrent();
    v12 = v13;
    if ( v13 )
      v3 = *((_DWORD *)v13 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v32,
    *((struct DXGADAPTER **)this + 2));
  v14 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 1352LL);
  if ( v14 )
    v15 = v14(a2, a3);
  else
    v15 = -1073741822;
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v20 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v20);
    WdLogGlobalForLineNumber = 3194;
  }
  if ( v12 )
  {
    v17 = *((int *)v12 + 12);
    if ( (_DWORD)v17 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
  v21[3] = v15;
  v21[4] = a2;
  v21[5] = a3->SubRectCnt;
  v21[6] = a3->pDmaBuffer;
  v21[7] = a3->DmaSize;
  WdLogGlobalForLineNumber = 3201;
  if ( v15 != -1073741670 )
  {
    if ( (unsigned int)(v15 + 1073741822) > 0x1B || (v22 = 136314945, !_bittest(&v22, v15 + 1073741822)) )
    {
      if ( v15 != -1073741674 && v15 != -1071775743 && v15 != -1071775736 && v15 != -1071775232 && v15 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 3203;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v26);
  return (unsigned int)v15;
}
