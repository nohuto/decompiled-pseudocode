/*
 * XREFs of ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18007D534
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180128740 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1801F7414 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007DEF0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::IsValidMaskResource(const struct CResource *a1)
{
  __int64 (__fastcall *v2)(const struct CResource *, __int64); // rax
  char v3; // al
  char v4; // di
  __int64 (__fastcall *v6)(const struct CResource *, __int64); // rax
  __int64 (__fastcall *v8)(const struct CResource *, __int64); // rax

  v2 = *(__int64 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)CSurfaceBrush::IsOfType )
  {
    v3 = CSurfaceBrush::IsOfType(a1, 167LL);
  }
  else if ( (char *)v2 == (char *)CNineGridBrush::IsOfType )
  {
    v3 = CNineGridBrush::IsOfType(a1, 167LL);
  }
  else
  {
    v3 = v2(a1, 167LL);
  }
  v4 = 0;
  if ( v3 )
    return 1;
  v6 = *(__int64 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v6 == (char *)CNineGridBrush::IsOfType
     ? CNineGridBrush::IsOfType(a1, 72LL)
     : (unsigned __int8)v6(a1, 72LL) )
  {
    return 1;
  }
  v8 = *(__int64 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v8 == (char *)CNineGridBrush::IsOfType
     ? CNineGridBrush::IsOfType(a1, 112LL)
     : (unsigned __int8)v8(a1, 112LL) )
  {
    return 1;
  }
  return v4;
}
