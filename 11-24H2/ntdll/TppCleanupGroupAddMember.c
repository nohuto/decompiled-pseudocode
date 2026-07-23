/*
 * XREFs of TppCleanupGroupAddMember @ 0x1800491C0
 * Callers:
 *     TpAllocWork @ 0x180048850 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK **Value; // rax
  _RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h]

  v4 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v4 + 1);
  v2 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v4[3].Value;
  if ( *Value != &v4[2] )
    __fastfail(3u);
  v2->Value = (unsigned __int64)&v4[2];
  v2[1].Value = (unsigned __int64)Value;
  *Value = v2;
  v4[3].Value = (unsigned __int64)v2;
  RtlReleaseSRWLockExclusive(v4 + 1);
}
