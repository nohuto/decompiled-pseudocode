/*
 * XREFs of TppCleanupGroupAddMember @ 0x1800469E0
 * Callers:
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
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
