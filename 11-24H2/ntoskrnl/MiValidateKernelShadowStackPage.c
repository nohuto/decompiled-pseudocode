/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x14026C2A8
 * Callers:
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x140269D0C (MiUpdateKernelShadowStackOwnerData.c)
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     MiAddKernelStackToPrcbCache @ 0x14026BC20 (MiAddKernelStackToPrcbCache.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140477930 (MiKernelShadowStackIdealForCaching.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
