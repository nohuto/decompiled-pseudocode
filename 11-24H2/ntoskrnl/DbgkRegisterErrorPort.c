/*
 * XREFs of DbgkRegisterErrorPort @ 0x140A852C4
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x14057E5A8 (DbgkpDereferenceErrorPort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1406A7370 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1406A74D0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  size_t v2; // rbx
  void *Pool2; // rax
  __int64 v6; // rax
  _DWORD *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID P[2]; // [rsp+68h] [rbp-100h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-F0h]
  __int128 v21; // [rsp+80h] [rbp-E8h]
  __int128 v22; // [rsp+90h] [rbp-D8h]
  __int128 v23; // [rsp+A0h] [rbp-C8h]
  __int128 v24; // [rsp+B0h] [rbp-B8h]
  __int128 v25; // [rsp+C0h] [rbp-A8h]
  __int64 v26; // [rsp+D0h] [rbp-98h]
  int v27[4]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-78h]
  __int64 v29; // [rsp+100h] [rbp-68h]

  v2 = (unsigned int)Size;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  DWORD2(v23) = 0;
  memset_0(v27, 0, 0x48uLL);
  if ( !(_DWORD)v2 || (v2 & 1) != 0 || (unsigned int)v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x101uLL);
  P[1] = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  WORD1(P[0]) = v2;
  LOWORD(P[0]) = v2;
  memmove(Pool2, Src, v2);
  v6 = ExAllocatePool2(0x101uLL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *(_DWORD *)((char *)&v24 + 2) = -2147483608;
    v28 = 272LL;
    v29 = 8704LL;
    v27[0] = 0x100000;
    LODWORD(v21) = 48;
    *((_QWORD *)&v21 + 1) = 0LL;
    DWORD2(v22) = 512;
    *(_QWORD *)&v22 = 0LL;
    v23 = 0LL;
    v8 = ZwAlpcConnectPort(v6 + 8, (__int64)P);
    v9 = v8;
    if ( v8 == 192 )
    {
      v9 = -1073741749;
    }
    else if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936;
      --CurrentThread->KernelApcDisable;
      v13 = KeAbPreAcquire((__int64)v12, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, (__int64)v13, (__int64)v12);
      if ( v14 )
        *((_BYTE *)v14 + 10) = 1;
      v15 = *((_QWORD *)v12 + 1);
      if ( !v15 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
      v9 = 0;
      v7 = 0LL;
      if ( v15 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v15 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v15 + 8), 0LL);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)v15);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v9 = -1073741670;
  }
  if ( P[1] )
    ExFreePool(P[1]);
  return v9;
}
