/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x14006BF20 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x14019BFA4 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019D8EC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08 (DxgkCreateLightweightDeviceAndContext.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140244460 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiGetMonitorColorimetryOverride @ 0x140254B54 (DpiGetMonitorColorimetryOverride.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1402559CC (DpiQueryDisplayIDDescriptor.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x14035D83C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x14035D9E8 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403FF0F0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x14002F4F0 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403DEE84 (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int AdapterInfo; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v11; // rdi
  KIRQL CurrentIrql; // al
  __int64 v13; // r12
  struct DXGTHREAD *v14; // rdi
  struct DXGTHREAD *v15; // rax
  int v16; // r15d
  __int64 v17; // r14
  KIRQL v18; // al
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  char v24; // [rsp+60h] [rbp-39h]
  _BYTE v25[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  _BYTE v28[56]; // [rsp+80h] [rbp-19h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5000);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 5000);
  if ( *((_BYTE *)this + 209) )
  {
    AdapterInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4664), a2);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v22);
    }
    return AdapterInfo;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v5);
    v27 = 0;
    v11 = Current;
    v26 = (DXGPUSHLOCK *)(((unsigned __int64)Current + 152) & -(__int64)(Current != 0LL));
    if ( v26
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
    if ( v11 )
    {
      DXGPUSHLOCK::AcquireExclusive(v26);
      v27 = 2;
    }
    if ( (a2->Flags.Value & 1) == 0 && v11 )
      a2->Flags.Value ^= ((unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(v11, this) ^ a2->Flags.Value) & 1;
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1201, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v13 = CurrentIrql;
    v14 = 0LL;
    if ( CurrentIrql < 2u && (v15 = DXGTHREAD::GetCurrent(), (v14 = v15) != 0LL) )
      v16 = *((_DWORD *)v15 + 12);
    else
      v16 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28, this);
    v17 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 57))(*((_QWORD *)this + 36), a2);
    DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v28);
    if ( (_BYTE)v13 != KeGetCurrentIrql() )
    {
      v18 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v18);
      WdLogGlobalForLineNumber = 84;
    }
    if ( v14 && *((_DWORD *)v14 + 12) != v16 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v14 + 12), v16, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1201);
    WdLogSingleEntry4(4LL, v17, a2->Type, a2->InputDataSize, a2->OutputDataSize);
    WdLogGlobalForLineNumber = 90;
    if ( (unsigned int)(v17 + 1073741822) > 0x15 || (v19 = 2099201, !_bittest(&v19, v17 + 1073741822)) )
    {
      if ( (_DWORD)v17 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 92;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v22);
    return (unsigned int)v17;
  }
}
