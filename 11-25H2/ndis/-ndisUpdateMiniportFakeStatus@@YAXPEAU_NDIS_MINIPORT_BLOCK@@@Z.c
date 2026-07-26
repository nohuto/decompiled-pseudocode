/*
 * XREFs of ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055680
 * Callers:
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1400547B0 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140055480 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x140093210 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 */

void __fastcall ndisUpdateMiniportFakeStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char XState; // al
  int v2; // edx

  XState = a1->XState;
  v2 = -1073741823;
  if ( (XState & 4) != 0 )
  {
    v2 = -1071448017;
  }
  else if ( (XState & 2) != 0 )
  {
    v2 = -1071448033;
  }
  else if ( (XState & 1) != 0 )
  {
    v2 = -1073676275;
  }
  else if ( (XState & 8) != 0 )
  {
    v2 = -1073741285;
  }
  a1->FakeStatus = v2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      77,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      XState,
      v2);
}
