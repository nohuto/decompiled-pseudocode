/*
 * XREFs of ?GetSizePreference@CGlobalCompositionSurfaceInfo@@UEBA?AW4SizePreference@@XZ @ 0x1801DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetSizePreference(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 208);
  v2 = 1;
  if ( v1
    && ((unsigned int)((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 184)) >> 3) > 1 || *(_DWORD *)(a1 + 144) == 3) )
  {
    return (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 104LL))(*(_QWORD *)(a1 + 208), 1LL);
  }
  return v2;
}
