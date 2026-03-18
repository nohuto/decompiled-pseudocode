/*
 * XREFs of ZwProtectVirtualMemory @ 0x1406A6E10
 * Callers:
 *     CmSiProtectViewOfSection @ 0x14046A844 (CmSiProtectViewOfSection.c)
 *     KiOpPatchCode @ 0x1405C535C (KiOpPatchCode.c)
 *     DifZwProtectVirtualMemoryWrapper @ 0x140643AD0 (DifZwProtectVirtualMemoryWrapper.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 *     MiCheckForUserStackOverflow @ 0x140A27F74 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwProtectVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
