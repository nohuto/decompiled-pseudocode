/*
 * XREFs of PopNotifyDevice @ 0x140B717B8
 * Callers:
 *     PopWakeDeviceList @ 0x14041BC4C (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopLogNotifyDevice @ 0x1403A8724 (PopLogNotifyDevice.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     PopMapInternalActionToIrpAction @ 0x14048FE44 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1404909D8 (PoFxActivateDeviceForSystemTransition.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CB038 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r10
  ULONG v7; // r15d
  int v8; // ebx
  _BYTE *v9; // r14
  PIRP v10; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v12; // rax
  void *DeviceAttachmentBaseRefWithTag; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  PIRP v17; // [rsp+98h] [rbp+10h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(DWORD2(PopCurrentBroadcast), *(_DWORD *)(a1 + 4), v4);
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
    *v6 = 0LL;
  v8 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(*(_QWORD **)(a2 + 48), v5, *(_BYTE *)a1, 0, v8, 1, 0, 0LL, 0LL, &v17, &v16);
  v9 = (_BYTE *)v16;
  *(_QWORD *)(v16 + 216) = a2;
  if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    v9[224] = 0;
  v10 = v17;
  CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v8;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v12 = v10->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v12[-1].Context = v9;
  v12[-1].Control = -32;
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v10);
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u && v8 > 1 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
    {
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, 0LL, v15);
    }
    else
    {
      LOBYTE(v14) = *(_BYTE *)a1 == 2;
      PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, v14, v15);
      v9[224] = 1;
    }
  }
  PopQueueQuerySetIrp(v10);
}
