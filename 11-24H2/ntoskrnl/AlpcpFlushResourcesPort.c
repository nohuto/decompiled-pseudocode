/*
 * XREFs of AlpcpFlushResourcesPort @ 0x14088ECFC
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14088E7E4 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  _QWORD **v2; // rsi
  char *v3; // rax
  char *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rcx
  ULONG_PTR v8; // rbp
  char *v9; // rax
  char *v10; // rbp

  v1 = (unsigned __int64 *)(a1 + 328);
  v2 = (_QWORD **)(a1 + 336);
  v3 = (char *)KeAbPreAcquire(a1 + 328, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
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
      v9 = (char *)KeAbPreAcquire((__int64)v1, 0LL);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v1, v9, (__int64)v1);
      if ( v10 )
        v10[10] = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
