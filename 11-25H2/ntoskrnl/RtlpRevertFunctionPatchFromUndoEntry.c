/*
 * XREFs of RtlpRevertFunctionPatchFromUndoEntry @ 0x1406982B8
 * Callers:
 *     RtlApplyHotPatch @ 0x140B53980 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRevertFunctionPatchFromUndoEntry(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)a2[1];
  *a1 = result;
  *a2 = 0;
  return result;
}
