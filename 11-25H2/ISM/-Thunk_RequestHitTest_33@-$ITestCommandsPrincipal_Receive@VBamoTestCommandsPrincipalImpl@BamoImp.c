/*
 * XREFs of ?Thunk_RequestHitTest_33@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019B2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ITestCommandsPrincipal_Receive<BamoImpl::BamoTestCommandsPrincipalImpl>::Thunk_RequestHitTest_33(
        BamoImpl::BamoTestCommandsPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoTestCommandsPrincipalImpl::RequestHitTest(
           a1,
           **(_QWORD **)a2,
           **(_QWORD **)(a2 + 8),
           *(const unsigned __int16 **)(a2 + 16));
}
