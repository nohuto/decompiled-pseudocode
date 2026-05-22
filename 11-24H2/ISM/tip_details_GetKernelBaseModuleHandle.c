/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x1800A6970
 * Callers:
 *     TestClose @ 0x1800A667C (TestClose.c)
 *     TestCreate @ 0x1800A66D0 (TestCreate.c)
 *     TestQueryData @ 0x1800A676C (TestQueryData.c)
 *     TestReport @ 0x1800A67FC (TestReport.c)
 *     TestUnlockData @ 0x1800A6850 (TestUnlockData.c)
 * Callees:
 *     <none>
 */

HMODULE tip_details_GetKernelBaseModuleHandle()
{
  HMODULE result; // rax

  result = (HMODULE)g_tip_details_kernelbaseModuleHandle;
  if ( !g_tip_details_kernelbaseModuleHandle )
  {
    result = GetModuleHandleW(L"kernelbase.dll");
    g_tip_details_kernelbaseModuleHandle = (__int64)result;
  }
  return result;
}
