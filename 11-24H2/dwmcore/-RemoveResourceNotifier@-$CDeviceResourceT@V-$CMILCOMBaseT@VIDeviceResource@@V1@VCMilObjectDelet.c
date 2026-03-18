/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1801FFD40
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18021B950 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDevice.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ @ 0x18024B0A0 (-ReleaseResources@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180277BB0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceR.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  char *result; // rax
  char *v4; // r8

  result = (char *)_std_find_trivial_8(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2);
  v4 = *(char **)(a1 + 24);
  if ( result != v4 )
  {
    result = (char *)memmove_0(result, result + 8, v4 - (result + 8));
    *(_QWORD *)(a1 + 24) -= 8LL;
  }
  return result;
}
