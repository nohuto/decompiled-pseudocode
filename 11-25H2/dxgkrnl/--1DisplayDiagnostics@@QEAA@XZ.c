/*
 * XREFs of ??1DisplayDiagnostics@@QEAA@XZ @ 0x140072788
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?PoUnregisterPowerSettingCallback@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400726A0 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-PoUnregisterPowerSettingCallback@@YAJ0.c)
 *     ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x1400727C8 (--1LongPowerButtonHoldListener@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1401C6528 (--1DXGBLACKBOX@@QEAA@XZ.c)
 */

void __fastcall DisplayDiagnostics::~DisplayDiagnostics(DisplayDiagnostics *this)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long PoUnregisterPowerSettingCallback(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long PoUnregisterPowerSettingCallback(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this + 22);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long PoUnregisterPowerSettingCallback(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long PoUnregisterPowerSettingCallback(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this + 21);
  LongPowerButtonHoldListener::~LongPowerButtonHoldListener((DisplayDiagnostics *)((char *)this + 64));
  DXGBLACKBOX::~DXGBLACKBOX(this);
}
