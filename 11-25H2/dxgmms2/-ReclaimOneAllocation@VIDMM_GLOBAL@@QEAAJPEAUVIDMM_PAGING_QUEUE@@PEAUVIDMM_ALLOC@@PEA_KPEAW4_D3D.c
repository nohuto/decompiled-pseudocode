/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F3900 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA_KPEAW4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003822C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14003AE5C (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x14003F394 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0puu_EtwWriteTransfer @ 0x14004081C (McTemplateK0puu_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093BC8 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093C84 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C0750 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4B28 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1400CC1F4 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400CCC64 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  enum _D3DDDI_RECLAIM_RESULT *v5; // r13
  _QWORD **v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v12; // r12d
  int v13; // eax
  int v14; // r12d
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r9
  _QWORD *v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // r8
  void **v29; // rax
  void **v30; // r15
  PRKPROCESS *v31; // rcx
  __int64 v32; // rcx
  _QWORD *v33; // r15
  VIDMM_GLOBAL *v34; // r13
  PRKPROCESS *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v40; // eax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // r14
  _QWORD *v48; // r13
  _QWORD *v49; // r12
  struct VIDMM_WORKER_THREAD **v50; // r14
  _QWORD *v51; // r15
  unsigned __int64 *v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  char v54; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v55[7]; // [rsp+51h] [rbp-AFh] BYREF
  _QWORD *v56; // [rsp+58h] [rbp-A8h]
  VIDMM_GLOBAL *v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h]
  unsigned __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  int v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h]
  struct VIDMM_PAGING_QUEUE *v62; // [rsp+88h] [rbp-78h]
  enum _D3DDDI_RECLAIM_RESULT *v63; // [rsp+90h] [rbp-70h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h] BYREF
  _BOOL8 v65; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v66; // [rsp+A8h] [rbp-58h]
  _QWORD v67[12]; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF
  struct _KAPC_STATE v69; // [rsp+140h] [rbp+40h] BYREF
  struct _KAPC_STATE v70; // [rsp+170h] [rbp+70h] BYREF

  v5 = a5;
  v66 = a4;
  v62 = a2;
  v57 = this;
  v63 = a5;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    WdLogGlobalForLineNumber = 6328;
  }
  v8 = *(_QWORD ***)a3;
  v59 = 0LL;
  v9 = *v8;
  v56 = (_QWORD *)**v8;
  if ( (v9[4] & 0x40) != 0 )
  {
    if ( !a5 )
    {
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 6341;
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)a3 + 1) + 32LL), 20);
      return 3221225485LL;
    }
    v12 = *((_DWORD *)this + 1746);
    if ( (v12 & 0x10000) != 0 )
    {
      v13 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v12 = *((_DWORD *)this + 1746);
  }
  v13 = 0;
