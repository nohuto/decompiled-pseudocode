/*
 * XREFs of TppCleanupGroupAddMember @ 0x18001C7C0
 * Callers:
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive(v5 + 8);
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(v5 + 24);
  if ( *v3 != v5 + 16 )
    __fastfail(3u);
  *v2 = v5 + 16;
  v2[1] = v3;
  *v3 = v2;
  *(_QWORD *)(v5 + 24) = v2;
  return RtlReleaseSRWLockExclusive(v5 + 8);
}
