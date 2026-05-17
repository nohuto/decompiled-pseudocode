/*
 * XREFs of ZwManageHotPatch @ 0x180163FC0
 * Callers:
 *     LdrpInitializeHotPatching @ 0x1800663E8 (LdrpInitializeHotPatching.c)
 *     LdrpLoadPatchedNtdll @ 0x180066450 (LdrpLoadPatchedNtdll.c)
 *     LdrpQueryCurrentPatch @ 0x1800665B8 (LdrpQueryCurrentPatch.c)
 *     LdrpMapDllPatchImage @ 0x18011446C (LdrpMapDllPatchImage.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 *     LdrpApplyPatchImageCommon @ 0x18015FA04 (LdrpApplyPatchImageCommon.c)
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
