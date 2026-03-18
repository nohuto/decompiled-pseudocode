/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140025CD0
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  void *Pool2; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 i; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v15; // edx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r8

  v4 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  if ( a3 <= 2 )
  {
    Pool2 = (void *)(a1 + 8);
    *(_QWORD *)a1 = Pool2;
    if ( a3 )
    {
      memset(Pool2, 0, 8LL * a3);
      Pool2 = *(void **)a1;
    }
    goto LABEL_4;
  }
  v8 = 0LL;
  Pool2 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v4 >= 8 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 8 * v4, 1265072196LL, a4);
    *(_QWORD *)a1 = Pool2;
LABEL_4:
    *(_DWORD *)(a1 + 24) = v4;
    v8 = v4;
  }
  *(_WORD *)(a1 + 32) = 1;
  if ( Pool2 )
  {
    memmove(Pool2, a2, 8 * v8);
    qsort(*(void **)a1, *(unsigned int *)(a1 + 24), 8uLL, DxgkComparePointers);
    for ( i = 0LL; i < *(unsigned int *)(a1 + 24); ++i )
    {
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v10 + 56) == KeGetCurrentThread() )
      {
        if ( *(int *)(v10 + 64) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 521;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v22,
                v21,
                v23,
                0LL,
                2,
                -1,
                L"m_OwnerAcquireCount > 0",
                521LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        ++*(_DWORD *)(v10 + 64);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10 + 40, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v13 = *(_DWORD *)(v10 + 68);
            if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, v13);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v10 + 48));
          ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
        }
        if ( *(_QWORD *)(v10 + 56) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 547;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v19,
                v18,
                v20,
                0LL,
                2,
                -1,
                L"NULL == m_OwningThread",
                547LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        if ( *(_DWORD *)(v10 + 64) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 548;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v16,
                v15,
                v17,
                0LL,
                2,
                -1,
                L"0 == m_OwnerAcquireCount",
                548LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
        *(_QWORD *)(v10 + 56) = KeGetCurrentThread();
        *(_DWORD *)(v10 + 64) = 1;
      }
    }
    *(_WORD *)(a1 + 32) = 256;
  }
  return a1;
}