LABEL_10:
  v14 = v12 & 8;
  v58 = v13;
  v65 = v14 != 0;
  if ( v13 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, a3);
  }
  else if ( v14 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, a3);
  }
  v54 = 0;
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39904));
  v15 = v9 + 33;
  v16 = v9[33];
  if ( v16 )
  {
    if ( *(_QWORD **)(v16 + 8) != v15 || (v17 = (_QWORD *)v9[34], (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *v15 = 0LL;
  }
  if ( v9[35] )
  {
    v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9[6] + 8LL) + 16LL)
                                            + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                + 40LL)
                    + 32LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v61 + 448, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v61 + 464), 1u);
    v18 = v61;
    v19 = (_QWORD *)(v61 + 472);
    v20 = *(_QWORD **)(v61 + 472);
    if ( v20 != (_QWORD *)(v61 + 472) )
    {
      do
      {
        v21 = (_QWORD *)v20[2];
        if ( v21 == v9 + 35 )
          v20[2] = *v21;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v19 );
    }
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 464));
    ExReleasePushLockSharedEx(v18 + 448, 0LL);
    KeLeaveCriticalRegion();
    v22 = v9[35];
    if ( *(_QWORD **)(v22 + 8) != v9 + 35 || (v23 = (_QWORD *)v9[36], (_QWORD *)*v23 != v9 + 35) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    v9[35] = 0LL;
    v54 = 1;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 4989) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39904, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 17));
  v24 = *(unsigned __int16 *)(*((_QWORD *)a3 + 12) + 8LL);
  *(_WORD *)(*((_QWORD *)a3 + 12) + 8LL) = 0;
  v25 = (__int16)v24;
  v60 = (__int16)v24;
  if ( !(_WORD)v24 )
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 6397;
    DxgkLogInternalTriageEvent(v26, 0x40000LL);
    if ( a5 )
      *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
    return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  v27 = 0;
  v28 = v9[4] & 0x20;
  LODWORD(v61) = v9[4] & 0x20;
  if ( v54 )
  {
    v24 = *(_QWORD *)(v9[6] + 8LL);
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(v24 + 32) + 440LL), -v56[2]);
  }
  if ( !(_DWORD)v28 )
  {
    if ( !v58 && (*(_DWORD *)(*(_QWORD *)(v9[6] + 8LL) + 112LL) & 4) == 0 )
    {
      v27 = VIDMM_GLOBAL::CommitGlobalBackingStore(v57, (struct VIDMM_GLOBAL_ALLOC *)v9);
      if ( v27 >= 0 )
      {
        v29 = (void **)(v9 + 14);
        v30 = (void **)v9[14];
        while ( 1 )
        {
          if ( v30 == v29 )
          {
            v25 = v60;
            v28 = (unsigned int)v61;
            *((_BYTE *)v9 + 42) = 0;
            goto LABEL_43;
          }
          v31 = (PRKPROCESS *)*(v30 - 5);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(*v31, &ApcState);
          v55[0] = 1;
          v27 = VIDMM_GLOBAL::CommitLocalBackingStore(v57, v30 - 6, v55, 0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( v27 < 0 )
            break;
          v30 = (void **)*v30;
          v29 = (void **)(v9 + 14);
        }
        WdLogSingleEntry1(1LL, v30 - 6);
        WdLogGlobalForLineNumber = 6474;
        DxgkLogInternalTriageEvent(v32, 0x40000LL);
        v33 = v30[1];
        if ( v33 != v9 + 14 )
        {
          v34 = v57;
          do
          {
            v35 = (PRKPROCESS *)*(v33 - 5);
            memset(&v69, 0, sizeof(v69));
            KeStackAttachProcess(*v35, &v69);
            VIDMM_GLOBAL::UncommitLocalBackingStore(v34, (struct VIDMM_LOCAL_ALLOC *)(v33 - 6), 1);
            KeUnstackDetachProcess(&v69);
            v33 = (_QWORD *)v33[1];
          }
          while ( v33 != v9 + 14 );
          v5 = v63;
        }
        VIDMM_GLOBAL::UncommitGlobalBackingStore(v57, (struct VIDMM_GLOBAL_ALLOC *)v9, 0);
      }
    }
    v27 = 0;
    *(_WORD *)(*((_QWORD *)a3 + 12) + 8LL) = 3;
    *v5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedAdd(&dword_1400817E0, 1u);
    WdLogSingleEntry1(6LL, v9);
    WdLogGlobalForLineNumber = 6524;
    DxgkLogInternalTriageEvent(v36, 262145LL);
    goto LABEL_95;
  }
LABEL_43:
  *((_DWORD *)v9 + 8) &= ~0x40u;
  if ( !a5 )
  {
    *((_BYTE *)v9 + 42) = 0;
    goto LABEL_74;
  }
  if ( v25 == 1 )
  {
    *a5 = D3DDDI_RECLAIM_RESULT_OK;
  }
  else
  {
    if ( v25 == 3 )
      *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
    if ( (_DWORD)v28 && !v56[8] && *((_BYTE *)v9 + 42) && !*((_BYTE *)v9 + 43) && (v9[4] & 8) != 0 )
    {
      if ( !v14 )
      {
        v37 = v9[6];
        if ( v37 )
        {
          v24 = *(_QWORD *)(v37 + 8);
          if ( v24 )
          {
            memset(&v70, 0, sizeof(v70));
            KeStackAttachProcess(*(PRKPROCESS *)v24, &v70);
            v38 = v9[6];
            if ( (*(_DWORD *)v9[47] & 0x20000000) != 0 )
            {
              v64 = *(_QWORD *)(v38 + 16);
              v63 = (enum _D3DDDI_RECLAIM_RESULT *)v56[2];
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              v40 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, enum _D3DDDI_RECLAIM_RESULT **, int, int))VirtualMemoryInterface)(
                      -1LL,
                      &v64,
                      0LL,
                      &v63,
                      0x1000000,
                      4);
            }
            else
            {
              v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v38 + 8) + 24LL) + 120LL))(
                      *(_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL),
                      v9[29]);
            }
            v27 = v40;
            KeUnstackDetachProcess(&v70);
            if ( v27 < 0 )
            {
              *((_BYTE *)v9 + 42) = 0;
              WdLogSingleEntry1(4LL, v27);
              v27 = 0;
              WdLogGlobalForLineNumber = 6612;
            }
            else
            {
              *a5 = D3DDDI_RECLAIM_RESULT_OK;
              v9[38] = 0LL;
              WdLogSingleEntry1(4LL, v9);
              WdLogGlobalForLineNumber = 6607;
            }
            if ( (byte_140081241 & 1) != 0 )
            {
              LODWORD(v53) = v56[2] >> 12;
              McTemplateK0pqqt_EtwWriteTransfer(v27 >= 0, v41, v28, v9);
            }
            *((_DWORD *)v9 + 8) &= ~8u;
          }
        }
        goto LABEL_74;
      }
      goto LABEL_47;
    }
  }
  if ( v14 )
