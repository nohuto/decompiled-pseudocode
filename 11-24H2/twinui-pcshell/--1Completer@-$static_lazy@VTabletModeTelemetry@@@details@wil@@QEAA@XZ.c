/*
 * XREFs of ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x180224BF4
 * Callers:
 *     ?get@?$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6AXXZ@Z @ 0x1800CBCF8 (-get@-$static_lazy@VShellPositionerTelemetry@@@details@wil@@QEAAPEAVShellPositionerTelemetry@@P6.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x1800CCC68 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D468 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?get@?$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z @ 0x1802B1960 (-get@-$static_lazy@VSnapFlyoutTelemetry@@@details@wil@@QEAAPEAVSnapFlyoutTelemetry@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x180510444 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x180520B24 (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktopTelemetry@VirtualDesktop@@P6AXXZ@Z @ 0x180563CC8 (-get@-$static_lazy@VVirtualDesktopTelemetry@VirtualDesktop@@@details@wil@@QEAAPEAVVirtualDesktop.c)
 *     ?get@?$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTelemetry@@P6AXXZ@Z @ 0x1805B6708 (-get@-$static_lazy@VSnapMigrationHandlerTelemetry@@@details@wil@@QEAAPEAVSnapMigrationHandlerTel.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = WindowManagementLogging::Provider();
    v3.Ptr = v2[1].Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
