/*
 * XREFs of ?GetAdapterLuid@CDxHandleBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801F2F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CDxHandleBitmapRealization::GetAdapterLuid(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*((_QWORD *)this + 6));
  else
    *a2 = *((_QWORD *)this - 8);
  return (struct _LUID)a2;
}
