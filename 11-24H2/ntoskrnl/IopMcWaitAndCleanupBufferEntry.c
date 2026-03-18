/*
 * XREFs of IopMcWaitAndCleanupBufferEntry @ 0x1405A2F44
 * Callers:
 *     IopIoRingCleanupRegBufferArray @ 0x140716544 (IopIoRingCleanupRegBufferArray.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140716848 (IopIoRingDispatchRegisterBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IopMcDereferenceBufferEntry @ 0x14043D2F0 (IopMcDereferenceBufferEntry.c)
 *     IopMcTryUnlockMdl @ 0x1405A2EE8 (IopMcTryUnlockMdl.c)
 */

__int64 __fastcall IopMcWaitAndCleanupBufferEntry(ULONG_PTR BugCheckParameter2)
{
  int v2; // ecx
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // r8

  v2 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v2 & 6) != 6 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 12));
    LOBYTE(v2) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 12), 6u);
  }
  if ( (v2 & 4) != 0 )
    return 255LL;
  if ( *(int *)(BugCheckParameter2 + 48) > 0 )
    KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 64), WrMdlCache, 0, 0, 0LL);
  IopMcTryUnlockMdl(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 56));
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C248);
  v5 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_QWORD *)(v5 + 8) != BugCheckParameter2 + 16
    || (v6 = *(_QWORD **)(BugCheckParameter2 + 24), *v6 != BugCheckParameter2 + 16) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock(&qword_140F8C248, v4);
  IopMcDereferenceBufferEntry(BugCheckParameter2);
  return 0LL;
}
