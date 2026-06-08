/*
 * XREFs of ProcLibDeviceCreate @ 0x14002D9E8
 * Callers:
 *     EvtDriverDeviceAdd @ 0x140040BE0 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memset @ 0x14000DAC0 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  __int64 v2; // rsi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // edi
  int v6; // r9d
  __int128 v8; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-39h]
  __int64 v10; // [rsp+50h] [rbp-31h]
  __int128 v11; // [rsp+58h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-19h]
  _QWORD v13[12]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v14; // [rsp+E8h] [rbp+67h] BYREF

  v14 = 0LL;
  DeferredContext[77] = 0;
  DWORD1(v8) = 0;
  *((_DWORD *)DeferredContext + 184) = 100;
  *((_DWORD *)DeferredContext + 185) = 100;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         DeferredContext);
  v9 = 0LL;
  v12 = 0LL;
  v8 = 0LL;
  LODWORD(v8) = 56;
  v10 = 0x100000001LL;
  v11 = (unsigned __int64)v2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         &v8,
         DeferredContext + 208);
  v5 = v3;
  if ( v3 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 776), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 840), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 928), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 992), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
    if ( _bittest64(&Globals, 0x2Fu) )
    {
      memset(v13, 0, sizeof(v13));
      v13[0] = 0x100000060LL;
      v13[5] = EmiProcessIoctl;
      LODWORD(v13[1]) = 2;
      BYTE5(v13[1]) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                + 1216))(
             WdfDriverGlobals,
             v2,
             v13,
             0LL,
             &v14);
      v5 = v3;
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 31;
        goto LABEL_8;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 30;
LABEL_8:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      4,
      v6,
      (__int64)&WPP_4e1b20cf9f023c365f1b3d32753808d1_Traceguids,
      v3);
  }
  return v5;
}
