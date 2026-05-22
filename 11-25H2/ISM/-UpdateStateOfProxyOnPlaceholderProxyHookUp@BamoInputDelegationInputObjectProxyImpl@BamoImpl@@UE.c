/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180087EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180132224 (-UpdateGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?UpdateGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180132348 (-UpdateGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadInterceptionEnabled(this, 0, *((_BYTE *)a2 + 32));
  BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadKeyRoutingEnabled(this, 0, *((_BYTE *)a2 + 33));
  BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadMouseModeEnabled(this, 0, *((_BYTE *)a2 + 34));
}
