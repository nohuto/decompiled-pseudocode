/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x14002DA0C
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14002DBDC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x14002DC84 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  __int64 v8; // rbx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rsi
  char v11; // al
  int v12; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v8 = *((_QWORD *)this + 16) + 3984LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 936), &LockHandle);
    if ( bTracingEnabled && (byte_140081241 & 1) != 0 )
    {
      v11 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v8 + 928),
        (unsigned int)&EventDWMVsyncSignal,
        v12,
        *(_DWORD *)(v8 + 920),
        a4,
        *(_BYTE *)(v8 + 928),
        v11,
        4);
    }
    v9 = *(struct _KEVENT **)(v8 + 904);
    *(_BYTE *)(v8 + 944) = a5;
    KePulseEvent(v9, 0, 0);
    if ( *(_QWORD *)(v8 + 912) )
    {
      *(_DWORD *)(v8 + 924) = a4;
      if ( *(_DWORD *)(v8 + 920) <= a4 )
      {
        if ( *(_BYTE *)(v8 + 928) )
        {
          *(_BYTE *)(v8 + 928) = 0;
          if ( *((_QWORD *)a2 + 391) )
          {
            v10 = (*((_DWORD *)a2 + 744) & 0x10) != 0 ? a3 : 0;
            if ( (unsigned int)v10 < 0x10 )
            {
              if ( _InterlockedDecrement((volatile signed __int32 *)a2 + v10 + 788) < 0 )
              {
                WdLogSingleEntry5(0LL, 275LL, 37LL, a2, *((unsigned int *)a2 + v10 + 788), 0LL);
                WdLogGlobalForLineNumber = 2754;
              }
              if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
                McTemplateK0pqq_EtwWriteTransfer();
            }
          }
        }
        KeSetEvent(*(PRKEVENT *)(v8 + 912), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
