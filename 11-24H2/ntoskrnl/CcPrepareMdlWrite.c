/*
 * XREFs of CcPrepareMdlWrite @ 0x14040B2B0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     CcMapAndRead @ 0x140236280 (CcMapAndRead.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v6; // edi
  unsigned int v8; // r14d
  char *SharedCacheMap; // r15
  LONGLONG QuadPart; // rbx
  LONGLONG v11; // rsi
  LONGLONG v12; // r12
  LONGLONG v13; // rcx
  ULONG v14; // r14d
  int v15; // edi
  signed __int64 v16; // rbx
  char v17; // bl
  __int64 v18; // rbx
  struct _KEVENT *v19; // rcx
  PMDL v20; // rcx
  struct _MDL *Next; // rax
  __int64 v22; // rcx
  PIO_STATUS_BLOCK v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // [rsp+3Ch] [rbp-BCh]
  struct _MDL *MemoryDescriptorList; // [rsp+40h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-A8h] BYREF
  LONGLONG v28; // [rsp+58h] [rbp-A0h]
  char *v29; // [rsp+60h] [rbp-98h]
  LONGLONG v30; // [rsp+68h] [rbp-90h]
  PVOID VirtualAddress; // [rsp+70h] [rbp-88h]
  PMDL i; // [rsp+78h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *v35; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v36; // [rsp+A8h] [rbp-50h]
  ULONG Lengtha; // [rsp+100h] [rbp+8h] BYREF
  PLARGE_INTEGER v38; // [rsp+108h] [rbp+10h]
  ULONG v39; // [rsp+110h] [rbp+18h]
  PMDL *v40; // [rsp+118h] [rbp+20h]

  v40 = MdlChain;
  v39 = Length;
  v38 = FileOffset;
  v6 = Length;
  v8 = 0;
  LODWORD(v25) = 0;
  v27 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  v29 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v28 = QuadPart;
  v11 = QuadPart;
  v12 = QuadPart;
  while ( v6 )
  {
    Lengtha = 0;
    v30 = 0LL;
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v27, &Lengtha, 0, 0);
    v13 = v11;
    v14 = Lengtha;
    if ( Lengtha > v6 )
    {
      v14 = v6;
      Lengtha = v6;
      v13 = v12;
    }
    v11 = v13 + v14;
    v30 = v11;
    v15 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v14 >= 0x1000 )
      v15 = 3;
    if ( (v11 & 0xFFF) == 0 )
      v15 |= 4u;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    v16 = *((_QWORD *)SharedCacheMap + 6) - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    if ( v16 <= 0 )
    {
      v15 |= 7u;
    }
    else if ( (unsigned int)v16 <= 0x1000 && !HIDWORD(v16) )
    {
      v15 |= 6u;
    }
    CcMapAndRead(v14, v15, 1, (__int64)VirtualAddress);
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, v14, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v17 = BYTE5(CurrentThread[1].Queue);
    v35 = CurrentThread;
    BYTE5(CurrentThread[1].Queue) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoWriteAccess);
    v36 = KeGetCurrentThread();
    BYTE5(v36[1].Queue) = v17;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    if ( v11 > *((_QWORD *)SharedCacheMap + 6) )
      *((_QWORD *)SharedCacheMap + 6) = v11;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    v18 = *(_QWORD *)(v27 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v27 + 16)) )
    {
      v19 = *(struct _KEVENT **)(v18 + 192);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 552));
    }
    v27 = 0LL;
    v20 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v20->Next;
        if ( !v20->Next )
          break;
        v20 = v20->Next;
      }
      v20->Next = MemoryDescriptorList;
    }
    else
    {
      *MdlChain = MemoryDescriptorList;
    }
    QuadPart = v11;
    v28 = v11;
    v12 = v11;
    v8 = Lengtha + v25;
    v25 = Lengtha + (unsigned int)v25;
    v6 = v39 - Lengtha;
    v39 -= Lengtha;
  }
  v22 = *((_QWORD *)SharedCacheMap + 67);
  v23 = IoStatus;
  IoStatus->Status = 0;
  v23->Information = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 768), &LockHandle);
  CcIncrementOpenCount((__int64)SharedCacheMap, v24, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
