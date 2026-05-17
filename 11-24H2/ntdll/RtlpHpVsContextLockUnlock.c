/*
 * XREFs of RtlpHpVsContextLockUnlock @ 0x18011C3B8
 * Callers:
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x1800422B0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800944B4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x18011C5C0 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RtlpHpVsContextLockUnlock(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int16 *v7; // rbx
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rcx
  _BYTE v10[256]; // [rsp+20h] [rbp-118h] BYREF

  result = RtlpHpVsContextGetSlotInfo(a1, v10);
  if ( (_DWORD)result )
  {
    v7 = (unsigned __int16 *)v10;
    v8 = (unsigned int)result;
    do
    {
      result = (unsigned __int64)*v7 << 6;
      if ( a2 )
      {
        v9 = (volatile signed __int64 *)(result + a1 + 8);
        if ( a2 >= 2 )
          *v9 = 1LL;
        if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
          result = RtlReleaseSRWLockExclusive(v9);
      }
      else if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        result = (unsigned __int64)RtlAcquireSRWLockExclusive((volatile signed __int32 *)(result + a1 + 8), v5, v6);
      }
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
