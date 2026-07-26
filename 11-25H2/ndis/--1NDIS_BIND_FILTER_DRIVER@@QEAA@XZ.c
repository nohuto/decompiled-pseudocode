/*
 * XREFs of ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x140142E04
 * Callers:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER(NDIS_BIND_FILTER_DRIVER *this)
{
  _LIST_ENTRY *p_BindLinks; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax

  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
    (void **)&this->FilterClass.__ptr_.__value_,
    0LL);
  p_BindLinks = &this->BindLinks;
  Flink = p_BindLinks->Flink;
  if ( p_BindLinks->Flink->Blink != p_BindLinks || (Blink = p_BindLinks->Blink, Blink->Flink != p_BindLinks) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
}
