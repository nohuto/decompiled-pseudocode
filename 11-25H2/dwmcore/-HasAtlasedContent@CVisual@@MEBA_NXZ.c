/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x18012D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool result; // al
  bool (__fastcall *v3)(__int64, unsigned __int64); // rax

  v1 = *((_QWORD *)this + 32);
  result = 0;
  if ( v1 )
  {
    v3 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v1 + 64LL);
    if ( v3 == CColorBrush::IsOfType ? CColorBrush::IsOfType(v1, 0x75uLL) : v3(v1, 117uLL) )
      return 1;
  }
  return result;
}
