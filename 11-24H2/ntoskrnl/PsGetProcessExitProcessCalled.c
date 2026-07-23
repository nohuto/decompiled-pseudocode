/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140467150
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140BA01E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 4) != 0;
}
