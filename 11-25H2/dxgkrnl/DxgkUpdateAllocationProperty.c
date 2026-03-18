/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1402FA170
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022ABF0 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001DFA4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002D7A8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1401A7C80 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1402FAAE8 (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  const wchar_t *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  D3DDDI_UPDATEALLOCPROPERTY *v10; // rbx
  const void *v11; // rdx
  unsigned int PropertyMaskValue; // eax
  struct DXGPAGINGQUEUE *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r9
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // r8
  ADAPTER_RENDER *v21; // r9
  _QWORD *v22; // r8
  __int64 v23; // rbx
  const wchar_t *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  int updated; // eax
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // esi
  _QWORD *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  char CurrentThreadPreviousMode; // [rsp+50h] [rbp-178h]
  int v38; // [rsp+58h] [rbp-170h] BYREF
  __int64 v39; // [rsp+60h] [rbp-168h]
  char v40; // [rsp+68h] [rbp-160h]
  struct DXGALLOCATION *v41; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v42[8]; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v43[16]; // [rsp+80h] [rbp-148h] BYREF
  struct DXGPAGINGQUEUE *v44[2]; // [rsp+90h] [rbp-138h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v45; // [rsp+A0h] [rbp-128h] BYREF
  _DWORD v46[4]; // [rsp+B8h] [rbp-110h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v47; // [rsp+C8h] [rbp-100h] BYREF
  _BYTE v48[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2132);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2132);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1008;
    v6 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v6, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v9 = v40 == 0;
LABEL_43:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v38);
    return 3221225485LL;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  memset(&v47, 0, sizeof(v47));
  v10 = &v47;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v11 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v47, v11, 0x28uLL);
  }
  else
  {
    v10 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v10->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1044;
    v6 = L"Invalid use of reserve, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( !PropertyMaskValue )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1052;
    v6 = L"Invalid use of property mask. Must set at least one property, returning 0x%I64x";
    goto LABEL_7;
  }
  v44[0] = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v42, v10->hPagingQueue, Current, v44, 1);
  v13 = v44[0];
  if ( !v44[0] )
  {
    WdLogSingleEntry2(2LL, v10->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 1066;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hPagingQueue (0x%I64x) specified, returning 0x%I64x",
      v10->hPagingQueue,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_20:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    goto LABEL_8;
  }
  v14 = *((_QWORD *)v44[0] + 2);
  v44[1] = (struct DXGPAGINGQUEUE *)v14;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
    (struct DXGDEVICE *)v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, v14, 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
  if ( v16 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v38);
    return (unsigned int)v16;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v41, v10->hAllocation);
  if ( !v41 )
  {
    WdLogSingleEntry1(2LL, v10->hAllocation);
    WdLogGlobalForLineNumber = 1091;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hAllocation 0x%x",
      v10->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_28:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    goto LABEL_20;
  }
  v20 = *((_QWORD *)v41 + 1);
  if ( v20 != v14 )
  {
    WdLogSingleEntry2(2LL, v14, v20);
    WdLogGlobalForLineNumber = 1100;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Mismatch between paging queue device 0x%p and allocation device 0x%p",
      v14,
      *((_QWORD *)v41 + 1),
      0LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
  v21 = *(ADAPTER_RENDER **)(v14 + 16);
  v22 = (_QWORD *)*((_QWORD *)v21 + 2);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22[27] + 64LL) + 40LL) + 28LL) < 0x6002u )
  {
    v23 = -1073741637LL;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 1108;
    v24 = L"Driver version is less then WDDM 2.1 RS1.3, on 0x%I64x";
    goto LABEL_33;
  }
  if ( (*(_BYTE *)(v14 + 1901) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v22 + 583),
                Current,
                v13,
                v41,
                v10);
    goto LABEL_53;
  }
  if ( !v22[137] )
  {
    v23 = -1073741822LL;
    WdLogSingleEntry1(2LL, -1073741822LL);
    WdLogGlobalForLineNumber = 1120;
    v24 = L"KMD has not exposed ValidateUpdateAllocationProperty, it is null, returning 0x%I64x";
LABEL_33:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v24, v23, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v38);
    return (unsigned int)v23;
  }
  v28 = *((_QWORD *)v41 + 3);
  if ( !v28 )
  {
    WdLogSingleEntry1(2LL, v41);
    WdLogGlobalForLineNumber = 1128;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGALLOCATION 0x%I64x has NULL VIDMM_ALLOC assigned to it",
      (__int64)v41,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v9 = v40 == 0;
    goto LABEL_43;
  }
  v45.hAllocation = (HANDLE)*((_QWORD *)v41 + 4);
  v45.Flags.Value = v10->Flags.Value;
  v45.PreferredSegment.Value = v10->PreferredSegment.Value;
  v45.SupportedSegmentSet = v10->SupportedSegmentSet;
  v45.PropertyMaskValue = v10->PropertyMaskValue;
  v29 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v21, &v45, (__int64)v22);
  v30 = v29;
  if ( v29 >= 0 )
  {
    v46[2] = v10->Flags.0;
    v46[1] = v10->PreferredSegment.0;
    v46[0] = v10->SupportedSegmentSet;
    v46[3] = v10->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 184LL))(
                *(_QWORD *)(*(_QWORD *)(v14 + 16) + 768LL),
                *((_QWORD *)v13 + 4),
                v28,
                v46,
                &v10->PagingFenceValue);
LABEL_53:
    v33 = updated;
    if ( updated >= 0 && CurrentThreadPreviousMode == 1 )
    {
      v34 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v34 = (_QWORD *)MmUserProbeAddress;
      *v34 = v10->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v38);
    return v33;
  }
  WdLogSingleEntry1(2LL, v29);
  WdLogGlobalForLineNumber = 1143;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"KMD DDI ValidateUpdateAllocationProperty failed with status, 0x%I64x",
    v30,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v41);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v38);
  return (unsigned int)v30;
}
