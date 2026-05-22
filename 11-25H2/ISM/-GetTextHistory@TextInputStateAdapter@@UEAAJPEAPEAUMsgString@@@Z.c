/*
 * XREFs of ?GetTextHistory@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x1801C6590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetTextHistory(TextInputStateAdapter *this, struct MsgString **a2)
{
  *a2 = 0LL;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 288LL))(*((_QWORD *)this + 4));
}
