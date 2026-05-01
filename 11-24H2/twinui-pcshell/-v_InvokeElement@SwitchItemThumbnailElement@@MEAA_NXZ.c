/*
 * XREFs of ?v_InvokeElement@SwitchItemThumbnailElement@@MEAA_NXZ @ 0x1804D5B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SwitchItemThumbnailElement::v_InvokeElement(SwitchItemThumbnailElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 73);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 72));
  return 1;
}
