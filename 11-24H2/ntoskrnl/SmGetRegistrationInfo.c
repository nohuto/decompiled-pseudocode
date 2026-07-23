/*
 * XREFs of SmGetRegistrationInfo @ 0x140797554
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1407985CC (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     SmRegistrationCtxStart @ 0x140AAF258 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(__int64 a1, KPROCESSOR_MODE a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rsi
  char *v8; // rax
  char *v9; // rdi
  NTSTATUS v10; // edi
  void *v11; // rcx
  HANDLE v12; // rcx
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 2152);
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 2152, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    v9[10] = 1;
  if ( (*(_DWORD *)(a1 + 2136) & 8) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = SmRegistrationCtxStart(a1 + 2848);
    if ( v10 >= 0 )
      *(_DWORD *)(a1 + 2136) |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  if ( v10 >= 0 )
  {
    v11 = *(void **)(a1 + 2848);
    Handle = 0LL;
    v10 = ObOpenObjectByPointer(v11, 0, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, a2, &Handle);
    if ( v10 < 0 )
    {
      v12 = Handle;
    }
    else
    {
      v12 = 0LL;
      *(_QWORD *)(a3 + 8) = Handle;
      v10 = 0;
    }
    if ( v12 )
      ObCloseHandle(v12, a2);
    if ( v10 >= 0 )
      return 0;
  }
  return (unsigned int)v10;
}
