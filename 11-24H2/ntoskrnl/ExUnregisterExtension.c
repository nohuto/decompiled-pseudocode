/*
 * XREFs of ExUnregisterExtension @ 0x1407C08C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x1407C09E0 (ExpDereferenceHost.c)
 *     ExpVerifyCallbackResult @ 0x1407C0A60 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExUnregisterExtension(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rbp
  int *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // eax
  _DWORD v15[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 32);
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 32, 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v4, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v15[1] = *(_DWORD *)(a1 + 80);
  v7 = *(int **)(a1 + 56);
  v16 = a1;
  v8 = *v7;
  v9 = *(_QWORD *)(a1 + 64);
  v15[0] = v8;
  if ( v9 )
  {
    v10 = guard_dispatch_icall_no_overrides(2LL, *(_QWORD *)(a1 + 72), v15, v5);
    ExpVerifyCallbackResult(2LL, v10);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 88));
  v12 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( v12 )
  {
    v13 = guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(a1 + 72), v15, v11);
    ExpVerifyCallbackResult(3LL, v13);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return ExpDereferenceHost(a1);
}
