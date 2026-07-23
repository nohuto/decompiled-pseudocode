/*
 * XREFs of RtlApplyRXactNoFlush @ 0x180101770
 * Callers:
 *     <none>
 * Callees:
 *     RXactpCommit @ 0x180101798 (RXactpCommit.c)
 *     RtlAbortRXact @ 0x180101960 (RtlAbortRXact.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = RXactpCommit(a1);
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}
