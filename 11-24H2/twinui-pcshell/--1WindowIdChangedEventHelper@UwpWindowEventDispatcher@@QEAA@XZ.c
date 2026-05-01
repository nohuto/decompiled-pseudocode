/*
 * XREFs of ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1800208B0
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180249290 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$7 @ 0x1806CAB1D (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$7.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivationRequested_::_1_::dtor$14 @ 0x1806CAD87 (_UwpWindowEventDispatcher--UwpWindowActivationRequested_--_1_--dtor$14.c)
 *     _UwpWindowEventDispatcher::OnShellHookMessage_::_1_::dtor$2 @ 0x1806E93F2 (_UwpWindowEventDispatcher--OnShellHookMessage_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this)
{
  std::_Ref_count_base *v2; // rcx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)this )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  if ( *((_BYTE *)this + 28) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  if ( *((_BYTE *)this + 36) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  if ( *((_BYTE *)this + 44) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  if ( *((_BYTE *)this + 52) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x171,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  if ( *((_BYTE *)this + 60) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x172,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x8000000DLL,
      v3);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
