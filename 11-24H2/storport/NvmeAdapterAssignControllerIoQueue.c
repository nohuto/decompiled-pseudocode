/*
 * XREFs of NvmeAdapterAssignControllerIoQueue @ 0x1400DE9A0
 * Callers:
 *     NvmeAdapterSubmitControllerNvmRequest @ 0x1400E8A7C (NvmeAdapterSubmitControllerNvmRequest.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeAdapterAssignControllerIoQueue(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r10
  unsigned __int16 i; // dx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 720), &LockHandle);
  v3 = *(_WORD *)(a1 + 32);
  v4 = *(_WORD *)(a1 + 20);
  for ( i = v3; i < v4; ++i )
  {
    v6 = *(_QWORD *)(a1 + 728);
    v7 = 192LL * i;
    if ( *(_DWORD *)(v7 + v6 + 120) == 5
      && *(unsigned __int16 *)(v7 + v6 + 146) < (unsigned int)(*(_DWORD *)(v7 + v6 + 124) - 1) )
    {
LABEL_11:
      v2 = *(_QWORD *)(a1 + 728) + 192LL * i;
      ++*(_WORD *)(v2 + 146);
      if ( ++*(_WORD *)(a1 + 32) == *(_WORD *)(a1 + 20) )
        *(_WORD *)(a1 + 32) = 0;
      goto LABEL_14;
    }
  }
  for ( i = 0; i < v3; ++i )
  {
    v8 = *(_QWORD *)(a1 + 728);
    v9 = 192LL * i;
    if ( *(_DWORD *)(v9 + v8 + 120) == 5
      && *(unsigned __int16 *)(v9 + v8 + 146) < (unsigned int)(*(_DWORD *)(v9 + v8 + 124) - 1) )
    {
      goto LABEL_11;
    }
  }
  StorEtwNvmeControllerEvent(
    a1,
    1,
    3,
    (__int64)L"No IO queue found",
    L"MaxIoQueueCount",
    v4,
    L"NextIoQueueIndexHint",
    v3,
    &word_140150F48,
    0,
    &word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0);
LABEL_14:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
