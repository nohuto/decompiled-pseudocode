/*
 * XREFs of ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B5340
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEBUtagPROPVARIANT@@I@Z @ 0x1800B4C4C (-SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEBUtagPR.c)
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_SetConstant_8(
        int *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
