/*
 * XREFs of CmpLockHashEntryShared @ 0x14098ACC0
 * Callers:
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  signed __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 result; // rax
  int v7; // ett

  v2 = (unsigned int)BugCheckParameter4;
  v4 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                        * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (unsigned __int64)v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
