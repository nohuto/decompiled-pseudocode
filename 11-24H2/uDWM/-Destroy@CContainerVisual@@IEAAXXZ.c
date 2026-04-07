/*
 * XREFs of ?Destroy@CContainerVisual@@IEAAXXZ @ 0x1800218D4
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18002189C (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 */

void __fastcall CContainerVisual::Destroy(CContainerVisual *this)
{
  CContainerVisual::RemoveAllChildren(this);
  (*(void (__fastcall **)(CContainerVisual *, _QWORD))(*(_QWORD *)this + 192LL))(this, 0LL);
}
