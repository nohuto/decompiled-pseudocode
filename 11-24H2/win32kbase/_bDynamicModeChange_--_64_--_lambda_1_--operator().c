/*
 * XREFs of _bDynamicModeChange_::_64_::_lambda_1_::operator() @ 0x140113C78
 * Callers:
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 * Callees:
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C5D14 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

char __fastcall bDynamicModeChange_::_64_::_lambda_1_::operator()(
        _BYTE **a1,
        __int64 a2,
        __int64 a3,
        struct PDEV **a4,
        struct PDEV **a5)
{
  if ( *(struct PDEV **)(a2 + 48) != *a4 )
    return 0;
  if ( (*(_DWORD *)(a2 + 116) & 1) != 0 || (*(_DWORD *)(a2 + 112) & 0x300000) == 0x200000 )
    *(_QWORD *)(a2 + 48) = *a5;
  if ( (*(_DWORD *)(a2 + 112) & 0x4000000) != 0 && **a1 && *(_DWORD *)(a2 + 96) == *(_DWORD *)(a3 + 96) )
    vDynamicSwitchPalettes((struct SURFACE *)a2, *a4, *a5);
  return 1;
}
