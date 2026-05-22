/*
 * XREFs of ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18008F510
 * Callers:
 *     _dynamic_initializer_for__PointerInputMediator::s_frameLookaside__ @ 0x180009DC0 (_dynamic_initializer_for__PointerInputMediator--s_frameLookaside__.c)
 *     _dynamic_initializer_for__ShellGesturesProcessor::s_clients__ @ 0x180009DF0 (_dynamic_initializer_for__ShellGesturesProcessor--s_clients__.c)
 *     _dynamic_initializer_for__PointerInputMediator::s_frameQueue__ @ 0x180009E20 (_dynamic_initializer_for__PointerInputMediator--s_frameQueue__.c)
 *     ??0RayStabilizer@@QEAA@XZ @ 0x18008F484 (--0RayStabilizer@@QEAA@XZ.c)
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA080 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x1800EE218 (--0KeyboardOverriderDispatcher@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(_QWORD *a1)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result[1] = 0LL;
  *a1 = result;
  *result = a1;
  return result;
}
