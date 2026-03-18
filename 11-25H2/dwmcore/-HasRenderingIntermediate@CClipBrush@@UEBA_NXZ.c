/*
 * XREFs of ?HasRenderingIntermediate@CClipBrush@@UEBA_NXZ @ 0x18029FB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CClipBrush::HasRenderingIntermediate(CClipBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 280LL))(v1) != 0;
  return v2;
}
