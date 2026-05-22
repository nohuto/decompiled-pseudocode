/*
 * XREFs of ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800AF0CC
 * Callers:
 *     ?SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800AFD50 (-SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z.c)
 *     ?SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800AFE10 (-SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrinci.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180128E38 (-UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180128FD8 (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 *     ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x180184828 (--0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z.c)
 *     ??0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180188B70 (--0MouseHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@KAEBV-$basic_string@GU-$char_t.c)
 *     ?SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18018D940 (-SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrin.c)
 *     ?SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18018DB10 (-SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerP.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
