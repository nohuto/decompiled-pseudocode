/*
 * XREFs of ?GetPresentPrivateDriverDataFromResource@@YAJPEAUDXGSHAREDRESOURCE_NONPAGED@@PEAPEAVCRefCountedBuffer@@PEAU_D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA@@@Z @ 0x14004A344
 * Callers:
 *     DxgkGetResourcePresentPrivateDriverData @ 0x140329770 (DxgkGetResourcePresentPrivateDriverData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPresentPrivateDriverDataFromResource(
        KSPIN_LOCK *a1,
        KSPIN_LOCK *a2,
        struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *a3)
{
  UINT PrivateDriverDataSize; // ebp
  unsigned int v7; // edi
  KSPIN_LOCK v8; // rbx
  __int64 result; // rax
  UINT v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  a3->PrivateDriverDataSize = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v8 = a1[1];
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 8);
    a3->PrivateDriverDataSize = v10;
    if ( PrivateDriverDataSize < v10 )
    {
      v7 = -1073741306;
      WdLogSingleEntry1(3LL, -1073741306LL);
      v8 = 0LL;
      WdLogGlobalForLineNumber = 13983;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v7;
  *a2 = v8;
  return result;
}
