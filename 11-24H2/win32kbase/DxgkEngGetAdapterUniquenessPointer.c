/*
 * XREFs of DxgkEngGetAdapterUniquenessPointer @ 0x140157410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetAdapterUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL) + 1573024LL;
}
