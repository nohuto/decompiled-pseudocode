/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180134220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801E7340 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_1801743A0;
  *a3 = off_180174460;
  return 0LL;
}
