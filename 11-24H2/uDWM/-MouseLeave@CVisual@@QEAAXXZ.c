/*
 * XREFs of ?MouseLeave@CVisual@@QEAAXXZ @ 0x180021B70
 * Callers:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180021788 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::MouseLeave(CVisual *this)
{
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 104LL))(this);
}
