/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x1800BBE80
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1800BA858 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpUnlockHeapManagerForClone @ 0x18014E244 (RtlpHpUnlockHeapManagerForClone.c)
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
