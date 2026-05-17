/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180122220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_1801E9210 )
    return 3221225485LL;
  *a1 = NtDllUserStubs;
  *a2 = off_1801761C0;
  *a3 = off_180176280;
  return 0LL;
}
