/*
 * XREFs of VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003A9EC
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     VidSchiSuspendFlipQueues @ 0x1400E3328 (VidSchiSuspendFlipQueues.c)
 *     VidSchiResumeFlipQueues @ 0x1400FF95C (VidSchiResumeFlipQueues.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, unsigned __int8 a3, bool *a4)
{
  __int64 v4; // rsi
  int v8; // eax
  int v9; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
  v8 = *(_DWORD *)(a2 + 78952);
  if ( (_BYTE)v4 )
  {
    if ( !v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, a2, v4);
      WdLogGlobalForLineNumber = 906;
      JUMPOUT(0x14003AAD9LL);
    }
    v9 = v8 - 1;
    *(_DWORD *)(a2 + 78952) = v9;
    if ( !v9 )
      *(_BYTE *)(a2 + 78948) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 78948) = 0;
    *(_DWORD *)(a2 + 78952) = v8 + 1;
    if ( a4 )
      *a4 = *(_DWORD *)(a2 + 3252) != 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
