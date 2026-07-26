/*
 * XREFs of ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1400B3B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140080F80 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B5B98 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     PdcTaskClientRequest @ 0x14014E6F4 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  unsigned int v3; // edx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      132,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1);
  if ( !_InterlockedCompareExchange(&v1->PdcTaskClientMode, 1, 0) )
  {
    if ( (int)PdcTaskClientRequest(v1->PdcHandle) < 0 )
    {
      _InterlockedExchange(&v1->PdcTaskClientMode, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          11,
          133,
          (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
          (char)v1);
    }
    else
    {
      ndisPowerSaveStop(v1, 0xCu);
      ndisSetPdcTaskClientExpiryTimer(v1, v3);
    }
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0x12u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      134,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1);
}
