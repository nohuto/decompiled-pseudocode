/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x140056740
 * Callers:
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x1400651F0 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x1400979C0 (_dynamic_atexit_destructor_for___AtlModule__.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CF70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001D614 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CAudioDGModule::~CAudioDGModule(CAudioDGModule *this, void *a2)
{
  bool v2; // zf
  wil::details *v4; // rcx
  void *v5; // rdx
  wil::details *v6; // rcx
  wil::details *v7; // rcx

  v2 = g_fEventTracingEnabled == 0;
  *(_QWORD *)this = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  *((_QWORD *)this + 13) = &CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  if ( !v2 )
  {
    EtwUnregisterTraceGuids(qword_14009A020);
    qword_14009A020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
  v4 = (wil::details *)*((_QWORD *)this + 19);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 17);
  v6 = (wil::details *)*((_QWORD *)this + 16);
  if ( v6 )
    wil::details::CloseHandle(v6, v5);
  v7 = (wil::details *)*((_QWORD *)this + 15);
  if ( v7 )
    wil::details::CloseHandle(v7, v5);
  ATL::CAtlExeModuleT<CAudioDGModule>::~CAtlExeModuleT<CAudioDGModule>(this);
}
