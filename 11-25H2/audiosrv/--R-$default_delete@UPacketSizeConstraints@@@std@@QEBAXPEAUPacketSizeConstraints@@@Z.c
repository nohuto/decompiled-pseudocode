/*
 * XREFs of ??R?$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z @ 0x18012A8E4
 * Callers:
 *     ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x18012880C (--1-$unique_ptr@UPacketSizeConstraints@@U-$default_delete@UPacketSizeConstraints@@@std@@@std@@QE.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x18015DE44 (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<PacketSizeConstraints>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      a2 + 1,
      0LL);
    operator delete(a2, (const struct std::nothrow_t *)0x10);
  }
}
