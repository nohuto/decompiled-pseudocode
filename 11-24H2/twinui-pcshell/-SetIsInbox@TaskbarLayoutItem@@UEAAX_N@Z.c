/*
 * XREFs of ?SetIsInbox@TaskbarLayoutItem@@UEAAX_N@Z @ 0x180322CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskbarLayoutItem::SetIsInbox(TaskbarLayoutItem *this, char a2)
{
  *((_BYTE *)this + 124) = a2;
}
