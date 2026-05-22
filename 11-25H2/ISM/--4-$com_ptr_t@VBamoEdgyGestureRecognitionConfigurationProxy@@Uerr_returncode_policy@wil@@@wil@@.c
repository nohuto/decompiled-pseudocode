/*
 * XREFs of ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800B1300
 * Callers:
 *     ?SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B1F90 (-SetActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z.c)
 *     ?SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800B2050 (-SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrinci.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180126F34 (-UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801270D4 (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
