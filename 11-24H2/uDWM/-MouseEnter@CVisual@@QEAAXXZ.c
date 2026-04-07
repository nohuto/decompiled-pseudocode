/*
 * XREFs of ?MouseEnter@CVisual@@QEAAXXZ @ 0x180021B84
 * Callers:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180021788 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::MouseEnter(CVisual *this)
{
  (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 96LL))(this);
}
