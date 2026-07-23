/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x14038718C
 * Callers:
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x140386FA0 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPoolV3(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int *a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v15 = *(_DWORD *)(a2 + 224);
    v9 = a2;
    v16 = *(_DWORD *)(a2 + 228);
    if ( v15 <= v16 )
      goto LABEL_10;
    v17 = v15 - v16;
    if ( a3 > v17 )
      a3 = v17;
  }
  if ( a3 > *(_DWORD *)(a2 + 40) )
  {
    if ( a4 )
      goto LABEL_10;
    a3 = *(_DWORD *)(a2 + 40);
  }
  if ( !a3 )
  {
LABEL_10:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *a6 = 0;
    return 0LL;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v10;
  v12 = a3;
  do
  {
    v13 = v11;
    v11 = *(_QWORD *)(v11 + 8);
    --v12;
  }
  while ( v12 );
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(a2 + 40) -= a3;
  *(_QWORD *)(a2 + 32) = v11;
  if ( a5 )
    *(_DWORD *)(v9 + 224) -= a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = v10;
  *a6 = a3;
  return result;
}
