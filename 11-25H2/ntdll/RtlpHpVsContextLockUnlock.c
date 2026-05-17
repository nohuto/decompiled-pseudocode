/*
 * XREFs of RtlpHpVsContextLockUnlock @ 0x18011DC50
 * Callers:
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x180095CA0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800BD694 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x18011DE58 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHpVsContextLockUnlock(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned __int16 *v5; // rbx
  __int64 v6; // rsi
  volatile signed __int64 *v7; // rcx
  _BYTE v8[256]; // [rsp+20h] [rbp-118h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v8);
  if ( (_DWORD)result )
  {
    v5 = (unsigned __int16 *)v8;
    v6 = (unsigned int)result;
    do
    {
      result = (unsigned __int64)*v5 << 6;
      if ( a2 )
      {
        v7 = (volatile signed __int64 *)(result + a1 + 8);
        if ( a2 >= 2 )
          *v7 = 1LL;
        if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
          result = RtlReleaseSRWLockExclusive(v7);
      }
      else if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        result = (unsigned __int64)RtlAcquireSRWLockExclusive((volatile signed __int32 *)(result + a1 + 8));
      }
      v5 += 2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
