/*
 * XREFs of Controller_D0EntryRestoreState @ 0x14003634C
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Controller_InitializeDeviceNotificationRegister @ 0x14001BA00 (Controller_InitializeDeviceNotificationRegister.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_I @ 0x14002E390 (WPP_RECORDER_SF_I.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002F834 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400303B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     Controller_LogRestoreTimeout @ 0x140041388 (Controller_LogRestoreTimeout.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  unsigned int *v6; // r14
  unsigned int *v7; // rbp
  __int16 Ulong; // ax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 *v12; // r15
  ULONGLONG UnbiasedInterruptTime; // rsi
  int v14; // eax
  int v15; // edx
  int v16; // edi
  __int16 i; // ax
  unsigned __int64 v18; // rcx
  ULONGLONG v19; // rax
  int v20; // r8d
  unsigned __int64 v21; // rdx
  int v22; // edi
  ULONGLONG v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      4260);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 113, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, a3, *(_QWORD *)(a1 + 8));
  v4 = (__int64 *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(unsigned int **)(v5 + 32);
  v7 = v6 + 1;
  Ulong = XilRegister_ReadUlong(v5, v6 + 1);
  if ( (Ulong & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_34:
      v22 = -1073741630;
      goto LABEL_35;
    }
    v11 = 114;
LABEL_11:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2, 4, v11, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    goto LABEL_34;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v11 = 115;
    goto LABEL_11;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v11 = 116;
    goto LABEL_11;
  }
  Controller_InitializeDeviceNotificationRegister(a1);
  v12 = (__int64 *)(a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 117, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    v12 = (__int64 *)(a1 + 88);
  }
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v14 = XilRegister_ReadUlong(*v4, v6);
  XilRegister_WriteUlong(*v4, v6, v14 | 0x200);
  if ( (*(_QWORD *)(a1 + 744) & 0x40000000LL) != 0 )
  {
    v16 = 500;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v15,
        4,
        118,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        100);
    }
  }
  else
  {
    v16 = 20;
  }
  for ( i = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6 + 1); ; i = XilRegister_ReadUlong(*v12, v7) )
  {
    if ( (i & 0x400) != 0 )
    {
      v19 = KeQueryUnbiasedInterruptTime();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = (v19 - UnbiasedInterruptTime) / 0x2710;
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v21, v20, 119, v26, (v19 - UnbiasedInterruptTime) / 0x2710);
      }
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024);
      goto LABEL_34;
    }
    if ( (i & 0x200) == 0 )
      break;
    if ( !v16 )
    {
      v18 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
LABEL_40:
      Controller_LogRestoreTimeout(a1, v18 / 0x2710);
      goto LABEL_34;
    }
    if ( (*(_QWORD *)(a1 + 744) & 0x40000000LL) != 0 )
    {
      v18 = KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime;
      if ( v18 >= 0xF4240 )
        goto LABEL_40;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    --v16;
  }
  v24 = KeQueryUnbiasedInterruptTime();
  v9 = v24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = (v24 - UnbiasedInterruptTime) / 0xA;
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v25, v10, 120, v26, (v24 - UnbiasedInterruptTime) / 0xA);
  }
  v22 = 0;
LABEL_35:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v26) = v22;
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE,
      v10,
      *(_QWORD *)(a1 + 8),
      v26);
  }
  if ( v22 < 0 )
  {
    ++*(_DWORD *)(a1 + 880);
    ++*(_DWORD *)(a1 + 924);
    *(_BYTE *)(a1 + 872) = 1;
  }
  return (unsigned int)v22;
}
