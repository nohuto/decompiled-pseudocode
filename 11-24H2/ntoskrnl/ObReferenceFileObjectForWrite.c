/*
 * XREFs of ObReferenceFileObjectForWrite @ 0x140863440
 * Callers:
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
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
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 */

__int64 __fastcall ObReferenceFileObjectForWrite(
        ULONG_PTR BugCheckParameter1,
        char a2,
        struct _DMA_ADAPTER **a3,
        int *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v6; // rbp
  _KPROCESS *Process; // rax
  __int64 KernelTime; // r13
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  signed __int64 v13; // r14
  __int64 v14; // rsi
  __int128 v15; // rt0
  unsigned __int8 v16; // tt
  volatile signed __int64 *HandlePointer; // rbx
  struct _DMA_ADAPTER *v18; // r15
  __int64 v19; // rsi
  unsigned int v20; // edx
  char v21; // al
  char *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ebx
  int v27; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v29; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( a2 || BugCheckParameter1 == -1LL || BugCheckParameter1 == -2LL )
      return 3221225480LL;
    KernelTime = ObpKernelHandleTable;
    v6 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    KernelTime = Process[1].KernelTime;
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
      return 3221225480LL;
  }
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) == 0
    || (v10 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)KernelTime, v6), (v11 = v10) == 0LL) )
  {
LABEL_40:
    if ( v6 )
      ExHandleLogBadReference(KernelTime, v6, KeGetCurrentThread()->PreviousMode);
    KeLeaveCriticalRegionThread();
    v26 = -1073741816;
    goto LABEL_39;
  }
  _m_prefetchw(v10);
  v12 = *v10;
LABEL_11:
  v13 = v11[1];
  *(_QWORD *)&v29 = v12;
  v14 = v12;
  *((_QWORD *)&v29 + 1) = v13;
  do
  {
    if ( (v14 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v23 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v23 )
            goto LABEL_40;
          ExpBlockOnLockedHandleEntry(KernelTime, v11, v23);
        }
      }
      while ( v23 != _InterlockedCompareExchange64(v11, v23 - 1, v23) );
      HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v11);
      v29 = *(_OWORD *)v11;
      v24 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v11) + 1);
      v25 = _InterlockedExchangeAdd64(HandlePointer, v24);
      if ( v25 <= 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v24 + v25);
      _InterlockedIncrement64(v11);
      _InterlockedOr(v28, 0);
      if ( *(_QWORD *)(KernelTime + 48) )
        ExfUnblockPushLock(KernelTime + 48, 0LL);
LABEL_34:
      LODWORD(v13) = DWORD2(v29);
      v14 = v29;
      goto LABEL_18;
    }
    if ( (v14 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(KernelTime, v11, v14);
      _m_prefetchw(v11);
      v12 = *v11;
      goto LABEL_11;
    }
    *(_QWORD *)&v15 = v14;
    *((_QWORD *)&v15 + 1) = v13;
    v16 = _InterlockedCompareExchange128(v11, v13, v14 - 2, (signed __int64 *)&v15);
    v14 = v15;
    v29 = v15;
    v13 = *((_QWORD *)&v15 + 1);
  }
  while ( !v16 );
  if ( (unsigned __int16)((unsigned __int64)v14 >> 1) != 16 )
  {
    HandlePointer = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)&v29);
    goto LABEL_18;
  }
  *(_QWORD *)&v29 = v14 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v14 >> 1) - 1));
  HandlePointer = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)&v29);
  ObpIncrPointerCountEx(HandlePointer, 32752);
  v27 = ExFastReplenishHandleTableEntry(v11, (unsigned __int64 *)&v29, 32752);
  if ( !v27 )
    goto LABEL_34;
  _InterlockedAdd64(HandlePointer, -v27);
  LODWORD(v13) = DWORD2(v29);
  v14 = v29;
LABEL_18:
  KeLeaveCriticalRegionThread();
  ObpTraceObjectReferenceIfActive((int)HandlePointer);
  v18 = (struct _DMA_ADAPTER *)(HandlePointer + 6);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] != IoFileObjectType )
  {
    v26 = -1073741788;
    goto LABEL_38;
  }
  v19 = (v14 >> 17) & 7;
  v20 = (~*((_BYTE *)HandlePointer + 128) & 0x80 | 0x40u) >> 5;
  a4[1] = v13 & 0x1FFFFFF;
  v21 = v19 | 8;
  if ( (v13 & 0x2000000) == 0 )
    v21 = v19;
  *a4 = v21 & 7;
  if ( (v13 & 0x1FFFFFF & v20) == 0 )
  {
    v26 = -1073741790;
    goto LABEL_38;
  }
  if ( a2 )
  {
    if ( (*((_BYTE *)HandlePointer + 26) & 0x40) != 0 )
    {
      v22 = (char *)HandlePointer - ObpInfoMaskToOffset[*((_BYTE *)HandlePointer + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v22 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v22 + 16LL) == 1LL )
        {
          v26 = -1073700858;
          goto LABEL_38;
        }
      }
    }
  }
  if ( (*a4 & 4) != 0 && a2 && !(unsigned __int8)ObpAuditObjectAccess(KernelTime, v6, v11, HandlePointer, v20) )
  {
    v26 = -1073741816;
LABEL_38:
    HalPutDmaAdapter(v18);
LABEL_39:
    *a3 = 0LL;
    return v26;
  }
  else
  {
    *a3 = v18;
    return 0LL;
  }
}
