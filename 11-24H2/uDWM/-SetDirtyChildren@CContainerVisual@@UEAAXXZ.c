/*
 * XREFs of ?SetDirtyChildren@CContainerVisual@@UEAAXXZ @ 0x180063AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CContainerVisual::SetDirtyChildren(CContainerVisual *this)
{
  *((_DWORD *)this + 8) |= 1u;
}
