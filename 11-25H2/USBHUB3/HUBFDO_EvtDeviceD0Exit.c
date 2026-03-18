/*
 * XREFs of HUBFDO_EvtDeviceD0Exit @ 0x14000D8B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F664 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140044FCC (SleepstudyHelper_ComponentInactive.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  void *v13; // rbx
  __int64 v14; // rcx
  int v15; // edx

  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C198);
  v7 = v6;
  *(_DWORD *)(v6 + 2608) = a2;
  _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v8 = v6 + 2284;
    v4 = EtwActivityIdControl(3u, (LPGUID)(v6 + 2284));
    if ( v4 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v7 + 824), v8);
      v5 = 1;
    }
  }
  if ( *(_QWORD *)(v7 + 2624) )
    SleepstudyHelper_ComponentInactive();
  if ( *(_QWORD *)(v7 + 2632) )
    SleepstudyHelper_ComponentInactive();
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v10 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v11 = *(_DWORD *)(v7 + 40) >> 10;
    LOWORD(v11) = (*(_DWORD *)(v7 + 40) & 0x400) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v11,
      (unsigned int)&USBHUB3_ETW_EVENT_HUB_D0_EXIT_START,
      v7 + 2284,
      *(_QWORD *)(v7 + 248),
      a2,
      v9,
      (*(_DWORD *)(v7 + 40) & 0x400) != 0);
  }
  if ( !v10 )
  {
    v13 = (void *)(v7 + 1160);
    KeResetEvent((PRKEVENT)(v7 + 1160));
    v14 = v7 + 1272;
    v15 = 2019;
    if ( a2 == 5 )
    {
LABEL_20:
      HUBSM_AddEvent(v14, v15);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v7);
      HUBMISC_WaitForSignal(v13);
      v4 = *(_DWORD *)(v7 + 1184);
      goto LABEL_21;
    }
LABEL_19:
    v15 = 2015;
    goto LABEL_20;
  }
  if ( v10 == 2 || v10 == 3 || v10 == 4 || (v12 = v10 - 5, (unsigned int)(v10 - 5) <= 1) )
  {
    v13 = (void *)(v7 + 1160);
    KeResetEvent((PRKEVENT)(v7 + 1160));
    v14 = v7 + 1272;
    goto LABEL_19;
  }
LABEL_21:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      v12,
      (unsigned int)&USBHUB3_ETW_EVENT_HUB_D0_EXIT_COMPLETE,
      v7 + 2284,
      *(_QWORD *)(v7 + 248),
      v4,
      v10);
  if ( v5 == 1 )
    *(_OWORD *)(v7 + 2284) = 0LL;
  return (unsigned int)v4;
}
