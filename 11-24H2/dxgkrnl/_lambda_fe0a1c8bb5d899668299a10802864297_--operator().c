/*
 * XREFs of _lambda_fe0a1c8bb5d899668299a10802864297_::operator() @ 0x140267B2C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140064720 (_DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403461E0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140050C6C (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268188 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

void __fastcall lambda_fe0a1c8bb5d899668299a10802864297_::operator()(__int64 a1)
{
  int *v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r10
  int *v4; // r9

  v1 = *(int **)a1;
  if ( **(int **)a1 < 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(v2 + 84) = *(_DWORD *)v2 | *(_DWORD *)(v2 + 4);
    FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v2, *v1);
    v4 = *(int **)v3;
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 12LL) = **(_DWORD **)(v3 + 8);
    CCD_TOPOLOGY::MarkPathsApplyFailure(
      *(CCD_TOPOLOGY **)(v3 + 16),
      (const struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 64LL) + 48LL)
                           + 340LL * **(unsigned int **)(v3 + 24)),
      0xFFFFFFFF,
      *v4);
  }
}
