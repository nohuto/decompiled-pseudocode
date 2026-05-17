/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x18010E9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72), a2, a3);
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  return 0LL;
}
