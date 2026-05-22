/*
 * XREFs of ?GetInputProfileHotKeys@TextInputStateAdapter@@UEAAJPEAPEAUMsgBlob@@@Z @ 0x1801C63F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetInputProfileHotKeys(TextInputStateAdapter *this, struct MsgBlob **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgBlob **))(**((_QWORD **)this + 4) + 344LL))(
           *((_QWORD *)this + 4),
           a2);
}
