/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x140464F00
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestHandleClose @ 0x140464CC4 (PopPowerRequestHandleClose.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140A45D7C (PopPowerRequestHandleRequestUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A473B0 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140A51F7C (PopReleasePowerRequestPushLock.c)
 *     PopPowerRequestStatsSetActive @ 0x140A5F5B8 (PopPowerRequestStatsSetActive.c)
 */

void __fastcall PopPowerRequestCallbackWorker(__int64 *a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rsi
  __int64 v3; // rax
  __int64 *v4; // r15
  int v5; // r12d
  int v6; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 **v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF

  v1 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  while ( 1 )
  {
    v2 = (__int64 *)*v1;
    if ( (__int64 *)*v1 == v1 )
      break;
    if ( (__int64 *)v2[1] != v1 || (v3 = *v2, *(__int64 **)(*v2 + 8) != v2) )
LABEL_18:
      __fastfail(3u);
    *v1 = v3;
    v4 = v2 - 8;
    *(_QWORD *)(v3 + 8) = v1;
    v2[1] = (__int64)v2;
    *v2 = (__int64)v2;
    v5 = *((_DWORD *)v2 + 5);
    v6 = *((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 5) = v6;
    *((_DWORD *)v2 + 6) = 2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v7 = v6 ^ v5;
    v8 = v7;
    if ( v7 )
    {
      do
      {
        _BitScanForward(&v9, v8);
        v10 = v9;
        LOBYTE(v10) = 1;
        v8 &= ~(1 << v9);
        PopAcquirePowerRequestPushLock(v10);
        LOBYTE(v11) = ((1 << v9) & v6) != 0;
        PopPowerRequestStatsSetActive(v2 - 8, v9, v11);
        LOBYTE(v12) = ((1 << v9) & v6) != 0;
        PopPowerRequestHandleRequestUpdate(v2 - 8, v9, v12);
        PopReleasePowerRequestPushLock(v14, v13, v15);
      }
      while ( v8 );
      v1 = a1;
    }
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    while ( v7 )
    {
      _BitScanForward((unsigned int *)&v16, v7);
      v7 &= ~(1 << v16);
      v17 = 48LL * v16;
      if ( (*(_DWORD *)((char *)&PopPowerRequestAttributes + v17 + 16))-- == 1 )
        KeSetEvent((PRKEVENT)((char *)&PopPowerRequestAttributes + v17 + 24), 0, 0);
    }
    if ( *((_DWORD *)v4 + 20) == *((_DWORD *)v4 + 21) )
    {
      *((_DWORD *)v4 + 22) = 0;
      ObfDereferenceObjectWithTag(v2 - 8, 0x72506F50u);
    }
    else
    {
      v19 = (__int64 **)v1[1];
      if ( *v19 != v1 )
        goto LABEL_18;
      *v2 = (__int64)v1;
      v2[1] = (__int64)v19;
      *v19 = v2;
      v1[1] = (__int64)v2;
      *((_DWORD *)v4 + 22) = 1;
    }
  }
  if ( v1 == &PopPowerRequestUpdateQueue )
    _InterlockedExchange(&dword_140F0E3E0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
