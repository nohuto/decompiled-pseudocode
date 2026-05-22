/*
 * XREFs of ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x1800ABCB4
 * Callers:
 *     _SystemContextEndpoint::OnInputConfigChanged_::_1_::dtor$0 @ 0x1801CD404 (_SystemContextEndpoint--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _VirtualTouchpadContextProvider::GetCurrentContext_::_1_::dtor$2 @ 0x1801D14E4 (_VirtualTouchpadContextProvider--GetCurrentContext_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VirtualTouchpadContextMessage::~VirtualTouchpadContextMessage(__int64 *this)
{
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(this);
}
