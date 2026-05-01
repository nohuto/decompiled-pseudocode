/*
 * XREFs of ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18011AD80
 * Callers:
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18003F9D0 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180040420 (-StartActivity@CreateAltTabControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180119EC4 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18011A4F8 (-StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1801EA41C (-StartActivity@CreateCachedData@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1802AD168 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1806A11E8 (-StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z @ 0x1806A1280 (-StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     ?Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18011AE3C (-Provider@XamlSwitcherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)XamlSwitcherLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
