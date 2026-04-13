/*
 * XREFs of ?GetIids@NotificationManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180031F50
 * Callers:
 *     ?GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180031FD0 (-GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UINotificationManager@ContentManagement@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18002F8C0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$_ea_18002F8C0.c)
 */

__int64 __fastcall ContentManagement::NotificationManager::GetIids(
        ContentManagement::NotificationManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax
  __int64 v7; // rcx
  struct _GUID *v8; // r8
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    v10 = 1;
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::INotificationManager>::FillArrayWithIid(
      v7,
      &v10,
      (__int64)v6);
    *a2 = 3;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
