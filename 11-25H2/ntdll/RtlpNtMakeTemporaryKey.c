/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x18014CB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpNtMakeTemporaryKey(__int64 a1)
{
  return NtDeleteKey(a1);
}
