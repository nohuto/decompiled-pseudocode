/*
 * XREFs of ?GetSelectedChild@CVirtualDesktopContainerElement@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@XZ @ 0x1804DEC30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall CVirtualDesktopContainerElement::GetSelectedChild(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rsi

  v2 = *(__int64 **)(a1 + 792);
  v4 = &v2[*(_QWORD *)(a1 + 800)];
  while ( v2 != v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 344LL))(*v2) )
    {
      *a2 = *v2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
      return a2;
    }
    ++v2;
  }
  *a2 = 0LL;
  return a2;
}
