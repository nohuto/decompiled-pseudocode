/*
 * XREFs of ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403877B8
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140357D98 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresentToHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  int v3; // r14d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rdi
  struct _KTHREAD **v10; // rbx
  KIRQL CurrentIrql; // al
  __int64 v12; // r15
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  __int64 (__fastcall *v15)(void *, struct _DXGKARG_PRESENT *); // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  KIRQL v21; // al
  _QWORD *v22; // rax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v27; // [rsp+50h] [rbp-49h] BYREF
  __int64 v28; // [rsp+58h] [rbp-41h]
  char v29; // [rsp+60h] [rbp-39h]
  _BYTE v30[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v31; // [rsp+70h] [rbp-29h]
  int v32; // [rsp+78h] [rbp-21h]
  _BYTE v33[56]; // [rsp+80h] [rbp-19h] BYREF

  v27 = -1;
  v3 = 0;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 5135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5135);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 5135);
  Current = DXGPROCESS::GetCurrent(v7);
  v32 = 0;
  v9 = Current;
  v10 = (struct _KTHREAD **)(((unsigned __int64)Current + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)Current >> 64));
  v31 = (DXGPUSHLOCK *)v10;
  if ( v10 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v10[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive(v31);
    v32 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  v13 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v14 = DXGTHREAD::GetCurrent();
    v13 = v14;
    if ( v14 )
      v3 = *((_DWORD *)v14 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v33,
    *((struct DXGADAPTER **)this + 2));
  v15 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 1352LL);
  if ( v15 )
    v16 = v15(a2, a3);
  else
    v16 = -1073741822;
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33);
  if ( (_BYTE)v12 != KeGetCurrentIrql() )
  {
    v21 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v21);
    WdLogGlobalForLineNumber = 3194;
  }
  if ( v13 )
  {
    v18 = *((int *)v13 + 12);
    if ( (_DWORD)v18 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
  v22[3] = v16;
  v22[4] = a2;
  v22[5] = a3->SubRectCnt;
  v22[6] = a3->pDmaBuffer;
  v22[7] = a3->DmaSize;
  WdLogGlobalForLineNumber = 3201;
  if ( v16 != -1073741670 )
  {
    if ( (unsigned int)(v16 + 1073741822) > 0x1B || (v23 = 136314945, !_bittest(&v23, v16 + 1073741822)) )
    {
      if ( v16 != -1073741674 && v16 != -1071775743 && v16 != -1071775736 && v16 != -1071775232 && v16 )
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 3203;
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
    }
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v27);
  return (unsigned int)v16;
}
