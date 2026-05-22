/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009C3E0
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x1801CF306 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$4 @ 0x1801D075E (_SystemCursors--SharedTargetWithHandle--Initialize_--_1_--dtor$4.c)
 *     _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801D0F91 (_PenInterface--PenInterface_--_1_--dtor$3.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$3 @ 0x1801D1FC3 (_DWMCursor--DWMCursor_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
