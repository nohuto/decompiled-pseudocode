/*
 * XREFs of ??1CFormatConverterPipe@@QEAA@XZ @ 0x14002A638
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 */

void __fastcall CFormatConverterPipe::~CFormatConverterPipe(void **this)
{
  unsigned int v2; // edx

  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    this + 1,
    0LL);
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this, v2);
}
