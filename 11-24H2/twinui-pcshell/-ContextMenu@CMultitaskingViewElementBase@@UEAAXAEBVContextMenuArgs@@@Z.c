/*
 * XREFs of ?ContextMenu@CMultitaskingViewElementBase@@UEAAXAEBVContextMenuArgs@@@Z @ 0x1804C37E0
 * Callers:
 *     ?ContextMenu@CSwitchItemElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x1804C1A20 (-ContextMenu@CSwitchItemElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewElementBase::ContextMenu(
        CMultitaskingViewElementBase *this,
        const struct ContextMenuArgs *a2)
{
  __int64 v2; // r8

  if ( *(_DWORD *)a2 == -1 )
    v2 = *((_QWORD *)this + 21);
  else
    v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 256LL))(v2);
  else
    (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 600LL))(this);
}
