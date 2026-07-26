/*
 * XREFs of ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1400BB8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400BD928 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     PdcTaskClientRequest @ 0x1401593C4 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  unsigned int v3; // edx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      132,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v1);
  if ( !_InterlockedCompareExchange(&v1->PdcTaskClientMode, 1, 0) )
  {
    if ( (int)PdcTaskClientRequest(v1->PdcHandle) < 0 )
    {
      _InterlockedExchange(&v1->PdcTaskClientMode, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          11,
          133,
          (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      134,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)v1);
}
