/*
 * XREFs of AlpcpFlushResourcesPort @ 0x14088BD0C
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14088B7F4 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rcx
  ULONG_PTR v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rbp

  v1 = (unsigned __int64 *)(a1 + 328);
  v2 = (_QWORD **)(a1 + 336);
  v3 = KeAbPreAcquire(a1 + 328, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  while ( 1 )
  {
    v5 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v5[1] != v2 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v2 = v7;
    v8 = (ULONG_PTR)(v5 + 6);
    v7[1] = v2;
    v5[1] = v5;
    *v5 = v5;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v5 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v1);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( (unsigned __int8)AlpcpDeleteBlob(v8) )
        AlpcpDereferenceBlobEx(v8);
      AlpcpDereferenceBlobEx(v8);
      v9 = KeAbPreAcquire((__int64)v1, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v1, (__int64)v9, (__int64)v1);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
