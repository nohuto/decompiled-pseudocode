/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAnimationTargetClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801461C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18009894C (-UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoAnimationTargetClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateId(this, 0LL, *((_QWORD *)a2 + 4));
  BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateData(
    this,
    0LL,
    (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)a2 + 40));
}
