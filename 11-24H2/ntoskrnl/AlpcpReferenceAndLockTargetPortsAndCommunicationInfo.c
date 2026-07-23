/*
 * XREFs of AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14089C510
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x14089016C (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x14089C45C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // r14
  int v6; // esi
  char *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  char *v10; // rsi
  char *v11; // rsi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  v7 = (char *)KeAbPreAcquire((__int64)(v4 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4 - 2, 0, v7, (__int64)(v4 - 2));
  if ( v7 )
    v7[10] = 1;
  if ( v6 == 2 )
  {
    v8 = *v4;
    v9 = v4[1];
  }
  else if ( v6 == 1 )
  {
    v8 = *v4;
    v9 = *v4;
  }
  else
  {
    v8 = v4[2];
    v9 = v8;
  }
  if ( v8 && !ObReferenceObjectSafe(v8) )
    v8 = 0LL;
  if ( v9 && !ObReferenceObjectSafe(v9) )
    v9 = 0LL;
  if ( v8 && v9 )
  {
    v10 = (char *)KeAbPreAcquire(v8 + 352, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 352), 0, v10, v8 + 352);
    if ( v10 )
      v10[10] = 1;
    if ( v9 != v8 )
    {
      v11 = (char *)KeAbPreAcquire(v9 + 352, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v9 + 352), 0, v11, v9 + 352);
      if ( v11 )
        v11[10] = 1;
    }
    if ( (*(_DWORD *)(v8 + 416) & 0x20) != 0 || (*(_DWORD *)(v9 + 416) & 0x20) != 0 )
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo((__int64)v4, (signed __int64 *)v8, (signed __int64 *)v9);
      return 3221225527LL;
    }
    else
    {
      *a2 = v8;
      result = 0LL;
      *a3 = v9;
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    KeAbPostRelease((ULONG_PTR)(v4 - 2));
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
    return 3221225527LL;
  }
  return result;
}
