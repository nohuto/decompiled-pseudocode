/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x14037F5C0
 * Callers:
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140219EF0 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x14037F4F0 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x140048044 (-VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z @ 0x1402215C8 (-VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct DXGPROCESS *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  struct _KTHREAD **v5; // rbx
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // edx
  struct _EX_RUNDOWN_REF *v11; // rdx
  struct _EX_RUNDOWN_REF *v12; // rbx
  unsigned int v13; // edi
  struct DXGDEVICE *Count; // rdi
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // eax
  struct _EX_RUNDOWN_REF *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  char *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[144]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = (struct _KTHREAD **)((char *)a1 + 248);
  v20 = 0LL;
  v24 = (char *)a1 + 248;
  v25 = 0;
  if ( a1 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v5[1] == KeGetCurrentThread() )
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
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v23);
  v8 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)a1 + 74) )
    goto LABEL_10;
  v9 = *((_QWORD *)a1 + 35);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
  if ( !v10 )
    goto LABEL_10;
  if ( v10 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v11 = 0LL;
    goto LABEL_11;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * v8);
LABEL_11:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21, v11);
  DXGALLOCATIONREFERENCE::MoveAssign(&v20, &v21);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
  v12 = v20;
  if ( v20 )
  {
    Count = (struct DXGDEVICE *)v20[1].Count;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22, Count);
    v15 = *(_QWORD *)(*((_QWORD *)Count + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v26,
      (struct DXGADAPTER *)v15,
      1);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, (struct DXGADAPTER *const)v15, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry3(4LL, v16, v15, a1);
      WdLogGlobalForLineNumber = 2144;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
      v13 = v17;
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(v15 + 3128) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2148;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pRenderAdapter->IsRenderAdapter()",
        2148LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_BYTE *)(v15 + 209) )
    {
      v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4664),
              a1,
              HIDWORD(v12[2].Ptr),
              a3 != 0);
    }
    else
    {
      if ( !v12[3].Count )
      {
        v13 = -1073741811;
        WdLogSingleEntry3(3LL, v4, v12, -1073741811LL);
        WdLogGlobalForLineNumber = 2162;
LABEL_26:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
        goto LABEL_27;
      }
      if ( a3 )
      {
        v3 = 1;
        *(_DWORD *)(v12[6].Count + 4) &= ~0x400u;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v27);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
      v18 = VIDMM_EXPORT::VidMmWaitOnAllocationDmaReferences(
              *(VIDMM_EXPORT **)(*(_QWORD *)(v15 + 3128) + 760LL),
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v15 + 3128) + 768LL),
              (struct VIDMM_MULTI_ALLOC *)v12[3].Count,
              v4 & 0x3F,
              v3);
    }
    v13 = v18;
    goto LABEL_26;
  }
  v13 = -1073741811;
  WdLogSingleEntry2(3LL, v4, -1073741811LL);
  WdLogGlobalForLineNumber = 2115;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
LABEL_27:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
  return v13;
}
