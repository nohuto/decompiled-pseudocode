/*
 * XREFs of ?HasApprovedCustomDuration@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180281E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HasApprovedCustomDuration(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 312LL))(v1);
  return result;
}
