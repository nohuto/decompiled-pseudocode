/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallback @ 0x140564860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 16) == a1 )
  {
    v5 = KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        &IommuInterfaceStateChangeCallbackPushLock,
        v5,
        (__int64)&IommuInterfaceStateChangeCallbackPushLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v9 = *(_QWORD **)(v2 + 8), *v9 != v2) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
    KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    HalpMmAllocCtxFree(v10, v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
