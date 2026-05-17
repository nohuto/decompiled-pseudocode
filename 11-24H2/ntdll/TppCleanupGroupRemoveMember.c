/*
 * XREFs of TppCleanupGroupRemoveMember @ 0x180021D20
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppCleanupGroupRemoveMember(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax

  result = *(_QWORD *)(a1 + 16);
  v2 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = result + 8;
    RtlAcquireSRWLockExclusive(result + 8);
    v4 = *v2;
    v5 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    return RtlReleaseSRWLockExclusive(v3);
  }
  return result;
}
