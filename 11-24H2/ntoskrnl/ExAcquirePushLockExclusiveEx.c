/*
 * XREFs of ExAcquirePushLockExclusiveEx @ 0x14031F160
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall ExAcquirePushLockExclusiveEx(volatile signed __int32 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v3; // rdi

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v3, BugCheckParameter2);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
}