LABEL_47:
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
LABEL_74:
  if ( (byte_140081241 & 1) != 0 )
  {
    LOBYTE(v53) = v25;
    LOBYTE(v52) = *((_BYTE *)v9 + 296);
    McTemplateK0puu_EtwWriteTransfer(v24, &EventReclaimAllocation, v28, a3, v52, v53);
  }
  if ( v14 || v25 == 3 || v25 == 2 && (*((_DWORD *)v9 + 7) & 0x40) != 0 || !*((_DWORD *)v9 + 18) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
      v44[4] = v65;
      v44[5] = v25;
      v44[3] = a3;
      v45 = ((unsigned __int64)*((unsigned int *)v9 + 7) >> 6) & 1;
      v44[7] = 0LL;
      v44[6] = v45;
      WdLogGlobalForLineNumber = 6694;
    }
    v46 = v9 + 14;
    v47 = (_QWORD *)v9[14];
    v56 = v47;
    if ( v47 != v9 + 14 )
    {
      do
      {
        v48 = v47 - 2;
        v49 = (_QWORD *)*(v47 - 2);
        if ( v49 != v47 - 2 )
        {
          v50 = (struct VIDMM_WORKER_THREAD **)v57;
          do
          {
            v51 = v49 - 5;
            if ( (*(_DWORD *)(v49 - 1) & 1) == 0 && VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)(v49 - 5)) )
            {
              memset(v67, 0, 0x58uLL);
              LODWORD(v67[0]) = 210;
              v67[2] = v49 - 5;
              v27 = VIDMM_GLOBAL::QueueDeferredCommand(v50, v62, (struct _VIDMM_DEFERRED_COMMAND *)v67, 0, &v59);
              if ( (*((_DWORD *)v51 + 7) & 0x20) != 0 )
              {
                v51[32] = v62;
                v51[35] = v59;
              }
            }
            v49 = (_QWORD *)*v49;
          }
          while ( v49 != v48 );
          v47 = v56;
          v46 = v9 + 14;
        }
        v47 = (_QWORD *)*v47;
        v56 = v47;
      }
      while ( v47 != v46 );
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
    v42[5] = v25;
    v42[3] = a3;
    v42[4] = 0LL;
    v43 = ((unsigned __int64)*((unsigned int *)v9 + 7) >> 6) & 1;
    v42[7] = 1LL;
    v42[6] = v43;
    WdLogGlobalForLineNumber = 6747;
  }
LABEL_95:
  DXGFASTMUTEX::Release((struct _KTHREAD **)v9 + 17);
  if ( v27 == 259 )
  {
    if ( v66 )
    {
      *v66 = v59;
    }
    else
    {
      VIDMM_GLOBAL::WaitForFence(v57, *((struct _VIDSCH_SYNC_OBJECT **)v62 + 11), v59);
      return 0;
    }
  }
  return (unsigned int)v27;
}
