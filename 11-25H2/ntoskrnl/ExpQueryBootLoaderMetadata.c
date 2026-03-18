/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x140646FBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rax
  __int64 *v8; // r14
  unsigned int v9; // edi
  char *v10; // rdx
  size_t v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&ExBootLoaderMetadataLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExBootLoaderMetadataLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExBootLoaderMetadataLock, v7, (__int64)&ExBootLoaderMetadataLock);
  v9 = 0;
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v10 = (char *)ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    v11 = *(unsigned int *)ExBootLoaderMetadata;
    *a3 = v11;
    if ( a1 )
    {
      if ( a2 >= (unsigned int)v11 )
        memmove(a1, v10 + 4, v11);
      else
        v9 = -1073741820;
    }
  }
  else
  {
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegion();
  return v9;
}
