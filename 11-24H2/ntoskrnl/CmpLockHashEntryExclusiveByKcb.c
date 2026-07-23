/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x14086E850
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 *v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  __int64 result; // rax
  int v8; // ett

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v4 = (unsigned __int64 *)(*(_QWORD *)(v2 + 1648) + 24
                                                   * ((unsigned int)(*(_DWORD *)(v2 + 1656) - 1) & (v3 ^ (v3 >> 9))));
  v5 = (char *)KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    v6[10] = 1;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  _m_prefetchw((const void *)(v2 + 4232));
  LODWORD(result) = *(_DWORD *)(v2 + 4232);
  do
  {
    if ( !(_DWORD)result )
      KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4232), result + 1, result);
  }
  while ( v8 != (_DWORD)result );
  return result;
}
