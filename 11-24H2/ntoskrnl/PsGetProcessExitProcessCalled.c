/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x14046C5B0
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140B9E1E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0;
}
