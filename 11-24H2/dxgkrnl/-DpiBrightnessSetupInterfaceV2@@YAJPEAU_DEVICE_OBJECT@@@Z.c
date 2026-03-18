/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024D9D0
 * Callers:
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x14024D744 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x14024DB1C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 result; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // [rsp+20h] [rbp-18h]

  DeviceExtension = (char *)a1->DeviceExtension;
  result = DpiQueryMiniportInterface(
             (__int64)a1,
             (__int64)&GUID_DEVINTERFACE_BRIGHTNESS_2,
             88,
             2,
             v5,
             (__int64)(DeviceExtension + 4808));
  if ( (int)result < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1202) = 131160;
  *((_QWORD *)DeviceExtension + 596) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 597) = DXGGLOBAL::DereferenceObjectWork;
  *((_QWORD *)DeviceExtension + 598) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 599) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 600) = DpiBrightnessIfGet;
  *((_QWORD *)DeviceExtension + 595) = a1;
  *((_DWORD *)DeviceExtension + 1188) = 65592;
  *(_OWORD *)(DeviceExtension + 4664) = *((_OWORD *)DeviceExtension + 297);
  *(_OWORD *)(DeviceExtension + 4680) = *((_OWORD *)DeviceExtension + 298);
  *(_OWORD *)(DeviceExtension + 4696) = *((_OWORD *)DeviceExtension + 299);
  v4 = *((_QWORD *)DeviceExtension + 600);
  *((_QWORD *)DeviceExtension + 590) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 592) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 589) = v4;
  *((_QWORD *)DeviceExtension + 593) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1166) = 131160;
  return result;
}
