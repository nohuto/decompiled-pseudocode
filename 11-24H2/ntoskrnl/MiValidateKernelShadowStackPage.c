/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x140221838
 * Callers:
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x14021F29C (MiUpdateKernelShadowStackOwnerData.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     MiAddKernelStackToPrcbCache @ 0x1402211B0 (MiAddKernelStackToPrcbCache.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140473F28 (MiKernelShadowStackIdealForCaching.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateKernelShadowStackPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 32);
  if ( (_WORD)result != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3405uLL,
      BugCheckParameter2,
      0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
      (unsigned __int16)result);
  return result;
}
