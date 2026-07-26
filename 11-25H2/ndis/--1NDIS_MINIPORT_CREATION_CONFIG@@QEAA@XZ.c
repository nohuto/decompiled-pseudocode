/*
 * XREFs of ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x14006C890
 * Callers:
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168A20 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG(NDIS_MINIPORT_CREATION_CONFIG *this)
{
  void *v2; // rcx

  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((char *)this + 64, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((char *)this + 56, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((char *)this + 48, 0LL);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    ZwClose(v2);
}
