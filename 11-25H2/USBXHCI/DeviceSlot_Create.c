/*
 * XREFs of DeviceSlot_Create @ 0x14007A7B4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     XilDeviceSlot_Create @ 0x140045BA0 (XilDeviceSlot_Create.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ebx
  int v8; // r9d
  _QWORD *v9; // rsi
  int v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+34h] [rbp-3Ch]
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  void *v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF

  v19 = 0LL;
  v13 = 0;
  v17 = 0LL;
  v12 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v11 = -1;
    else
      v11 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v11 = 56;
  }
  v14 = 1;
  v15 = 1;
  v18 = off_14006AF48;
  v16 = *(_QWORD *)(a2 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01033 + 1656))(
         WdfDriverGlobals,
         &v11,
         &v19);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v19,
                     off_14006AF48);
    *v9 = v19;
    v9[1] = a2;
    v5 = XilDeviceSlot_Create((__int64)v9);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v7;
      v8 = 11;
      goto LABEL_9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        v6,
        10,
        12,
        (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids,
        v19);
    }
    *a3 = v9;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 10;
LABEL_9:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v6, 10, v8, (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids, v5);
  }
  return v7;
}
