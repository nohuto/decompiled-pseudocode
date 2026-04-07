/*
 * XREFs of tip_details_GetKernelBaseModuleHandle @ 0x18009A724
 * Callers:
 *     TestUnlockData @ 0x180087B68 (TestUnlockData.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800885A0 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     TestReport @ 0x18009A6D0 (TestReport.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800E22E0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     TestClose @ 0x1800E3D54 (TestClose.c)
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
