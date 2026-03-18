/*
 * XREFs of ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18012F41C
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x18012F2D0 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F500 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::IsValidSourceResource(const struct CResource *a1)
{
  bool (__fastcall *v2)(__int64, unsigned __int64); // rax
  char v3; // al
  char v4; // di

  v2 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)CLinearGradientBrush::IsOfType )
  {
    v3 = CLinearGradientBrush::IsOfType(a1, 22LL);
  }
  else if ( v2 == CColorBrush::IsOfType )
  {
    v3 = CColorBrush::IsOfType((__int64)a1, 0x16uLL);
  }
  else
  {
    v3 = v2((__int64)a1, 22uLL);
  }
  v4 = 0;
  if ( v3
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 167LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 72LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 56LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 112LL) )
  {
    return 1;
  }
  return v4;
}
