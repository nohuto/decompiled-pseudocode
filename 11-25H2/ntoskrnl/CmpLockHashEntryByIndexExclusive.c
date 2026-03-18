/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x1407D1644
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A5691C (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r14
  unsigned __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 result; // rax

  v3 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648) + 24LL * (unsigned int)BugCheckParameter4);
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
