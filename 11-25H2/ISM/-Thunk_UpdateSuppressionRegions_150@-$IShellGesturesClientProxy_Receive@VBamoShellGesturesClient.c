/*
 * XREFs of ?Thunk_UpdateSuppressionRegions_150@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18015A340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IShellGesturesClientProxy_Receive<BamoImpl::BamoShellGesturesClientProxyImpl>::Thunk_UpdateSuppressionRegions_150(
        BamoImpl::BamoShellGesturesClientProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoShellGesturesClientProxyImpl::UpdateSuppressionRegions(
           a1,
           1,
           *(const struct tagRECT **)a2,
           *(_DWORD *)(a2 + 8));
}
