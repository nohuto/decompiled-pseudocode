/*
 * XREFs of VidSchSetYieldPercentage @ 0x140044780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetYieldPercentage(__int64 a1, char a2, int a3)
{
  int v6; // edx
  unsigned int v7; // eax
  int v8; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
  v6 = *(_DWORD *)(a1 + 2792);
  *(_DWORD *)(a1 + 224) = a3;
  v7 = v6 & 0xFFFFFFF7;
  v8 = v6 | 8;
  if ( (a2 & 1) == 0 )
    v8 = v7;
  *(_DWORD *)(a1 + 2792) = v8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
