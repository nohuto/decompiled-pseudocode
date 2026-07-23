/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x140965154
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 *v3; // rbx
  char *v4; // rax
  char *v5; // rdi
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned __int64 *)(*(_QWORD *)(v2 + 1664)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v2 + 1672) - 1) & ((unsigned int)(101027
                                                                                        * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v4 = (char *)KeAbPreAcquire((__int64)v3, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    v5[10] = 1;
  v3[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
