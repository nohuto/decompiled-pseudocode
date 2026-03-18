/*
 * XREFs of VidSchiSuspendResumeDevicesForPowerTransition @ 0x140020238
 * Callers:
 *     VidSchSuspendAdapter @ 0x1400E43D0 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x140100DE0 (VidSchResumeAdapter.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VidSchiSuspendResumeDevicesForPowerTransition(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-20h]

  *(_BYTE *)(a1 + 3240) = a2;
  v2 = (KSPIN_LOCK *)(a1 + 1984);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
  v5 = *(_QWORD **)(a1 + 352);
  while ( v5 != (_QWORD *)(a1 + 352) )
  {
    v6 = v5;
    v7 = v5 - 13;
    _InterlockedIncrement64(v5 - 10);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (*(_DWORD *)(v5 - 7) & 0x10) == 0 && *(volatile signed __int64 **)(a1 + 256) != v7 )
    {
      LOBYTE(v9) = 1;
      LOBYTE(v8) = a2;
      VidSchSuspendResumeDevice(v5 - 13, v8, v9, 0LL);
    }
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
    v5 = (_QWORD *)*v5;
    v14 = 0LL;
    v13 = 0LL;
    if ( _InterlockedExchangeAdd64(v7 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v10 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (_QWORD *)v6[1], (_QWORD *)*v11 != v6) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      ExFreePoolWithTag((PVOID)v7, 0);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
