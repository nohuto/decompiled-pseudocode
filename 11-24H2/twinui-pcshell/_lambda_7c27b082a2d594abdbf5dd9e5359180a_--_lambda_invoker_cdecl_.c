/*
 * XREFs of _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x180594770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18029321C (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x18059636C (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_(_QWORD *Parameter)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(&v3);
  winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(&v3);
  v3 = Parameter;
  LODWORD(Parameter) = TouchEdgeGripperHost::XamlHostThreadProc((TouchEdgeGripperHost *)Parameter);
  winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(&v3);
  return (unsigned int)Parameter;
}
