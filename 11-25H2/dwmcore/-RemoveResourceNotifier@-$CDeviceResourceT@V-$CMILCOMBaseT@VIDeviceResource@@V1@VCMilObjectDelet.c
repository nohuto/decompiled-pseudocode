/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18020C080
 * Callers:
 *     ?RemoveResourceNotifier@?$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180227680 (-RemoveResourceNotifier@-$IDeviceResourceMethodsT@VCD2DResource@@VID2DBitmap@@@@UEAAXPEBVIDevice.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ @ 0x18025646C (-ReleaseResources@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180282790 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@EEAAXPEBVIDeviceR.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
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
