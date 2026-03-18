/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x140013A64
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x140013D14 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        __int64 a1,
        union _SLIST_HEADER *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        bool a4,
        bool a5,
        bool a6,
        bool a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  BOOL v12; // ebx
  void *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // si
  int v23; // esi
  unsigned int i; // esi
  __int64 v25; // rbp
  __int64 v26; // rcx
  void *v27; // rcx
  __int64 v28; // rbp
  void *v29; // rcx
  bool v30; // [rsp+38h] [rbp-60h]
  bool v31; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  LOBYTE(v12) = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( a10 && *(_QWORD *)(a10 + 560) )
  {
    v17 = *(void **)(a10 + 560);
    v18 = *(unsigned int *)(a10 + 568);
    v19 = *(_QWORD *)(a10 + 576);
    v20 = *(_QWORD *)(a10 + 584);
    v21 = *(_QWORD *)(a10 + 592);
    v23 = *(_DWORD *)(a10 + 4) >> 5;
LABEL_4:
    v22 = v23 & 1;
    goto LABEL_5;
  }
  if ( a11 && *(_QWORD *)a11 )
  {
    v18 = *(unsigned int *)(a11 + 8);
    v17 = *(void **)a11;
    v19 = *(_QWORD *)(a11 + 16);
    v20 = *(_QWORD *)(a11 + 24);
    v21 = *(_QWORD *)(a11 + 32);
    LOBYTE(v23) = *(_BYTE *)(a11 + 40);
    goto LABEL_4;
  }
LABEL_5:
  if ( a4 && !a12 )
  {
    v17 = 0LL;
LABEL_7:
    if ( a8 )
    {
      v28 = *(_QWORD *)(a9 + 200);
      if ( v28 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a8 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 12));
        v29 = *(void **)(a8 + 8);
        if ( v29 )
          CRefCountedBuffer::RefCountedBufferRelease(v29);
        *(_QWORD *)(a8 + 8) = v28;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    if ( a10 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 152); ++i )
      {
        v25 = i * ((8 * *(_DWORD *)(a10 + 608) + 231) & 0xFFFFFFF8);
        v26 = *(_QWORD *)(a10 + v25 + 800);
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v26 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v26, (PVOID)v26);
            else
              ExFreePoolWithTag((PVOID)v26, 0);
          }
          *(_QWORD *)(a10 + v25 + 800) = 0LL;
        }
      }
      v27 = *(void **)(a10 + 32);
      if ( v27 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v27);
        *(_QWORD *)(a10 + 32) = 0LL;
      }
      v12 = *(_DWORD *)(a10 + 4) & 1;
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(&a2->Alignment, a3, a4, a5, a6, a7, v12, v30, v31, v17);
    return;
  }
  if ( !v17 )
    goto LABEL_7;
  ((void (__fastcall *)(void *, __int64, __int64, __int64, __int64, char))DxgCoreInterface[76])(
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( v22 )
    goto LABEL_7;
  if ( (*(_DWORD *)(a10 + 4) & 0x10) != 0 )
    ExpInterlockedPushEntrySList(a2 + 3, (PSLIST_ENTRY)(&a3[-1].Token.SurfaceComplete + 131));
}
