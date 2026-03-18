/*
 * XREFs of ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z @ 0x180132148
 * Callers:
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1801313D4 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETSOURCE.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CNineGridBrush::IsValidSourceResource(const struct CResource *a1)
{
  bool (__fastcall *v2)(__int64, int); // rax
  bool v3; // al
  char v4; // bl
  bool (__fastcall *v5)(__int64, int); // rax
  bool v6; // al

  v2 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 64LL);
  if ( v2 == CSurfaceBrush::IsOfType )
    v3 = CSurfaceBrush::IsOfType((__int64)a1, 22);
  else
    v3 = v2((__int64)a1, 22);
  v4 = 0;
  if ( v3 )
    return 1;
  v5 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 64LL);
  v6 = v5 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType((__int64)a1, 167) : v5((__int64)a1, 167);
  if ( v6
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 72LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 56LL) )
  {
    return 1;
  }
  return v4;
}
