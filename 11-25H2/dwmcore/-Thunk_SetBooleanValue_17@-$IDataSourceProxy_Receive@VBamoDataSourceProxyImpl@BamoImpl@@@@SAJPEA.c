/*
 * XREFs of ?Thunk_SetBooleanValue_17@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18025BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetBooleanValue_17(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  _BYTE *v2; // r8

  v2 = *(_BYTE **)(a2 + 8);
  LOBYTE(v2) = *v2;
  return BamoImpl::BamoDataSourceProxyImpl::SetBooleanValue(a1, **(_DWORD **)a2, (__int64)v2);
}
