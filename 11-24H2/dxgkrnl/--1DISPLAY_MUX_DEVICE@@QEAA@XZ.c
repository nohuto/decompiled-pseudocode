/*
 * XREFs of ??1DISPLAY_MUX_DEVICE@@QEAA@XZ @ 0x1400825F4
 * Callers:
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_DEVICE@@U?$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_DEVICE@@@Z @ 0x140088974 (-reset@-$unique_ptr@VDISPLAY_MUX_DEVICE@@U-$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003DDA0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005BB04 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C228 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 *     ?Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ @ 0x140083A1C (-Cleanup@DISPLAY_MUX_DEVICE@@AEAAXXZ.c)
 */

void __fastcall DISPLAY_MUX_DEVICE::~DISPLAY_MUX_DEVICE(PUNICODE_STRING UnicodeString)
{
  DISPLAY_MUX_DEVICE::Cleanup((DISPLAY_MUX_DEVICE *)UnicodeString);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)&UnicodeString[6]);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)&UnicodeString[5].Buffer);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)&UnicodeString[5]);
  RtlFreeUnicodeString(UnicodeString + 3);
  RtlFreeUnicodeString(UnicodeString + 2);
  RtlFreeUnicodeString(UnicodeString + 1);
  RtlFreeUnicodeString(UnicodeString);
}
