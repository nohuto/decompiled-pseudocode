/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x140014038 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x140012ACC (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140012DDC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140013A64 (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140013D14 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1400147C0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003E474 (-DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        struct HwQueueStagingList *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDSCH_HW_QUEUE *a4,
        struct _VIDSCH_DEVICE *a5,
        struct VIDSCH_SUBMIT_DATA2 *a6,
        union _ULARGE_INTEGER a7,
        bool a8,
        bool a9)
{
  __int64 v12; // rax
  __int64 v13; // r14
  struct _D3DKMT_PRESENTHISTORYTOKEN *v14; // r15
  union _SLIST_HEADER *v15; // r13
  bool v16; // bl
  unsigned int i; // ebx
  __int64 v18; // r14
  __int64 v19; // rcx
  void *v20; // rcx
  struct _VIDSCH_DEVICE *v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  int v24; // ecx
  char v25; // dl
  char v26; // cl
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rbx
  void *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  void (__fastcall *v39)(_QWORD); // rax
  unsigned int v40; // [rsp+60h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a6 & 0x1000000) == 0 )
  {
    WdLogSingleEntry4(8LL, *((_QWORD *)a6 + 13), *((unsigned int *)a6 + 28));
    v12 = *((_QWORD *)a6 + 70);
    v13 = *((_QWORD *)a6 + 3);
    v14 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a6 + 13);
    v15 = (union _SLIST_HEADER *)*((_QWORD *)a6 + 12);
    WdLogGlobalForLineNumber = 13277;
    if ( v12
      && (v16 = (*((_DWORD *)a6 + 1) & 0x20) != 0,
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[76])(
            v12,
            *((unsigned int *)a6 + 142),
            *((_QWORD *)a6 + 72),
            *((_QWORD *)a6 + 73),
            *((_QWORD *)a6 + 74),
            v16),
          !v16) )
    {
      if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
        ExpInterlockedPushEntrySList(v15 + 3, (PSLIST_ENTRY)(&v14[-1].Token.SurfaceComplete + 131));
    }
    else
    {
      if ( v13 )
      {
        v33 = *((_QWORD *)a6 + 100);
        if ( v33 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v33 + 12));
          v34 = *(void **)(v13 + 8);
          if ( v34 )
            CRefCountedBuffer::RefCountedBufferRelease(v34);
          *(_QWORD *)(v13 + 8) = v33;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
      {
        v18 = i * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8);
        v19 = *(_QWORD *)((char *)a6 + v18 + 800);
        if ( v19 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v19 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v19, (PVOID)v19);
            else
              ExFreePoolWithTag((PVOID)v19, 0);
          }
          *(_QWORD *)((char *)a6 + v18 + 800) = 0LL;
        }
      }
      v20 = (void *)*((_QWORD *)a6 + 4);
      if ( v20 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v20);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        &v15->Alignment,
        v14,
        0,
        0,
        0,
        a9,
        *((_BYTE *)a6 + 4) & 1);
    }
    return;
  }
  v21 = a5;
  v22 = *((unsigned int *)a6 + 29);
  v23 = !_BitScanForward((unsigned int *)&v24, *((_DWORD *)a6 + 150) & 0x3FF);
  v40 = *((_DWORD *)a6 + 29);
  v25 = -1;
  if ( !v23 )
    v25 = v24;
  v26 = 0;
  if ( v25 != -1 )
    v26 = v25;
  if ( !a5 )
  {
    v27 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 151) * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8) + 648);
    if ( v27 )
      v21 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v27 + 8) + 32LL);
    else
      v21 = 0LL;
  }
  v28 = *((_QWORD *)a1 + v22 + 429);
  if ( (_DWORD)v22 == -1 )
    goto LABEL_39;
  v29 = 304LL * (unsigned int)v26;
  v30 = *(int *)(v29 + v28 + 188);
  if ( (int)v30 <= -1 || (v31 = *((_QWORD *)a1 + 445) + 160 * v30) == 0 )
  {
LABEL_28:
    if ( VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v21);
      return;
    }
    goto LABEL_39;
  }
  v32 = *(_DWORD *)(v31 + 112);
  if ( v32 == 1 )
  {
    if ( !*(_BYTE *)(v31 + 98) || *(_DWORD *)(v29 + v28 + 192) || !*(_BYTE *)(v31 + 96) || *(_DWORD *)(v29 + v28 + 196) )
      goto LABEL_39;
    goto LABEL_28;
  }
  if ( v32 == 2 )
    goto LABEL_28;
LABEL_39:
  if ( *(_DWORD *)(v28 + 44488) != -1 )
  {
    v39 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 413);
    if ( v39 )
      v39(*((_QWORD *)a1 + 419));
  }
  v35 = *(_QWORD *)((char *)a6 + 156);
  v36 = *((_QWORD *)a6 + 13);
  v37 = *((unsigned int *)a6 + 28);
  if ( a8 )
  {
    WdLogSingleEntry5(8LL, v36, v37, 0LL, v35, *((_QWORD *)a6 + 21));
    WdLogGlobalForLineNumber = 13358;
  }
  else
  {
    WdLogSingleEntry5(8LL, v36, v37, v35, *((_QWORD *)a6 + 21), *((_DWORD *)a6 + 1) & 1);
    WdLogGlobalForLineNumber = 13369;
  }
  VidSchiPropagatePresentHistoryToken(
    (__int64)a1,
    *((union _SLIST_HEADER **)a6 + 12),
    *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a6 + 13),
    0,
    0,
    a8,
    a9,
    *((_QWORD *)a6 + 3),
    (__int64)a6 + 600,
    (__int64)a6,
    0LL,
    0);
  VidSchiUnreferencePrimaryAllocations(
    a2,
    a1,
    v40,
    (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 600),
    *((_DWORD *)a6 + 34),
    *((_DWORD *)a6 + 34),
    0,
    0);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 198);
  DecrementNumberOfQueuedFlipPerSource(a1, v40);
  _InterlockedDecrement((volatile signed __int32 *)v21 + 457);
  _InterlockedDecrement((volatile signed __int32 *)v21 + v40 + 441);
  VidSchiCheckPendingDeviceCommand(v21, v38);
}
