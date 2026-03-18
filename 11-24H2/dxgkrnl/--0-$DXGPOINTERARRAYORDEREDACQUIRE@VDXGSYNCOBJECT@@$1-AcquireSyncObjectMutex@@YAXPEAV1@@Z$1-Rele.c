/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IEE@Z @ 0x140026480
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1403260EC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rdi
  void *Pool2; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 i; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8

  v3 = a3;
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
  v7 = 0LL;
  Pool2 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v3 >= 8 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 8 * v3, 1265072196LL);
    *(_QWORD *)a1 = Pool2;
LABEL_4:
    *(_DWORD *)(a1 + 24) = v3;
    v7 = v3;
  }
  *(_WORD *)(a1 + 32) = 1;
  if ( Pool2 )
  {
    memmove(Pool2, a2, 8 * v7);
    qsort(*(void **)a1, *(unsigned int *)(a1 + 24), 8uLL, DxgkComparePointers);
    for ( i = 0LL; i < *(unsigned int *)(a1 + 24); ++i )
    {
      v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v9 + 56) == KeGetCurrentThread() )
      {
        if ( *(int *)(v9 + 64) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 519;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v21,
                v20,
                v22,
                0LL,
                2,
                -1,
                L"m_OwnerAcquireCount > 0",
                7,
                0,
                0,
                0,
                0);
          }
        }
        ++*(_DWORD *)(v9 + 64);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 40, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v12 = *(_DWORD *)(v9 + 68);
            if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventBlockThread, v11, v12);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 48));
          ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
        }
        if ( *(_QWORD *)(v9 + 56) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 545;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v18,
                v17,
                v19,
                0LL,
                2,
                -1,
                L"NULL == m_OwningThread",
                33,
                0,
                0,
                0,
                0);
          }
        }
        if ( *(_DWORD *)(v9 + 64) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 546;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v15,
                v14,
                v16,
                0LL,
                2,
                -1,
                L"0 == m_OwnerAcquireCount",
                34,
                0,
                0,
                0,
                0);
          }
        }
        *(_QWORD *)(v9 + 56) = KeGetCurrentThread();
        *(_DWORD *)(v9 + 64) = 1;
      }
    }
    *(_WORD *)(a1 + 32) = 256;
  }
  return a1;
}
