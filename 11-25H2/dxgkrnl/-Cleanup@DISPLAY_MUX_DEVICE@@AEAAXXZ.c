/*
 * XREFs of ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083390
 * Callers:
 *     ??1DISPLAY_MUX_DEVICE@@QEAA@XZ @ 0x140081F74 (--1DISPLAY_MUX_DEVICE@@QEAA@XZ.c)
 *     _lambda_adc6777f2423c6a058a4ce52fa2b6c14_::operator() @ 0x140082748 (_lambda_adc6777f2423c6a058a4ce52fa2b6c14_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C5E0 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ?reset@?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@QEAAXXZ @ 0x14006433C (-reset@-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wi.c)
 *     ?CleanupMuxStackRefs@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x1400833DC (-CleanupMuxStackRefs@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 */

void __fastcall DISPLAY_MUX_DEVICE::Cleanup(DISPLAY_MUX_DEVICE *this)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 10,
    0LL);
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this);
  DISPLAY_MUX_DEVICE::CleanupMuxStackRefs(this);
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 1);
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 2);
  wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0>::reset((struct _UNICODE_STRING *)this + 3);
}
