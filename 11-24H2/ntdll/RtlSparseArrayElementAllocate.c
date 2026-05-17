/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x180091434
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x18009122C (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1800914D8 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v4; // rdx
  void *v6; // rbx
  volatile signed __int64 *v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << v3;
  *(_QWORD *)((char *)v9 + 1) = 0LL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  v9[0] = 0LL;
  v10 = 0LL;
  if ( (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int128 *, _QWORD *))RtlpCSparseBitmapPageCommit)(
              a1 + 16,
              (unsigned __int64)(8 * v4) >> 15,
              &v10,
              v9) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  v7 = (volatile signed __int64 *)(*((_QWORD *)&v10 + 1) + 24LL);
  if ( (_DWORD)v10 == 1 )
    RtlReleaseSRWLockExclusive(v7);
  else
    RtlReleaseSRWLockShared(v7);
  return v6;
}
