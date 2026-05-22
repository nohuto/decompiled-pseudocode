/*
 * XREFs of ?Thunk_OnFirstDataRead_0@?$IDataSourcePrincipal_Receive@VBamoDataSourcePrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180105940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourcePrincipal_Receive<BamoImpl::BamoDataSourcePrincipalImpl>::Thunk_OnFirstDataRead_0(
        BamoImpl::BamoDataSourcePrincipalImpl *a1,
        __int64 **a2)
{
  return BamoImpl::BamoDataSourcePrincipalImpl::OnFirstDataRead(a1, **a2);
}
