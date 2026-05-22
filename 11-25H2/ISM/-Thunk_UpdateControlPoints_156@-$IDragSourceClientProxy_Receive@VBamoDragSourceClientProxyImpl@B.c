/*
 * XREFs of ?Thunk_UpdateControlPoints_156@?$IDragSourceClientProxy_Receive@VBamoDragSourceClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180124850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDragSourceClientProxy_Receive<BamoImpl::BamoDragSourceClientProxyImpl>::Thunk_UpdateControlPoints_156(
        BamoImpl::BamoDragSourceClientProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints(
           a1,
           1,
           *(const struct tagPOINT **)a2,
           *(_DWORD *)(a2 + 8));
}
