/*
 * XREFs of DpiFdoDpcForIsr @ 0x1400305E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DpiFdoDpcForIsr(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_QWORD *)(v4 + 40);
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)Dpc, (__int64)&EventProfilerEnter, SystemArgument1, 4013);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(v4 + 1488), &LockHandle);
  *(LARGE_INTEGER *)(v4 + 16 * (*(unsigned int *)(v4 + 1496) + 94LL)) = KeQueryPerformanceCounter(0LL);
  (*(void (__fastcall **)(_QWORD))(v5 + 192))(*(_QWORD *)(v4 + 48));
  *(LARGE_INTEGER *)(v4 + 16LL * *(unsigned int *)(v4 + 1496) + 1512) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(v4 + 1496) = ((unsigned __int8)*(_DWORD *)(v4 + 1496) + 1) & 0x3F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, 4013);
}
