/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400ECFEC
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400AD620 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B1B5C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1400F18DC (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FBB90 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  __int64 *v2; // r13
  char *v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // r12d
  __int64 i; // r10
  __int64 *v10; // r15
  unsigned int v11; // r11d
  __int64 *v12; // r14
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // r9
  __int16 v15; // ax
  bool v16; // zf
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rax
  char *v20; // rdx
  __int64 *v21; // rcx
  char **v22; // rax
  __int64 v23; // rax
  VIDMM_GLOBAL *v24; // r15
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-8h]
  int v27; // [rsp+88h] [rbp+48h]
  struct VIDMM_PHYSICAL_ALLOC *v28; // [rsp+90h] [rbp+50h]
  VIDMM_PHYSICAL_ADAPTER *v29; // [rsp+98h] [rbp+58h]

  if ( !qword_140081478 )
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
    if ( v7 < qword_140081478 )
    {
      v6 = v7 - qword_140081478;
      goto LABEL_49;
    }
  }
  v26 = &v25;
  v8 = 0;
  v25 = (__int64)&v25;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
  for ( i = 0LL; ; *((_QWORD *)this + 5598) = i )
  {
    v10 = (__int64 *)*v2;
    v11 = 3;
    if ( (__int64 *)*v2 == v2 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v12 = v10 - 35;
    v13 = (VIDMM_GLOBAL *)(*(_DWORD *)(v10 - 32) & 0x3F);
    v27 = i;
    v28 = (struct VIDMM_PHYSICAL_ALLOC *)*(v10 - 35);
    v29 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (_QWORD)v13);
    *((_QWORD *)this + 5598) = v10 - 35;
    VIDMM_GLOBAL::RemoveAllocationFromOfferList(v13, (struct VIDMM_GLOBAL_ALLOC *)(v10 - 35));
    v15 = *(_WORD *)(v10[14] + 8);
    if ( v15 != 2 )
    {
      if ( !v15 || (v16 = v15 == (__int16)v11, v17 = i, v16) )
        v17 = 1;
      if ( v17 )
        continue;
      goto LABEL_20;
    }
    v19 = *(_QWORD *)(v14 + 64);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 104) & 0x1001) != 0 )
      {
        if ( !v8 )
        {
          v8 = 1;
          VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3E8u);
          i = 0LL;
          v11 = 3;
        }
        if ( (*((_DWORD *)this + 1746) & 0x8000) != 0
          || *((_QWORD *)this + 570) - v12[40] > qword_140081488[*((int *)v12 + 78)] )
        {
          *((_DWORD *)v12 + 7) |= 0x40u;
          *((_QWORD *)v3 + 1) = i;
          ExReleasePushLockExclusiveEx(v3, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)(v10 - 35));
          VIDMM_PHYSICAL_ADAPTER::EvictResources(v29, v28, 1, 0, 0, 0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
          *((_QWORD *)this + 886) += *(_QWORD *)(*v12 + 16);
          ++*((_DWORD *)this + 1774);
          goto LABEL_29;
        }
      }
LABEL_20:
      v18 = v26;
      if ( (__int64 *)*v26 != &v25 )
        goto LABEL_51;
      v10[1] = (__int64)v26;
      *v10 = (__int64)&v25;
      *v18 = (__int64)v10;
      v26 = v10;
      continue;
    }
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 17));
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct VIDMM_GLOBAL_ALLOC *)v12)
      && (v12[4] & 8) == 0 )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      v27 = 1;
      VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v29, v28);
      VIDMM_GLOBAL::ResetBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)v12);
      *((_QWORD *)this + 886) += *(_QWORD *)(*v12 + 16);
      ++*((_DWORD *)this + 1774);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v12 + 17);
    i = 0LL;
    if ( v27 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
LABEL_29:
      i = 0LL;
      continue;
    }
  }
  if ( (__int64 *)v25 != &v25 )
  {
    v20 = (char *)this + 39952;
    v21 = (__int64 *)*((_QWORD *)this + 4995);
    if ( (VIDMM_GLOBAL *)v10[1] != (VIDMM_GLOBAL *)((char *)this + 39952)
      || (char *)*v21 != v20
      || *(__int64 **)(v25 + 8) != &v25
      || (__int64 *)*v26 != &v25
      || (*v21 = (__int64)&v25,
          v22 = (char **)v26,
          *((_QWORD *)this + 4995) = v26,
          *v22 = v20,
          v23 = v25,
          v26 = v21,
          *(__int64 **)(v25 + 8) != &v25)
      || (__int64 *)*v21 != &v25 )
    {
LABEL_51:
      __fastfail(v11);
    }
    *v21 = v25;
    *(_QWORD *)(v23 + 8) = v21;
  }
  v24 = (VIDMM_GLOBAL *)*((_QWORD *)this + 4994);
  *((_QWORD *)v3 + 1) = i;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0LL, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 882) = *((_QWORD *)this + 570);
    if ( v24 != (VIDMM_GLOBAL *)((char *)this + 39952) )
      v6 = -qword_140081478;
  }
LABEL_49:
  LOBYTE(v5) = 4;
  VidMmSetWorkerThreadTimeout(*(_QWORD *)this, v6, v5);
}
