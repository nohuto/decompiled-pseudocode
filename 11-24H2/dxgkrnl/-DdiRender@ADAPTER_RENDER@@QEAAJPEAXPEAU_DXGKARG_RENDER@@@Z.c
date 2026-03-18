/*
 * XREFs of ?DdiRender@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x140387910
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031360 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiRender(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_RENDER *a3)
{
  int v3; // r14d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rbx
  KIRQL CurrentIrql; // al
  __int64 v13; // r15
  struct DXGTHREAD *v14; // rdi
  struct DXGTHREAD *v15; // rax
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
    v26 = 5030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5030);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 5030);
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
  Global = DXGGLOBAL::GetGlobal();
  if ( *((_BYTE *)Global + 1657)
    && (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)Global + 1652),
                          *((struct DXGADAPTER **)this + 2)) )
  {
    LODWORD(v11) = -1073741637;
  }
  else
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    CurrentIrql = KeGetCurrentIrql();
    v13 = CurrentIrql;
    v14 = 0LL;
    if ( CurrentIrql < 2u )
    {
      v15 = DXGTHREAD::GetCurrent();
      v14 = v15;
      if ( v15 )
        v3 = *((_DWORD *)v15 + 12);
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v32,
      *((struct DXGADAPTER **)this + 2));
    v11 = (*(int (__fastcall **)(void *, struct _DXGKARG_RENDER *))(*((_QWORD *)this + 2) + 736LL))(a2, a3);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v32);
    if ( (_BYTE)v13 != KeGetCurrentIrql() )
    {
      v20 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v20);
      WdLogGlobalForLineNumber = 3106;
    }
    if ( v14 )
    {
      v17 = *((int *)v14 + 12);
      if ( (_DWORD)v17 != v3 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v14 + 12), v3, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v21[3] = v11;
    v21[4] = a2;
    v21[5] = a3->pDmaBuffer;
    v21[6] = a3->DmaSize;
    v21[7] = a3->pAllocationList;
    WdLogGlobalForLineNumber = 3113;
    if ( (unsigned int)(v11 + 1073741816) > 0x15 || (v22 = 2129953, !_bittest(&v22, v11 + 1073741816)) )
    {
      if ( (_DWORD)v11 != -1073741674
        && (_DWORD)v11 != -1073741592
        && (_DWORD)v11 != -1071775743
        && (_DWORD)v11 != -1071775232
        && (_DWORD)v11 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 3115;
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
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v26);
  return (unsigned int)v11;
}
