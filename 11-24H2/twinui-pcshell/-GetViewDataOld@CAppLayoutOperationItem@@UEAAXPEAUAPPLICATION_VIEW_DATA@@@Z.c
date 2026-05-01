/*
 * XREFs of ?GetViewDataOld@CAppLayoutOperationItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1806C74E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutOperationItem::GetViewDataOld(
        CAppLayoutOperationItem *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 40);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 7);
}
