/*
 * XREFs of ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x1801084AC
 * Callers:
 *     _DisplayOcclusionContextProvider::GetCurrentContext_::_1_::dtor$1 @ 0x1801D1550 (_DisplayOcclusionContextProvider--GetCurrentContext_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DisplayOcclusionContextMessage::~DisplayOcclusionContextMessage(DisplayOcclusionContextMessage *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy(this);
}
