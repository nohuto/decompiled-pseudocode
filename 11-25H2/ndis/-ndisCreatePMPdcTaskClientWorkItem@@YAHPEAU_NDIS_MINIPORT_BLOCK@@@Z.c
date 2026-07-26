/*
 * XREFs of ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA48C
 * Callers:
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1400788A0 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 Pool2; // rax
  int v3; // edx
  struct _WORK_QUEUE_ITEM *v4; // rbx

  Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
  v4 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = a1;
    if ( (unsigned __int8)ndisReferenceMiniport(a1, 0x12u) )
    {
      v4->List.Flink = 0LL;
      v4->WorkerRoutine = ndisPMPDCTaskClient;
      v4->Parameter = v4;
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        14,
        135,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids);
    }
    return 3221225626LL;
  }
}
