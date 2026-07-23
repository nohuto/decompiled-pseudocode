/*
 * XREFs of CmpLockHashEntryShared @ 0x140970DC0
 * Callers:
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  signed __int64 *v4; // rbp
  char *v5; // rsi
  __int64 result; // rax
  int v7; // ett

  v2 = (unsigned int)BugCheckParameter4;
  v4 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                        * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v5 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    v5[10] = 1;
  _m_prefetchw((const void *)(BugCheckParameter2 + 4232));
  LODWORD(result) = *(_DWORD *)(BugCheckParameter2 + 4232);
  do
  {
    if ( !(_DWORD)result )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v2);
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(BugCheckParameter2 + 4232),
                             result + 1,
                             result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
