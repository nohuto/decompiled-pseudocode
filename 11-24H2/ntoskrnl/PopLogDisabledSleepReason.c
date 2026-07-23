/*
 * XREFs of PopLogDisabledSleepReason @ 0x14099FBA0
 * Callers:
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopLogSleepDisabled @ 0x14099E748 (PopLogSleepDisabled.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x14099FFA0 (PopRemoveReasonRecordByReasonCode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopLogDisabledSleepReason()
{
  unsigned int v0; // ebx
  int v1; // edi
  unsigned int v2; // esi
  __int64 v3; // rax
  ULONG_PTR v5; // rbp
  void *Pool2; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r8

  v0 = 0;
  v1 = 0;
  v2 = 0;
  ExAcquireFastMutex(&PopDisableSleepMutex);
  PopRemoveReasonRecordByReasonCode(13LL);
  v3 = PopDisableSleepList;
  if ( (__int64 *)PopDisableSleepList != &PopDisableSleepList )
  {
    do
    {
      v1 |= *(_DWORD *)(v3 + 20);
      ++v2;
      v3 = *(_QWORD *)v3;
    }
    while ( (__int64 *)v3 != &PopDisableSleepList );
    if ( v1 )
    {
      v5 = 8LL * v2;
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v5, 0x66756263u);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = PopDisableSleepList;
        v9 = Pool2;
        while ( (__int64 *)v8 != &PopDisableSleepList )
        {
          *v9 = *(_DWORD *)(v8 + 16);
          v9 += 2;
          *(v9 - 1) = *(_DWORD *)(v8 + 20);
          v8 = *(_QWORD *)v8;
        }
        v0 = PopLogSleepDisabled(13, v1, Pool2, v5);
        ExFreePoolWithTag(v7, 0x66756263u);
      }
      else
      {
        v0 = -1073741670;
      }
    }
  }
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  return v0;
}
