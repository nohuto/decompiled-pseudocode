/*
 * XREFs of _DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082198
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084288 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 * Callees:
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x1400877FC (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_3df126e43ef527cc1a2970c1b44a89a0____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  DISPLAY_MUX_SWTICH_DDI_TRACKING *v2; // rcx
  _OWORD *v3; // rcx
  _OWORD *v4; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = *(DISPLAY_MUX_SWTICH_DDI_TRACKING **)a1;
    if ( *((_DWORD *)v2 + 37) != 1 )
      DISPLAY_MUX_SWTICH_DDI_TRACKING::SwitchCanceled(v2, 1);
    v3 = (_OWORD *)(*(_QWORD *)a1 + 148LL);
    v4 = **(_OWORD ***)(a1 + 8);
    result = 128LL;
    *v4 = *v3;
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    v4[4] = v3[4];
    v4[5] = v3[5];
    v4[6] = v3[6];
    v4[7] = v3[7];
    v4[8] = v3[8];
    v4[9] = v3[9];
  }
  return result;
}
