/*
 * XREFs of ?SetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008761C
 * Callers:
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     <none>
 */

bool __fastcall DISPLAY_MUX_MGR::SetInternalPanelInfo(
        DISPLAY_MUX_MGR *this,
        struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *a2)
{
  bool result; // al
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  char *v6; // rdx

  if ( *((_BYTE *)this + 148) )
    return 0;
  v4 = (_OWORD *)((char *)this + 149);
  result = 1;
  *v4 = *(_OWORD *)a2;
  v4[1] = *((_OWORD *)a2 + 1);
  v4[2] = *((_OWORD *)a2 + 2);
  v4[3] = *((_OWORD *)a2 + 3);
  v4[4] = *((_OWORD *)a2 + 4);
  v4[5] = *((_OWORD *)a2 + 5);
  v4[6] = *((_OWORD *)a2 + 6);
  v4 += 8;
  v5 = *((_OWORD *)a2 + 7);
  v6 = (char *)a2 + 128;
  *(v4 - 1) = v5;
  *v4 = *(_OWORD *)v6;
  v4[1] = *((_OWORD *)v6 + 1);
  v4[2] = *((_OWORD *)v6 + 2);
  v4[3] = *((_OWORD *)v6 + 3);
  v4[4] = *((_OWORD *)v6 + 4);
  *((_BYTE *)v4 + 80) = v6[80];
  *((_BYTE *)this + 148) = 1;
  return result;
}
