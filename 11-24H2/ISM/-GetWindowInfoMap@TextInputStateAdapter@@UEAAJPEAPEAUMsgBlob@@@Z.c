/*
 * XREFs of ?GetWindowInfoMap@TextInputStateAdapter@@UEAAJPEAPEAUMsgBlob@@@Z @ 0x1801CDC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetWindowInfoMap(TextInputStateAdapter *this, struct MsgBlob **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgBlob **))(**((_QWORD **)this + 4) + 336LL))(
           *((_QWORD *)this + 4),
           a2);
}
