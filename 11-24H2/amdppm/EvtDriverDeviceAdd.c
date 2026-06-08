/*
 * XREFs of EvtDriverDeviceAdd @ 0x140041E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memset @ 0x14000E780 (memset.c)
 *     ProcLibDeviceCreate @ 0x14002EBE8 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // edx
  int v5; // ebx
  __int64 v6; // r9
  int v7; // r9d
  char *v8; // rdi
  int v9; // r8d
  __int64 v11; // [rsp+28h] [rbp-D8h]
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh]
  int *v14; // [rsp+48h] [rbp-B8h]
  GUID *v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+74h] [rbp-8Ch]
  char *v21; // [rsp+78h] [rbp-88h]
  void (*v22)(); // [rsp+80h] [rbp-80h]
  void (*v23)(); // [rsp+88h] [rbp-78h]
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v25)(__int64, int); // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+C8h] [rbp-38h]
  void *v30; // [rsp+D8h] [rbp-28h]
  _QWORD v31[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v32; // [rsp+1A8h] [rbp+A8h] BYREF
  char v33; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v34; // [rsp+1B8h] [rbp+B8h] BYREF

  v32 = a2;
  v20 = 0;
  v34 = 0LL;
  v16 = 0LL;
  LODWORD(v18) = 0;
  v13 = 0;
  v24 = 0LL;
  DWORD1(v26) = 0;
  memset(v31, 0, 0x90uLL);
  v31[5] = EvtDevicePrepareHardware;
  LODWORD(v31[0]) = 144;
  v31[6] = EvtDeviceReleaseHardware;
  v31[14] = EvtDeviceQueryStop;
  v31[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v31);
  v33 = 2;
  LOBYTE(v3) = 22;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v32,
         EvtDeviceSetPower,
         v3,
         &v33,
         1);
  if ( v5 >= 0 )
  {
    v33 = 20;
    LOBYTE(v6) = 27;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
           WdfDriverGlobals,
           v32,
           EvtDeviceWdmIrpPreprocessPnp,
           v6,
           &v33,
           1);
    if ( v5 >= 0 )
    {
      v30 = off_1400150A8;
      v27 = 0LL;
      v28 = 0x100000001LL;
      v26 = 0LL;
      LODWORD(v26) = 56;
      v29 = 0LL;
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
             WdfDriverGlobals,
             &v32,
             &v26,
             &v34);
      if ( v5 >= 0 )
      {
        v8 = (char *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v34,
                       off_1400150A8);
        v5 = ProcLibDeviceCreate(v8);
        if ( v5 >= 0 )
        {
          v20 = 0;
          v13 = 0;
          v16 = 0LL;
          v18 = 0LL;
          v17 = 0LL;
          v22 = AcpiCStateIdleComplete;
          v23 = AcpiCStateIdleComplete;
          v25 = ProcLibThermalNotification;
          v14 = &v19;
          v15 = &GUID_THERMAL_COOLING_INTERFACE;
          v24 = 0LL;
          v19 = 65592;
          v21 = v8;
          v12 = 48;
          v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 1824))(
                 WdfDriverGlobals,
                 v34,
                 &v12);
          if ( v5 >= 0 )
          {
            v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                   WdfDriverGlobals,
                   v34,
                   &GUID_DEVINTERFACE_THERMAL_COOLING,
                   0LL);
            if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v7 = 17;
              goto LABEL_19;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v7 = 16;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 15;
          v9 = 3;
LABEL_20:
          LODWORD(v11) = v5;
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            v9,
            v7,
            (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
            v11);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 14;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 13;
      goto LABEL_19;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 12;
LABEL_19:
    v9 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v5;
}
