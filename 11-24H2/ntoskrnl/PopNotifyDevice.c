/*
 * XREFs of PopNotifyDevice @ 0x140B6F748
 * Callers:
 *     PopWakeDeviceList @ 0x140427ABC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     PopLogNotifyDevice @ 0x140377AB4 (PopLogNotifyDevice.c)
 *     PopMapInternalActionToIrpAction @ 0x140495584 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x140496048 (PoFxActivateDeviceForSystemTransition.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CD8C8 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r10
  ULONG v7; // r15d
  int v8; // ebx
  _BYTE *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PIRP v14; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v16; // rax
  void *DeviceAttachmentBaseRefWithTag; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  PIRP v25; // [rsp+98h] [rbp+10h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(DWORD2(PopCurrentBroadcast), *(_DWORD *)(a1 + 4), v4);
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
    *v6 = 0LL;
  v8 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(*(_QWORD **)(a2 + 48), v5, *(_BYTE *)a1, 0, v8, 1, 0, 0LL, 0LL, &v25, &v24);
  v9 = (_BYTE *)v24;
  *(_QWORD *)(v24 + 216) = a2;
  if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline(
                        v11,
                        v10,
                        v12,
                        v13) )
    v9[224] = 0;
  v14 = v25;
  CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v8;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v16 = v14->Tail.Overlay.CurrentStackLocation;
  v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v16[-1].Context = v9;
  v16[-1].Control = -32;
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v14);
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u && v8 > 1 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline(
                         v19,
                         v18,
                         v20,
                         v21) )
    {
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, 0LL, v23);
    }
    else
    {
      LOBYTE(v22) = *(_BYTE *)a1 == 2;
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, v22, v23);
      v9[224] = 1;
    }
  }
  PopQueueQuerySetIrp(v14);
}
