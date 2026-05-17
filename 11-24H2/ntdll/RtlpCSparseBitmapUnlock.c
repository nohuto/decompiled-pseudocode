/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x180092B00
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1800914D8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014CC94 (RtlpHpUnlockHeapManagerForClone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  volatile signed __int64 *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
