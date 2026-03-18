/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x140025748
 * Callers:
 *     VidSchiFlushPendingTokenList @ 0x14001DA00 (VidSchiFlushPendingTokenList.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1400254A0 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140025150 (-DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x140025C28 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x140025E54 (VidSchiPropagatePresentHistoryToken.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140026104 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140026328 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140026374 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1400272E8 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
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
  void *v12; // rax
  __int64 v13; // r14
  void *v14; // r12
  struct _D3DKMT_PRESENTHISTORYTOKEN *v15; // r15
  union _SLIST_HEADER *v16; // r13
  bool v17; // bl
  unsigned int i; // ebx
  __int64 v19; // r14
  __int64 v20; // rcx
  void *v21; // rcx
  struct _VIDSCH_DEVICE *v22; // rbx
  __int64 v23; // r8
  bool v24; // zf
  int v25; // ecx
  char v26; // dl
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rbx
  void *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  void (__fastcall *v39)(_QWORD); // rax
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+28h] [rbp-80h]
  bool v42; // [rsp+38h] [rbp-70h]
  bool v43; // [rsp+40h] [rbp-68h]
  unsigned int v44; // [rsp+60h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a6 & 0x1000000) == 0 )
  {
    WdLogSingleEntry4(8LL, *((_QWORD *)a6 + 13), *((unsigned int *)a6 + 28));
    v12 = (void *)*((_QWORD *)a6 + 70);
    v13 = *((_QWORD *)a6 + 3);
    v14 = 0LL;
    v15 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)a6 + 13);
    v16 = (union _SLIST_HEADER *)*((_QWORD *)a6 + 12);
    WdLogGlobalForLineNumber = 13330;
    if ( v12
      && (v14 = v12,
          v17 = (*((_DWORD *)a6 + 1) & 0x20) != 0,
          ((void (__fastcall *)(void *, _QWORD, _QWORD, _QWORD, _QWORD, bool))DxgCoreInterface[76])(
            v12,
            *((unsigned int *)a6 + 142),
            *((_QWORD *)a6 + 72),
            *((_QWORD *)a6 + 73),
            *((_QWORD *)a6 + 74),
            v17),
          !v17) )
    {
      if ( (*((_DWORD *)a6 + 1) & 0x10) != 0 )
        ExpInterlockedPushEntrySList(v16 + 3, (PSLIST_ENTRY)(&v15[-1].Token.SurfaceComplete + 131));
    }
    else
    {
      if ( v13 )
      {
        v34 = *((_QWORD *)a6 + 100);
        if ( v34 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 16), &LockHandle);
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 12));
          v35 = *(void **)(v13 + 8);
          if ( v35 )
            CRefCountedBuffer::RefCountedBufferRelease(v35);
          *(_QWORD *)(v13 + 8) = v34;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
      {
        v19 = i * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8);
        v20 = *(_QWORD *)((char *)a6 + v19 + 800);
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v20 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v20, (PVOID)v20);
            else
              ExFreePoolWithTag((PVOID)v20, 0);
          }
          *(_QWORD *)((char *)a6 + v19 + 800) = 0LL;
        }
      }
      v21 = (void *)*((_QWORD *)a6 + 4);
      if ( v21 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v21);
        *((_QWORD *)a6 + 4) = 0LL;
      }
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        &v16->Alignment,
        v15,
        0,
        0,
        0,
        a9,
        *((_BYTE *)a6 + 4) & 1,
        v42,
        v43,
        v14);
    }
    return;
  }
  v22 = a5;
  v23 = *((unsigned int *)a6 + 29);
  v24 = !_BitScanForward((unsigned int *)&v25, *((_DWORD *)a6 + 150) & 0x3FF);
  v44 = *((_DWORD *)a6 + 29);
  v26 = -1;
  if ( !v24 )
    v26 = v25;
  v27 = 0;
  if ( v26 != -1 )
    v27 = v26;
  if ( !a5 )
  {
    v28 = *(_QWORD *)((char *)a6 + *((_DWORD *)a6 + 151) * ((8 * *((_DWORD *)a6 + 152) + 231) & 0xFFFFFFF8) + 648);
    if ( v28 )
      v22 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v28 + 8) + 32LL);
    else
      v22 = 0LL;
  }
  v29 = *((_QWORD *)a1 + v23 + 429);
  if ( (_DWORD)v23 == -1 )
    goto LABEL_39;
  v30 = 304LL * (unsigned int)v27;
  v31 = *(int *)(v30 + v29 + 188);
  if ( (int)v31 <= -1 || (v32 = *((_QWORD *)a1 + 445) + 160 * v31) == 0 )
  {
LABEL_28:
    if ( VidSchiCheckTokenIndependentFlipCondition(a1, a6) )
    {
      VidSchiSubmitIndependentFlip(a2, a3, a4, a6, a7, v22);
      return;
    }
    goto LABEL_39;
  }
  v33 = *(_DWORD *)(v32 + 112);
  if ( v33 == 1 )
  {
    if ( !*(_BYTE *)(v32 + 98) || *(_DWORD *)(v30 + v29 + 192) || !*(_BYTE *)(v32 + 96) || *(_DWORD *)(v30 + v29 + 196) )
      goto LABEL_39;
    goto LABEL_28;
  }
  if ( v33 == 2 )
    goto LABEL_28;
LABEL_39:
  if ( *(_DWORD *)(v29 + 44488) != -1 )
  {
    v39 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 413);
    if ( v39 )
      v39(*((_QWORD *)a1 + 419));
  }
  v36 = *(_QWORD *)((char *)a6 + 156);
  v37 = *((_QWORD *)a6 + 13);
  v38 = *((unsigned int *)a6 + 28);
  if ( a8 )
  {
    WdLogSingleEntry5(8LL, v37, v38, 0LL, v36, *((_QWORD *)a6 + 21));
    WdLogGlobalForLineNumber = 13411;
  }
  else
  {
    WdLogSingleEntry5(8LL, v37, v38, v36, *((_QWORD *)a6 + 21), *((_DWORD *)a6 + 1) & 1);
    WdLogGlobalForLineNumber = 13422;
  }
  LOBYTE(v41) = a8;
  LOBYTE(v40) = 0;
  VidSchiPropagatePresentHistoryToken(
    a1,
    *((_QWORD *)a6 + 12),
    *((_QWORD *)a6 + 13),
    0LL,
    v40,
    v41,
    a9,
    *((_QWORD *)a6 + 3),
    (char *)a6 + 600,
    a6,
    0LL,
    0);
  VidSchiUnreferencePrimaryAllocations(
    a2,
    a1,
    v44,
    (struct VIDSCH_SUBMIT_DATA2 *)((char *)a6 + 600),
    *((_DWORD *)a6 + 34),
    *((_DWORD *)a6 + 34),
    0,
    0);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 198);
  DecrementNumberOfQueuedFlipPerSource(a1, v44);
  _InterlockedDecrement((volatile signed __int32 *)v22 + 457);
  _InterlockedDecrement((volatile signed __int32 *)v22 + v44 + 441);
  VidSchiCheckPendingDeviceCommand(v22);
}
