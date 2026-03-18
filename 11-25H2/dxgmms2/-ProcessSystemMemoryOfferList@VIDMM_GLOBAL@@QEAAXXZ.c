/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400F1E14
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A9504 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400BBC50 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2ADC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F6570 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FC570 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140101E64 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  __int64 *v2; // r13
  char *v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // r12d
  __int64 *v9; // r15
  unsigned int v10; // r11d
  int v11; // r10d
  __int64 *v12; // rbx
  VIDMM_GLOBAL *v13; // rcx
  int v14; // r13d
  __int64 v15; // r9
  __int64 v16; // r10
  __int16 v17; // ax
  bool v18; // zf
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rax
  char *v22; // rdx
  __int64 *v23; // rcx
  char **v24; // rax
  __int64 v25; // rax
  VIDMM_GLOBAL *v26; // r15
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v28; // [rsp+38h] [rbp-8h]
  struct VIDMM_PHYSICAL_ALLOC *v29; // [rsp+88h] [rbp+48h]
  VIDMM_PHYSICAL_ADAPTER *v30; // [rsp+90h] [rbp+50h]

  if ( !qword_140081458 )
    return;
  v2 = (__int64 *)((char *)this + 39952);
  v3 = (char *)this + 39904;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v3, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v3 + 6) != -1 && (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    ExAcquirePushLockSharedEx(v3, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v3 + 4);
  v4 = (__int64 *)*v2;
  _InterlockedDecrement((volatile signed __int32 *)v3 + 4);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 == v2 )
    return;
  v6 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1746) & 0x8000) == 0 )
  {
    v7 = *((_QWORD *)this + 570) - *((_QWORD *)this + 882);
    if ( v7 < qword_140081458 )
    {
      v6 = v7 - qword_140081458;
      goto LABEL_49;
    }
  }
  v28 = &v27;
  v8 = 0;
  v27 = (__int64)&v27;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
  while ( 1 )
  {
    v9 = (__int64 *)*v2;
    v10 = 3;
    if ( (__int64 *)*v2 == v2 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v12 = v9 - 33;
    v13 = (VIDMM_GLOBAL *)(*(_DWORD *)(v9 - 30) & 0x3F);
    v14 = v11;
    v29 = (struct VIDMM_PHYSICAL_ALLOC *)*(v9 - 33);
    v30 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (_QWORD)v13);
    *((_QWORD *)this + 5598) = v9 - 33;
    VIDMM_GLOBAL::RemoveAllocationFromOfferList(v13, (struct VIDMM_GLOBAL_ALLOC *)(v9 - 33));
    v17 = *(_WORD *)(v9[14] + 8);
    if ( v17 != 2 )
    {
      if ( !v17 || (v18 = v17 == (__int16)v10, v19 = v16, v18) )
        v19 = 1;
      if ( v19 )
        goto LABEL_22;
      goto LABEL_20;
    }
    v21 = *(_QWORD *)(v15 + 64);
    if ( v21 )
    {
      if ( (*(_DWORD *)(v21 + 104) & 0x1001) != 0 )
      {
        if ( !v8 )
        {
          v8 = 1;
          VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3E8u);
          v16 = 0LL;
          v10 = 3;
        }
        if ( (*((_DWORD *)this + 1746) & 0x8000) != 0
          || *((_QWORD *)this + 570) - v12[38] > qword_140081468[*((int *)v12 + 74)] )
        {
          *((_DWORD *)v12 + 7) |= 0x40u;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *((_QWORD *)v3 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v3, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v12);
          VIDMM_PHYSICAL_ADAPTER::EvictResources(v30, v29, 1, 0, 0, 0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
          *((_QWORD *)this + 886) += *(_QWORD *)(*v12 + 16);
          ++*((_DWORD *)this + 1774);
          goto LABEL_29;
        }
      }
LABEL_20:
      v20 = v28;
      if ( (__int64 *)*v28 != &v27 )
        goto LABEL_51;
      v9[1] = (__int64)v28;
      *v9 = (__int64)&v27;
      *v20 = (__int64)v9;
      v28 = v9;
      goto LABEL_22;
    }
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 17));
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v12)
      && (v12[4] & 8) == 0 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      v14 = 1;
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v30, v29);
      VIDMM_GLOBAL::ResetBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)v12);
      *((_QWORD *)this + 886) += *(_QWORD *)(*v12 + 16);
      ++*((_DWORD *)this + 1774);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v12 + 17);
    v16 = 0LL;
    if ( v14 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
LABEL_29:
      v16 = 0LL;
    }
LABEL_22:
    *((_QWORD *)this + 5598) = v16;
    v2 = (__int64 *)((char *)this + 39952);
  }
  if ( (__int64 *)v27 != &v27 )
  {
    v22 = (char *)this + 39952;
    v23 = (__int64 *)*((_QWORD *)this + 4995);
    if ( (VIDMM_GLOBAL *)v9[1] != (VIDMM_GLOBAL *)((char *)this + 39952)
      || (char *)*v23 != v22
      || *(__int64 **)(v27 + 8) != &v27
      || (__int64 *)*v28 != &v27
      || (*v23 = (__int64)&v27,
          v24 = (char **)v28,
          *((_QWORD *)this + 4995) = v28,
          *v24 = v22,
          v25 = v27,
          v28 = v23,
          *(__int64 **)(v27 + 8) != &v27)
      || (__int64 *)*v23 != &v27 )
    {
LABEL_51:
      __fastfail(v10);
    }
    *v23 = v27;
    *(_QWORD *)(v25 + 8) = v23;
  }
  v26 = (VIDMM_GLOBAL *)*((_QWORD *)this + 4994);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 4989) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39904, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 882) = *((_QWORD *)this + 570);
    if ( v26 != (VIDMM_GLOBAL *)((char *)this + 39952) )
      v6 = -qword_140081458;
  }
LABEL_49:
  LOBYTE(v5) = 4;
  VidMmSetWorkerThreadTimeout(*(_QWORD *)this, v6, v5);
}
