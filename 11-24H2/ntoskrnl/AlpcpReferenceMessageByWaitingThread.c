/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140A2F6A8
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A2F828 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  PVOID *v5; // rsi
  unsigned int v6; // r15d
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rbx
  PVOID *i; // rdi
  char *v11; // rax
  char *v12; // rbp
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  v7 = (char *)KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v7, (__int64)&AlpcpPortListLock);
  if ( v9 )
    v9[10] = 1;
  for ( i = (PVOID *)AlpcpPortList; i != &AlpcpPortList; i = (PVOID *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_18;
      }
      v11 = (char *)KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v11, (__int64)&AlpcpPortListLock);
      if ( v12 )
        v12[10] = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_18:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
