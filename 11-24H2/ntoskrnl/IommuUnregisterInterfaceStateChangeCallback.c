/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallback @ 0x140564E60
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallback(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rcx

  v2 = (unsigned __int64 *)(a2 + 416);
  v5 = 0LL;
  v6 = 0;
  v7 = (char *)KeAbPreAcquire(a2 + 416, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v7, (__int64)v2);
  if ( v8 )
    v8[10] = 1;
  v9 = *(_QWORD *)(a2 + 80);
  if ( v9 && *(_QWORD *)(v9 + 16) == a1 )
  {
    v10 = (char *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(
        &IommuInterfaceStateChangeCallbackPushLock,
        v10,
        (__int64)&IommuInterfaceStateChangeCallbackPushLock);
    if ( v12 )
      v12[10] = 1;
    v13 = *(_QWORD **)(a2 + 80);
    v14 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v15 = (_QWORD *)v13[1], (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
    KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
    v5 = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a2 + 80) = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
  }
  else
  {
    v6 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  if ( v5 )
    HalpMmAllocCtxFree(v16, v5);
  return v6;
}
