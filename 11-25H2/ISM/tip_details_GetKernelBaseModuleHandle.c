/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x1800A7C60
 * Callers:
 *     TestClose @ 0x1800A796C (TestClose.c)
 *     TestCreate @ 0x1800A79C0 (TestCreate.c)
 *     TestQueryData @ 0x1800A7A5C (TestQueryData.c)
 *     TestReport @ 0x1800A7AEC (TestReport.c)
 *     TestUnlockData @ 0x1800A7B40 (TestUnlockData.c)
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
