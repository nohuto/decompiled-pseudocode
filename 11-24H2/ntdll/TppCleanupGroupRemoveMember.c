/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x18004E720
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppCleanupGroupRemoveMember(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rax
  _QWORD *v2; // rbx
  _RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = *(_RTL_SRWLOCK **)(a1 + 16);
  v2 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = v1 + 1;
    RtlAcquireSRWLockExclusive(v1 + 1);
    v4 = *v2;
    v5 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    RtlReleaseSRWLockExclusive(v3);
  }
}
