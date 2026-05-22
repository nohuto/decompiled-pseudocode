/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800E6C78
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E6BA4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800E6C9C (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E9D1C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ??1CompliantHapticInterface@@QEAA@XZ @ 0x180184A20 (--1CompliantHapticInterface@@QEAA@XZ.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18018DBD0 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x18018E91C (--1PenHapticInterface@@UEAA@XZ.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x18018FE6C (--1PenInterface@@UEAA@XZ.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801C580C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(
        struct _HIDP_PREPARSED_DATA **a1)
{
  struct _HIDP_PREPARSED_DATA *v1; // rcx
  BOOLEAN result; // al

  v1 = *a1;
  if ( v1 )
    return HidD_FreePreparsedData(v1);
  return result;
}
