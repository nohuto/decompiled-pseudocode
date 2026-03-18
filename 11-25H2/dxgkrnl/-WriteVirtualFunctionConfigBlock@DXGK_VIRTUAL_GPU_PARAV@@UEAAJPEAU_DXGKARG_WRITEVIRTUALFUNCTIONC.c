/*
 * XREFs of ?WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x140211080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  __int64 result; // rax

  WdLogSingleEntry1(3LL, a2->VirtualFunctionIndex);
  result = 0LL;
  WdLogGlobalForLineNumber = 171;
  return result;
}
