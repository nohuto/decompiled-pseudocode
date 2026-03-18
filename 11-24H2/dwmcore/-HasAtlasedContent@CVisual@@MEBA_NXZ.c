/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180038070
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800380C0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool result; // al
  __int64 (__fastcall *v3)(__int64, __int64); // rax

  v1 = *((_QWORD *)this + 32);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 64LL);
    if ( v3 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v1, 118LL) : (unsigned __int8)v3(v1, 118LL) )
      return 1;
  }
  return result;
}
