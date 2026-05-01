/*
 * XREFs of _TouchEdgeGripperHost::TouchEdgeGripperHost_::_1_::dtor$2 @ 0x1806D3E81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TouchEdgeGripperHost::TouchEdgeGripperHost_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 40LL));
}
