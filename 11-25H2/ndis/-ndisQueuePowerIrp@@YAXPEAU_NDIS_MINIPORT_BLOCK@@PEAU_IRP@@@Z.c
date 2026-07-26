/*
 * XREFs of ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140055810
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400558D0 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140016490 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qs @ 0x1400B12FC (WPP_RECORDER_SF_qs_ea_1400B12FC.c)
 */

void __fastcall ndisQueuePowerIrp(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  const char *v6; // rdx
  __int64 v7; // rax
  struct _WORK_QUEUE_ITEM *v8; // rdi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v6 = "QUERY";
    WPP_RECORDER_SF_qs(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v6, a3, 146);
  }
  v7 = 4304LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 1 )
    v7 = 4336LL;
  v8 = (struct _WORK_QUEUE_ITEM *)(&a1->Header.Type + v7);
  *(void **)((char *)&a1->MiniportAdapterContext + v7) = a2;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  ndisReferenceMiniportNoCheck(a1, 0xDu);
  ExQueueWorkItem(v8, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
