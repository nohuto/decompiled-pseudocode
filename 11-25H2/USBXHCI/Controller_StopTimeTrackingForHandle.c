/*
 * XREFs of Controller_StopTimeTrackingForHandle @ 0x1400425C4
 * Callers:
 *     Controller_EvtDeviceFileClose @ 0x1400320A0 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140043890 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x140032778 (Controller_IsHandlePresentInCollectionLocked.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1400445B4 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_StopTimeTrackingForHandle(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v5; // r15
  char v6; // si
  __int64 v7; // rbp
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  int Ulong; // eax
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v5 = (_BYTE *)(a1 + 1072);
  v6 = 0;
  v7 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1080));
  if ( Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 1096), a2) )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           a2,
           off_14006B218);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 128))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 1096),
      a2);
    *(_BYTE *)(v7 + 48) = 0;
    if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 112))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 1096)) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _BYTE *))(WdfFunctions_01033 + 1144))(
        WdfDriverGlobals,
        **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
        Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
        v5);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = *(unsigned int **)(v9 + 32);
      Ulong = XilRegister_ReadUlong(v9, v10);
      XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v10, Ulong & 0xFFFFFBFF);
      *v5 = 0;
    }
    v12 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        0x13Eu,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        a2,
        *(_QWORD *)(a1 + 1096));
    v12 = -1073741811;
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 1080));
  if ( v7 )
  {
    v6 = *(_BYTE *)(v7 + 60);
    v14 = *(_DWORD *)(v7 + 52);
    v15 = *(_DWORD *)(v7 + 56);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  ++*(_DWORD *)(a1 + 1228);
  *(_DWORD *)(a1 + 1232) += v14;
  *(_DWORD *)(a1 + 1236) += v15;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x10) != 0 )
    McTemplateK0pptqqqq_EtwWriteTransfer(v6, v13, v14, *(_QWORD *)(a1 + 8), a2, a3, v6, v12, v14, v15);
  return v12;
}
