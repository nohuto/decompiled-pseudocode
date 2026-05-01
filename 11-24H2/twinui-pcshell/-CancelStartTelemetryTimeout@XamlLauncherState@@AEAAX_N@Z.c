/*
 * XREFs of ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x1800B3840
 * Callers:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180145470 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B4020 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall XamlLauncherState::CancelStartTelemetryTimeout(XamlLauncherState *this, char a2)
{
  _QWORD *v3; // rcx
  struct _TP_TIMER *v4; // rsi
  struct _TP_TIMER *v5; // rsi
  DWORD v6; // ebx
  DWORD LastError; // ebx

  if ( !a2 )
  {
    v3 = (_QWORD *)((char *)this + 1032);
    if ( *v3 )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v3,
        0LL);
    if ( *((_QWORD *)this + 128) )
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (char *)this + 1024,
        0LL);
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 130);
    if ( v4 )
    {
      LastError = GetLastError();
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
      SetLastError(LastError);
      *((_QWORD *)this + 130) = 0LL;
    }
  }
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 131);
  if ( v5 )
  {
    v6 = GetLastError();
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v5);
    SetLastError(v6);
    *((_QWORD *)this + 131) = 0LL;
  }
}
