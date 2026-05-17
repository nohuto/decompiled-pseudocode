/*
 * XREFs of ZwManageHotPatch @ 0x180165550
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800D2068 (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x1800D20D0 (LdrpLoadPatchedNtdll.c)
 *     LdrpQueryCurrentPatch @ 0x1800D2238 (LdrpQueryCurrentPatch.c)
 *     LdrpMapDllPatchImage @ 0x18011741C (LdrpMapDllPatchImage.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015FF2C (LdrpIsCurrentPatchLatest.c)
 *     LdrpApplyPatchImageCommon @ 0x180160F58 (LdrpApplyPatchImageCommon.c)
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
