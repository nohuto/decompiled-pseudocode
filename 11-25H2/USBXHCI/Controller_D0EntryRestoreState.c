/*
 * XREFs of Controller_D0EntryRestoreState @ 0x140037BF8
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x14000B830 (Controller_InitializeDeviceNotificationRegister.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_I @ 0x14002F040 (WPP_RECORDER_SF_I.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14003081C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140031204 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int *v5; // rsi
  unsigned int *v6; // rbx
  __int16 Ulong; // ax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v12; // eax
  int i; // esi
  __int16 v14; // ax
  ULONGLONG v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rdx
  int v18; // ebx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4148);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 112, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(unsigned int **)(v4 + 32);
  v6 = v5 + 1;
  Ulong = XilRegister_ReadUlong(v4, v5 + 1);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_28:
      v18 = -1073741630;
      goto LABEL_29;
    }
    v10 = 113;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v10, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    goto LABEL_28;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v10 = 114;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v10 = 115;
    goto LABEL_11;
  }
  Controller_InitializeDeviceNotificationRegister(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 116, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v12 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v12 | 0x200);
  for ( i = 20; ; --i )
  {
    v14 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
    if ( (v14 & 0x400) != 0 )
    {
      v15 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = (v15 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v17, v16, 117, v24, (v15 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, 1024);
      goto LABEL_28;
    }
    if ( (v14 & 0x200) == 0 )
      break;
    if ( !i )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      v8 = v20;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (v20 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v9, 119, v24, (v20 - UnbiasedInterruptTime) / 0x2710);
      }
      goto LABEL_28;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v8 = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (v22 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v9, 118, v24, (v22 - UnbiasedInterruptTime) / 0xA);
  }
  v18 = 0;
LABEL_29:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v24) = v18;
    McTemplateK0pq_EtwWriteTransfer(
      v8,
      &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE,
      v9,
      *(_QWORD *)(a1 + 8),
      v24);
  }
  if ( v18 < 0 )
  {
    ++*(_DWORD *)(a1 + 880);
    ++*(_DWORD *)(a1 + 924);
    *(_BYTE *)(a1 + 872) = 1;
  }
  return (unsigned int)v18;
}
