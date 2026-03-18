/*
 * XREFs of ?IsPrimaryResource@CRenderTargetBitmap@@UEBA_NXZ @ 0x1802E0B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderTargetBitmap::IsPrimaryResource(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1) != 0;
  return v2;
}
