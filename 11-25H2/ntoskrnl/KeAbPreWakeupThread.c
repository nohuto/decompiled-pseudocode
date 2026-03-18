/*
 * XREFs of KeAbPreWakeupThread @ 0x14027FB04
 * Callers:
 *     KiAlertSingleThreadByThreadId @ 0x14028086C (KiAlertSingleThreadByThreadId.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140286C50 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 */

void __fastcall KeAbPreWakeupThread(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // r10d
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx

  v2 = a2 & 0x7FFFFFFFFFFFFFFCLL;
  if ( a2 && v2 == a2 )
  {
    v10 = *(_QWORD *)(a1 + 1144);
    if ( !v10 )
      return;
    if ( (unsigned int)(1LL << *(_BYTE *)(v10 + 12)) - 1 != (*(unsigned __int16 *)(v10 + 8) | *(unsigned __int16 *)(v10 + 10)) )
    {
      v5 = 0LL;
      v11 = ((1LL << *(_BYTE *)(v10 + 12)) - 1) ^ (*(unsigned __int16 *)(v10 + 8) | *(unsigned __int16 *)(v10 + 10));
      while ( 1 )
      {
        v7 = !_BitScanReverse((unsigned int *)&v12, v11);
        if ( v7 )
          goto LABEL_9;
        v13 = 88 * v12;
        v11 &= ~(1 << v12);
        if ( *(_BYTE *)(88 * v12 + v10 + 25) && (*(_QWORD *)(v13 + v10 + 16) & 0x7FFFFFFFFFFFFFFCLL) == v2 )
        {
          v5 = v13 + v10 + 16;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1136);
    if ( (unsigned int)(1LL << *(_BYTE *)(v4 + 12)) - 1 != (*(unsigned __int16 *)(v4 + 8) | *(unsigned __int16 *)(v4 + 10)) )
    {
      v5 = 0LL;
      v6 = ((1LL << *(_BYTE *)(v4 + 12)) - 1) ^ (*(unsigned __int16 *)(v4 + 8) | *(unsigned __int16 *)(v4 + 10));
      while ( 1 )
      {
        v7 = !_BitScanReverse((unsigned int *)&v8, v6);
        if ( v7 )
          goto LABEL_9;
        v9 = 88 * v8;
        v6 &= ~(1 << v8);
        if ( *(_BYTE *)(88 * v8 + v4 + 25) && (*(_QWORD *)(v9 + v4 + 16) & 0x7FFFFFFFFFFFFFFCLL) == v2 )
        {
          v5 = v9 + v4 + 16;
          goto LABEL_9;
        }
      }
    }
  }
  v5 = 0LL;
LABEL_9:
  if ( v5 )
    KiAbConvertWaiterToOwnerEntry(a1, v5, 1LL, v2);
}
