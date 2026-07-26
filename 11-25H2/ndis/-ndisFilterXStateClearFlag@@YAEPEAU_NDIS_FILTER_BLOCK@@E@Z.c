/*
 * XREFs of ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x14008E320
 * Callers:
 *     ?ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400A6D6C (-ndisMRestoreFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1400580A0 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisFilterXStateClearFlag(struct _NDIS_FILTER_BLOCK *a1, char a2)
{
  unsigned __int8 v2; // dl
  bool v3; // zf

  v2 = ~a2;
  v3 = (v2 & a1->XState) == 0;
  a1->XState &= v2;
  if ( v3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        79,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)a1);
    return 1;
  }
  else
  {
    ndisUpdateFilterFakeStatus(a1);
    return 0;
  }
}
