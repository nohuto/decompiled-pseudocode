/*
 * XREFs of ?AddResponseRef@CResponseItem@@UEAAXXZ @ 0x1802269F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

void __fastcall CResponseItem::AddResponseRef(CResponseItem *this)
{
  CMILRefCountImpl::AddReference((CResponseItem *)((char *)this + 8));
  ++*((_DWORD *)this + 4);
}
