/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@I_K_N@Z @ 0x140037358
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14003727C (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012854 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x140038380 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r8
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v7 = *((_QWORD *)this + 16) + 4024LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 936), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v8 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v7 + 928),
        &EventDWMVsyncSignal,
        v9,
        *(_DWORD *)(v7 + 920),
        a4,
        *(_BYTE *)(v7 + 928),
        v8,
        4);
    }
    v10 = *(struct _KEVENT **)(v7 + 904);
    *(_BYTE *)(v7 + 944) = 1;
    KePulseEvent(v10, 0, 0);
    if ( *(_QWORD *)(v7 + 912) )
    {
      *(_DWORD *)(v7 + 924) = a4;
      if ( *(_DWORD *)(v7 + 920) <= a4 )
      {
        if ( *(_BYTE *)(v7 + 928) )
        {
          *(_BYTE *)(v7 + 928) = 0;
          if ( *((_QWORD *)a2 + 391) )
            DXGADAPTER::DecrementVSyncWaiter(a2, a3, v11);
        }
        KeSetEvent(*(PRKEVENT *)(v7 + 912), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
