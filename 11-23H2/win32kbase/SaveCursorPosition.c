/*
 * XREFs of SaveCursorPosition @ 0x1C01E8A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SaveCursorPosition(__int64 a1)
{
  *(_QWORD *)((char *)&InputDelegation::CInputDelegationInfo::gInstance + 12) = a1;
}
