/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012C000
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18006A884 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy(this, 0LL, *((unsigned int *)a2 + 8));
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(this, 0LL, *((unsigned int *)a2 + 9));
}
