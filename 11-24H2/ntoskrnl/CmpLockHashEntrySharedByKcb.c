/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x1409E4D38
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  signed __int64 *v3; // rsi
  char *v4; // rdi
  __int64 result; // rax
  int v6; // ett

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (signed __int64 *)(*(_QWORD *)(v2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(v2 + 1656) - 1) & ((unsigned int)(101027
                                                                                      * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v4 = (char *)KeAbPreAcquire((__int64)v3, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v4, (__int64)v3);
  if ( v4 )
    v4[10] = 1;
  _m_prefetchw((const void *)(v2 + 4232));
  LODWORD(result) = *(_DWORD *)(v2 + 4232);
  do
  {
    if ( !(_DWORD)result )
      KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
    v6 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4232), result + 1, result);
  }
  while ( v6 != (_DWORD)result );
  return result;
}
