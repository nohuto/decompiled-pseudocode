/*
 * XREFs of ?GetEnabledInputProfiles@TextInputStateAdapter@@UEAAJPEAPEAUMsgBlob@@@Z @ 0x1801C61B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetEnabledInputProfiles(TextInputStateAdapter *this, struct MsgBlob **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MsgBlob **))(**((_QWORD **)this + 4) + 216LL))(
           *((_QWORD *)this + 4),
           a2);
}
