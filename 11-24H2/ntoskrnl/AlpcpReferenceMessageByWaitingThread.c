/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140A3A07C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140741EA4 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A3A1FC (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  PVOID *v5; // rsi
  unsigned int v6; // r15d
  _QWORD *v7; // rax
  signed __int8 v8; // cf
  _QWORD *v9; // rbx
  PVOID *i; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  v7 = KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, (__int64)v7, (__int64)&AlpcpPortListLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
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
      v11 = KeAbPreAcquire((__int64)&AlpcpPortListLock, 0LL);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, (__int64)v11, (__int64)&AlpcpPortListLock);
      if ( v12 )
        *((_BYTE *)v12 + 10) = 1;
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
