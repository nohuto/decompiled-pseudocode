/*
 * XREFs of ZwManageHotPatch @ 0x180162380
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800AE5C8 (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x1800AE630 (LdrpLoadPatchedNtdll.c)
 *     LdrpQueryCurrentPatch @ 0x1800AE798 (LdrpQueryCurrentPatch.c)
 *     LdrpMapDllPatchImage @ 0x18010F6BC (LdrpMapDllPatchImage.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015CE2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpApplyPatchImageCommon @ 0x18015DDC4 (LdrpApplyPatchImageCommon.c)
 * Callees:
 *     <none>
 */

__int64 ZwManageHotPatch()
{
  __int64 result; // rax

  result = 282LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
