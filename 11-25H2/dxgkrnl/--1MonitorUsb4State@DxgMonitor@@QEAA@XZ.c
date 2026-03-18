/*
 * XREFs of ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1402702A8
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorUsb4State@DxgMonitor@@U?$default_delete@VMonitorUsb4State@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorUsb4State@DxgMonitor@@@Z @ 0x140063058 (-reset@-$unique_ptr@VMonitorUsb4State@DxgMonitor@@U-$default_delete@VMonitorUsb4State@DxgMonitor.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x14005739C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C0A4 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@detail.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C7C8 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 *     ??1USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAA@XZ @ 0x14009020C (--1USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAA@XZ.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042C8D4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::~MonitorUsb4State(DxgMonitor::MonitorUsb4State *this)
{
  char *v2; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v3)(PUNICODE_STRING); // [rsp+38h] [rbp+10h] BYREF

  DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(this, 0);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this + 11);
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::~USB4POFXREF_REF_ACCESSOR((DxgMonitor::MonitorUsb4State *)((char *)this + 72));
  v2 = (char *)this + 40;
  v3 = RtlFreeUnicodeString;
  ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>((__int64 *)this + 4);
}
