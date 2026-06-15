/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x1400277B0
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140041E84 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140045AD4 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x1400277DC (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(void **this)
{
  ATL::CAutoPtr<CPipeInstance>::Free(this);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    this + 1,
    0LL);
  *((_BYTE *)this + 24) = 0;
}
