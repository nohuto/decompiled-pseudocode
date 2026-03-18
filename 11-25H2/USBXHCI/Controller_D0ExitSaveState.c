/*
 * XREFs of Controller_D0ExitSaveState @ 0x140037EF8
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_I @ 0x14002F040 (WPP_RECORDER_SF_I.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14003081C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140031204 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int *v6; // r14
  unsigned int *v7; // rsi
  __int16 Ulong; // ax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v13; // eax
  int i; // r14d
  __int16 v15; // ax
  ULONGLONG v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  ULONGLONG v20; // rax
  unsigned __int64 v21; // rdx
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4649);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 128, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned int **)(v5 + 32);
  v7 = v6 + 1;
  Ulong = XilRegister_ReadUlong(v5, v6 + 1);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_28:
      v3 = -1073741630;
      goto LABEL_29;
    }
    v11 = 129;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v11, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    goto LABEL_28;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v11 = 130;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v11 = 131;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 132, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v13 | 0x100);
  for ( i = 20; ; --i )
  {
    v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    if ( (v15 & 0x400) != 0 )
    {
      v16 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = (v16 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v18, v17, 133, v24, (v16 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024);
      goto LABEL_28;
    }
    if ( (v15 & 0x100) == 0 )
      break;
    if ( !i )
    {
      v20 = KeQueryUnbiasedInterruptTime();
      v9 = v20;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (v20 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v10, 135, v24, (v20 - UnbiasedInterruptTime) / 0x2710);
      }
      goto LABEL_28;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v9 = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = (v22 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v10, 134, v24, (v22 - UnbiasedInterruptTime) / 0xA);
  }
LABEL_29:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v24) = v3;
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v10,
      *(_QWORD *)(a1 + 8),
      v24);
  }
  return v3;
}
