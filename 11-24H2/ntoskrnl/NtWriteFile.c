/*
 * XREFs of NtWriteFile @ 0x1408BEB30
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14060B8A4 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     DifNtWriteFileWrapper @ 0x140634280 (DifNtWriteFileWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ObpIncrPointerCountEx @ 0x1404091E0 (ObpIncrPointerCountEx.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x14046E920 (ExFastReplenishHandleTableEntry.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  ULONG_PTR v9; // rbp
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rax
  __int64 KernelTime; // r13
  NTSTATUS v13; // ebx
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  signed __int64 v18; // r14
  __int64 v19; // rsi
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  volatile signed __int64 *HandlePointer; // rbx
  struct _DMA_ADAPTER *v23; // r15
  __int64 v24; // rsi
  unsigned int v25; // r8d
  char v26; // dl
  char *v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  struct _DMA_ADAPTER *v33; // rcx
  struct _DMA_ADAPTER *v34; // rcx
  signed __int32 v35[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v36[11]; // [rsp+70h] [rbp-58h] BYREF
  char PreviousMode; // [rsp+D0h] [rbp+8h]

  v9 = (ULONG_PTR)FileHandle;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (int)FileHandle < 0 )
  {
    if ( CurrentThread->PreviousMode || (unsigned __int64)FileHandle > 0xFFFFFFFFFFFFFFFDuLL )
      return -1073741816;
    KernelTime = ObpKernelHandleTable;
    v9 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    KernelTime = Process[1].KernelTime;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
      return -1073741816;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v9 & 0x3FC) == 0
    || (v15 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v9), (v16 = v15) == 0LL) )
  {
LABEL_42:
    if ( v9 )
      ExHandleLogBadReference(KernelTime, v9, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread();
    return -1073741816;
  }
  _m_prefetchw(v15);
  v17 = *v15;
LABEL_11:
  v18 = v16[1];
  v36[0] = v17;
  v19 = v17;
  v36[1] = v18;
  do
  {
    if ( (v19 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v16);
          v29 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v29 )
            goto LABEL_42;
          ExpBlockOnLockedHandleEntry(KernelTime, v16, v29);
        }
      }
      while ( v29 != _InterlockedCompareExchange64(v16, v29 - 1, v29) );
      HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v16);
      *(_OWORD *)v36 = *(_OWORD *)v16;
      v30 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v31 = _InterlockedExchangeAdd64(HandlePointer, v30);
      if ( v31 <= 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v30 + v31);
      _InterlockedIncrement64(v16);
      _InterlockedOr(v35, 0);
      if ( *(_QWORD *)(KernelTime + 48) )
        ExfUnblockPushLock(KernelTime + 48, 0LL);
LABEL_34:
      LODWORD(v18) = v36[1];
      v19 = v36[0];
      goto LABEL_18;
    }
    if ( (v19 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(KernelTime, v16, v19);
      _m_prefetchw(v16);
      v17 = *v16;
      goto LABEL_11;
    }
    *(_QWORD *)&v20 = v19;
    *((_QWORD *)&v20 + 1) = v18;
    v21 = _InterlockedCompareExchange128(v16, v18, v19 - 2, (signed __int64 *)&v20);
    v19 = v20;
    *(_OWORD *)v36 = v20;
    v18 = *((_QWORD *)&v20 + 1);
  }
  while ( !v21 );
  if ( (unsigned __int16)((unsigned __int64)v19 >> 1) != 16 )
  {
    HandlePointer = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v36);
    goto LABEL_18;
  }
  v36[0] = v19 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v19 >> 1) - 1));
  HandlePointer = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v36);
  ObpIncrPointerCountEx(HandlePointer, 32752);
  v32 = ExFastReplenishHandleTableEntry(v16, v36, 32752);
  if ( !v32 )
    goto LABEL_34;
  _InterlockedAdd64(HandlePointer, -v32);
  LODWORD(v18) = v36[1];
  v19 = v36[0];
LABEL_18:
  KeLeaveCriticalRegionThread();
  ObpTraceObjectReferenceIfActive((int)HandlePointer);
  v23 = (struct _DMA_ADAPTER *)(HandlePointer + 6);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] != IoFileObjectType )
  {
    v13 = -1073741788;
    goto LABEL_38;
  }
  v24 = (v19 >> 17) & 7;
  v25 = (~*((_BYTE *)HandlePointer + 128) & 0x80 | 0x40u) >> 5;
  v26 = v24 | 8;
  if ( (v18 & 0x2000000) == 0 )
    v26 = v24;
  if ( (v18 & 0x1FFFFFF & v25) == 0 )
  {
    v13 = -1073741790;
LABEL_38:
    HalPutDmaAdapter(v23);
    return v13;
  }
  if ( PreviousMode )
  {
    if ( (*((_BYTE *)HandlePointer + 26) & 0x40) != 0 )
    {
      v27 = (char *)HandlePointer - ObpInfoMaskToOffset[*((_BYTE *)HandlePointer + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v27 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v27 + 16LL) == 1LL )
        {
          v33 = (struct _DMA_ADAPTER *)(HandlePointer + 6);
          v13 = -1073700858;
          HalPutDmaAdapter(v33);
          return v13;
        }
      }
    }
  }
  if ( (v26 & 4) != 0
    && PreviousMode
    && !ObpAuditObjectAccess((unsigned int *)KernelTime, v9, v16, (__int64)HandlePointer, v25) )
  {
    v34 = (struct _DMA_ADAPTER *)(HandlePointer + 6);
    v13 = -1073741816;
    HalPutDmaAdapter(v34);
    return v13;
  }
  else
  {
    v28 = (_DWORD *)*((_QWORD *)HandlePointer + 32);
    if ( v28 && (*v28 & 4) != 0 && PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject((PVOID)(HandlePointer + 6));
      return -1073739504;
    }
    return IopWriteFile(
             (ULONG_PTR)(HandlePointer + 6),
             (__int64)IoStatusBlock,
             (__int64)Buffer,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             v18 & 0x1FFFFFF,
             0LL,
             0LL,
             0,
             0LL);
  }
}
