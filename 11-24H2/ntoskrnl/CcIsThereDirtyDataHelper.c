/*
 * XREFs of CcIsThereDirtyDataHelper @ 0x14047B510
 * Callers:
 *     CcIsThereDirtyData @ 0x14047B410 (CcIsThereDirtyData.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcIsThereDirtyDataHelper(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // rbp
  __int64 *v4; // r15
  int v5; // edi
  __int64 i; // rbx
  __int64 v8; // rbx
  int v9; // edx
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 768);
  v4 = (__int64 *)(a1 + 672);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  for ( i = *v4; ; i = *(_QWORD *)(v8 + 136) )
  {
    v8 = i - 136;
    if ( (__int64 *)(v8 + 136) == v4 )
      break;
    v9 = *(_DWORD *)(v8 + 152);
    if ( (v9 & 0x800) == 0
      && *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) == *(_QWORD *)a3
      && *(_DWORD *)(v8 + 112)
      && (*(_DWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) == 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = 0;
      *(_BYTE *)(a3 + 8) = 1;
      return result;
    }
    if ( (unsigned int)++v5 >= 0x14 && (v9 & 0x820) == 0 )
    {
      *(_DWORD *)(v8 + 152) |= 0x20u;
      ++*(_DWORD *)(v8 + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = 0;
      KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
      *(_DWORD *)(v8 + 152) &= ~0x20u;
      --*(_DWORD *)(v8 + 112);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
