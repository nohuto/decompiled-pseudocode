/*
 * XREFs of ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401D57C0
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140052398 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140217E84 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x140222C78 (-VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeOnHost(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // r13
  struct DXGPROCESS *Current; // rax
  _QWORD *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rbp
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // ebx
  unsigned int HostProcess; // eax
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  int v20; // eax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  struct _D3DKMT_CREATEHWQUEUE *v25; // [rsp+20h] [rbp-78h]
  _BYTE v26[32]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26, Current);
  v10 = (_QWORD *)(v7 + 280);
  v11 = HMGRTABLE::AllocHandle(v7 + 280, this, 15LL, 0LL, 0);
  *((_DWORD *)this + 6) = v11;
  v12 = v11;
  if ( !v11 )
  {
    LODWORD(v13) = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 184;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *(struct _KTHREAD **)(v7 + 256) != KeGetCurrentThread() )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v7 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    return (unsigned int)v13;
  }
  v15 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v7 + 296) )
  {
    v16 = *(_DWORD *)(*v10 + 16 * v15 + 8);
    if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v15 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      *(_DWORD *)(*v10 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  v17 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
  HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
  if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4664),
              HostProcess,
              v17,
              a3,
              a2,
              (unsigned int *)this + 7) >= 0
    && *((_DWORD *)this + 7)
    && a2->hHwQueueProgressFence
    && (HwQueueProgressFenceCPUVirtualAddress = a2->HwQueueProgressFenceCPUVirtualAddress) != 0LL
    && a2->HwQueueProgressFenceGPUVirtualAddress )
  {
    v20 = MapGuestFenceCpuVaToHost(
            (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
            (void **)this + 15,
            (unsigned __int64 *)this + 16,
            (unsigned int *)this + 34);
    v13 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      WdLogGlobalForLineNumber = 227;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 15);
    v21 = *((unsigned int *)this + 6);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 248));
    v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *(_DWORD *)(v7 + 296)
      && (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v22 + 8) & 0x60)
      && (*(_DWORD *)(*v10 + 16 * v22 + 8) & 0x1F) != 0 )
    {
      v23 = 2 * ((v21 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(*v10 + 8 * v23 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*v10 + 8 * v23 + 8) &= ~0x2000u;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v7 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventCreateHwQueue,
        v24,
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6),
        this);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 2));
    v25 = (struct _D3DKMT_CREATEHWQUEUE *)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 212;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGCONTEXT 0x%I64x Failed to create HwQueue on the host",
      (__int64)v25,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
}
