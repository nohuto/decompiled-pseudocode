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

__int64 __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v5 + 8));
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(v5 + 24);
  if ( *v3 != v5 + 16 )
    __fastfail(3u);
  *v2 = v5 + 16;
  v2[1] = v3;
  *v3 = v2;
  *(_QWORD *)(v5 + 24) = v2;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
