/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1800AA7B4
 * Callers:
 *     _SystemContextEndpoint::OnInputConfigChanged_::_1_::dtor$0 @ 0x1801D46A7 (_SystemContextEndpoint--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801D8F80 (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(__int64 *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(this);
}
