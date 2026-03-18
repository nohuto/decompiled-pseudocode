/*
 * XREFs of ?bDontShowPointer@@YAHXZ @ 0x1C001D300
 * Callers:
 *     GreMovePointer @ 0x1C001D070 (GreMovePointer.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bDontShowPointer(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8672LL) != 0;
}
