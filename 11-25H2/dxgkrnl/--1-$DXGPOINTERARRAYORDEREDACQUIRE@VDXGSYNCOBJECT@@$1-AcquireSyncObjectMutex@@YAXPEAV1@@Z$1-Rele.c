/*
 * XREFs of ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x140026360
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rsi
  void *v5; // rcx
  int v6; // edx
  int v7; // ecx
  __int64 v8; // r8

  if ( *(_QWORD *)a1 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        for ( i = 0LL; i < *(unsigned int *)(a1 + 24); ++i )
        {
          v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
          if ( *(struct _KTHREAD **)(v3 + 56) != KeGetCurrentThread() )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v3 + 32, 0LL, 0LL);
            WdLogGlobalForLineNumber = 570;
          }
          if ( *(int *)(v3 + 64) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 573;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v7,
                  v6,
                  v8,
                  0LL,
                  2,
                  -1,
                  L"m_OwnerAcquireCount > 0",
                  573LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          if ( (*(_DWORD *)(v3 + 64))-- == 1 )
          {
            *(_QWORD *)(v3 + 56) = 0LL;
            ExReleasePushLockExclusiveEx(v3 + 40, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  v5 = *(void **)a1;
  if ( *(_QWORD *)a1 != a1 + 8 && v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
