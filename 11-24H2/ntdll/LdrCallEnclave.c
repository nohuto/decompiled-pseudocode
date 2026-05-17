/*
 * XREFs of LdrCallEnclave @ 0x18010FED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrCallEnclave(__int64 (__fastcall *a1)(_QWORD), unsigned int a2, _QWORD *a3)
{
  return LdrpIssueEnclaveCall(a1, a2, a3);
}
