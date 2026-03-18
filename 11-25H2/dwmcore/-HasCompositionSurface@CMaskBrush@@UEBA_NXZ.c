/*
 * XREFs of ?HasCompositionSurface@CMaskBrush@@UEBA_NXZ @ 0x1802A9720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::HasCompositionSurface(CMaskBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 15);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) )
    return 1;
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4) )
      return 1;
  }
  return v2;
}
