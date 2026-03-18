/*
 * XREFs of ?Thunk_SetColorValue_36@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180288F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180288A94 (-SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetColorValue_36(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetColorValue(
           a1,
           **(_DWORD **)a2,
           **(float **)(a2 + 8),
           **(float **)(a2 + 16));
}
