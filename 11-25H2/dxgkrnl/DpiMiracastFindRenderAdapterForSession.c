/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1403D12F8
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140089AB0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140089C00 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x140011F28 (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiGetFdoFromDevice(qword_14015E000);
  if ( result )
  {
    v1 = *(_DWORD *)(result + 236);
    if ( v1 != 2 && (*(_DWORD *)(result + 240) != 2 || ((v1 - 3) & 0xFFFFFFFC) != 0 || v1 == 4) )
    {
      WdLogSingleEntry0(3LL);
      result = 0LL;
      WdLogGlobalForLineNumber = 8996;
    }
  }
  return result;
}
