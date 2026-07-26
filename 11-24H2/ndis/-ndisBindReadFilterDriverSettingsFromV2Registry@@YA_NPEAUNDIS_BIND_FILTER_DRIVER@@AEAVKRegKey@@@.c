/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1401439C0
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1401436E0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_S @ 0x140094F70 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140135F90 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140167430 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  unsigned int i; // ebx
  wchar_t **v5; // rsi
  unsigned __int8 v7; // [rsp+40h] [rbp+8h] BYREF

  a1->FilterBindFlags = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
        (void **)&a1->FilterClass.__ptr_.__value_,
        0LL);
      KRegKey::QueryValueString(a2, L"FilterClass", &a1->FilterClass);
      return 1;
    }
    v5 = &(&off_1400F4CD0)[2 * i];
    v7 = 0;
    if ( KRegKey::QueryValueBoolean(a2, *v5, &v7, 1u) < 0 )
      break;
    if ( v7 )
      a1->FilterBindFlags |= *((_DWORD *)v5 + 2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xCu,
      (struct _GUID *)&WPP_e6a3feaccfd03f16d83983c6da9abacd_Traceguids,
      *v5);
  return 0;
}
