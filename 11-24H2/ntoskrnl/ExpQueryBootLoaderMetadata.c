/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x140652EBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  unsigned int v9; // edi
  char *v10; // rdx
  size_t v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&ExBootLoaderMetadataLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExBootLoaderMetadataLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExBootLoaderMetadataLock, (__int64)v7, (__int64)&ExBootLoaderMetadataLock);
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
