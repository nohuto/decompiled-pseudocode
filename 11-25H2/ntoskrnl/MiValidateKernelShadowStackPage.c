/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x140346F68
 * Callers:
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MiAddKernelStackToPrcbCache @ 0x140346930 (MiAddKernelStackToPrcbCache.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x1404892F8 (MiUpdateKernelShadowStackOwnerData.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14048AE28 (MiKernelShadowStackIdealForCaching.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
