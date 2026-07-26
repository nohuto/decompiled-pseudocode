/*
 * XREFs of ??1_NDIS_FILTER_BLOCK@@QEAA@XZ @ 0x140095F00
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140018580 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14015FB90 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall _NDIS_FILTER_BLOCK::~_NDIS_FILTER_BLOCK(_NDIS_FILTER_BLOCK *this)
{
  NDISWATCHDOG__ *m_ptr; // rcx

  m_ptr = this->PendingOidWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
    (void **)&this->FilterInstanceName.__ptr_.__value_,
    0LL);
}
