/*
 * XREFs of RtlpHeapTrkFindStack @ 0x18001EC40
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18001ECD0 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlpHeapTrkHash @ 0x18001CFC0 (RtlpHeapTrkHash.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180048350 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // rbx

  v2 = RtlpHeapTrkHash(a1);
  v3 = v2 & 0xF;
  v4 = v2;
  if ( !RtlTryAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801CD7E0 + 8 * v3)) )
    return 0LL;
  v5 = (_QWORD *)(16 * v4 + qword_1801CD280);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    if ( i[3] == a1 )
    {
      v7 = i[4];
      i[3] = 0LL;
      goto LABEL_7;
    }
  }
  v7 = 0LL;
LABEL_7:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801CD7E0 + 8 * v3));
  return v7;
}
