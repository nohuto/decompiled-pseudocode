/*
 * XREFs of ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x18010A3BC
 * Callers:
 *     _DisplayOcclusionContextProvider::GetCurrentContext_::_1_::dtor$1 @ 0x1801D8FEC (_DisplayOcclusionContextProvider--GetCurrentContext_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DisplayOcclusionContextMessage::~DisplayOcclusionContextMessage(DisplayOcclusionContextMessage *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy(this);
}
