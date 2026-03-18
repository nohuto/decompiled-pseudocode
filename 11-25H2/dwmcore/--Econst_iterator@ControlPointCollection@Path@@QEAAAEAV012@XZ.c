/*
 * XREFs of ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18005C8F0
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x18005C870 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18005CA74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator++(__int64 a1)
{
  int v1; // r8d
  int v2; // r9d
  _BYTE *v4; // rcx
  _BYTE *v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 1;
  v2 = *(_DWORD *)(a1 + 16) + 1;
  *(_DWORD *)(a1 + 16) = v2;
  v4 = *(_BYTE **)a1;
  switch ( *v4 )
  {
    case 0:
      goto LABEL_12;
    case 1:
      v1 = 0;
      break;
    case 2:
    case 3:
LABEL_12:
      if ( v4 == (_BYTE *)-8LL )
        goto LABEL_8;
      break;
    case 4:
      if ( v4 == (_BYTE *)-8LL )
        goto LABEL_8;
      v1 = 2;
      break;
    case 5:
      if ( v4 == (_BYTE *)-8LL )
        goto LABEL_8;
      v1 = 3;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  if ( v2 == v1 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    do
    {
      Path::SegmentCollection::const_iterator::operator++(a1);
      v6 = *(_BYTE **)a1;
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
        return a1;
      if ( !*v6 )
        goto LABEL_24;
    }
    while ( *v6 == 1 );
    if ( *v6 != 2 && *v6 != 3 && (unsigned int)(unsigned __int8)*v6 - 4 > 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
LABEL_24:
    if ( v6 == (_BYTE *)-8LL )
    {
LABEL_8:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  return a1;
}
