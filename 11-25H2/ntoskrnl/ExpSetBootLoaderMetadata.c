/*
 * XREFs of ExpSetBootLoaderMetadata @ 0x1406470C8
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootLoaderMetadata(void *Src, size_t Size)
{
  size_t v2; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  __int64 *v6; // rsi
  unsigned int v7; // edi
  _DWORD *Pool2; // rsi

  v2 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&ExBootLoaderMetadataLock, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExBootLoaderMetadataLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExBootLoaderMetadataLock, v5, (__int64)&ExBootLoaderMetadataLock);
  v7 = 0;
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  Pool2 = ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    if ( (_DWORD)v2 != *(_DWORD *)ExBootLoaderMetadata )
    {
      ExFreePoolWithTag(ExBootLoaderMetadata, 0x64506142u);
      Pool2 = 0LL;
      ExBootLoaderMetadata = 0LL;
    }
    if ( Pool2 )
      goto LABEL_13;
  }
  if ( (_DWORD)v2 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    ExBootLoaderMetadata = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_14;
    }
  }
  if ( Pool2 )
  {
LABEL_13:
    memmove(Pool2 + 1, Src, v2);
    *Pool2 = v2;
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegion();
  return v7;
}
