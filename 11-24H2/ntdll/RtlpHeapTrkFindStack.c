/*
 * XREFs of RtlpHeapTrkFindStack @ 0x18003E9C0
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18003EA50 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x18003CD40 (RtlpHeapTrkHash.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
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
  if ( !RtlTryAcquireSRWLockExclusive(*(volatile signed __int32 **)(qword_1801CE7E8 + 8 * v3)) )
    return 0LL;
  v5 = (_QWORD *)(16 * v4 + qword_1801CE280);
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
  RtlReleaseSRWLockExclusive(*(_QWORD *)(qword_1801CE7E8 + 8 * v3));
  return v7;
}
