/*
 * XREFs of ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x1804C5D3C
 * Callers:
 *     ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x1804C2FB4 (-_UpdateBorder@CSwitchItemElement@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMultitaskingViewElementBase::_ShouldRenderAsFocused(CMultitaskingViewElementBase *this)
{
  char v2; // al
  char v3; // cl

  if ( !(*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 304LL))(this) )
    return 0;
  v2 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 176LL))(this);
  v3 = 1;
  if ( (v2 & 1) == 0 )
    return 0;
  return v3;
}
