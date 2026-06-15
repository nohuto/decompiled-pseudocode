/*
 * XREFs of ?DrainPendingRequests@BluetoothVolumeAndMute@BluetoothControls@@AEAAJXZ @ 0x1800D33BC
 * Callers:
 *     wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::operator() @ 0x1800D28B0 (wistd--__function--__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyUpdatePlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEBUUpdatePlan@12@@Z @ 0x1800D2AEC (-ApplyUpdatePlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEBUUpdatePlan@12@@Z.c)
 *     ?BuildPlanFromHardwareState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEAUUpdatePlan@12@@Z @ 0x1800D2C94 (-BuildPlanFromHardwareState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJAEAUUpdatePlan@12@@Z.c)
 *     ?NotifyProvider@BluetoothVolumeAndMute@BluetoothControls@@AEAAXKPEBU_GUID@@@Z @ 0x1800D59FC (-NotifyProvider@BluetoothVolumeAndMute@BluetoothControls@@AEAAXKPEBU_GUID@@@Z.c)
 *     ?TryTakePendingReconcileState@BluetoothVolumeAndMute@BluetoothControls@@AEAA?AV?$optional@UPendingReconcileState@BluetoothVolumeAndMute@BluetoothControls@@@std@@XZ @ 0x1800D84FC (-TryTakePendingReconcileState@BluetoothVolumeAndMute@BluetoothControls@@AEAA-AV-$optional@UPendi.c)
 *     ?UpdateCachedStateFromPlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAXAEBUUpdatePlan@12@@Z @ 0x1800D8628 (-UpdateCachedStateFromPlan@BluetoothVolumeAndMute@BluetoothControls@@AEAAXAEBUUpdatePlan@12@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolumeAndMute::DrainPendingRequests(RTL_SRWLOCK *this)
{
  int v2; // eax
  int updated; // eax
  unsigned int v4; // edx
  const struct _GUID *v5; // r8
  __int128 v7; // [rsp+20h] [rbp-49h] BYREF
  int v8; // [rsp+30h] [rbp-39h]
  char v9; // [rsp+34h] [rbp-35h]
  __int128 v10; // [rsp+38h] [rbp-31h]
  int v11; // [rsp+48h] [rbp-21h]
  char v12; // [rsp+4Ch] [rbp-1Dh]
  char v13; // [rsp+58h] [rbp-11h]
  __int128 v14; // [rsp+60h] [rbp-9h] BYREF
  int v15; // [rsp+70h] [rbp+7h]
  char v16; // [rsp+74h] [rbp+Bh]
  __int128 v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+88h] [rbp+1Fh]
  char v19; // [rsp+8Ch] [rbp+23h]
  char v20; // [rsp+90h] [rbp+27h]
  char v21; // [rsp+94h] [rbp+2Bh] BYREF
  unsigned int v22; // [rsp+A4h] [rbp+3Bh]
  char v23; // [rsp+A8h] [rbp+3Fh]
  char v24; // [rsp+B0h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  BluetoothControls::BluetoothVolumeAndMute::TryTakePendingReconcileState(this, &v14);
  while ( v24 )
  {
    v9 = 0;
    v12 = 0;
    v13 = 0;
    if ( v20 )
    {
      v2 = BluetoothControls::BluetoothVolumeAndMute::BuildPlanFromHardwareState(
             this,
             (struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *)&v7);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1834LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v2);
    }
    if ( v16 )
    {
      v7 = v14;
      v8 = v15;
      if ( !v9 )
        v9 = 1;
    }
    else if ( !v19 )
    {
      goto LABEL_13;
    }
    if ( v19 )
    {
      v11 = v18;
      v10 = v17;
      if ( !v12 )
        v12 = 1;
    }
LABEL_13:
    BluetoothControls::BluetoothVolumeAndMute::UpdateCachedStateFromPlan(
      (BluetoothControls::BluetoothVolumeAndMute *)this,
      (const struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *)&v7);
    updated = BluetoothControls::BluetoothVolumeAndMute::ApplyUpdatePlan(
                (BluetoothControls::BluetoothVolumeAndMute *)this,
                (const struct BluetoothControls::BluetoothVolumeAndMute::UpdatePlan *)&v7);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1845LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)updated);
    if ( v9 || v12 )
    {
      v5 = &stru_180195AF0;
      v4 = 0;
    }
    else
    {
      if ( !v23 )
        goto LABEL_21;
      v4 = v22;
      v5 = (const struct _GUID *)&v21;
    }
    BluetoothControls::BluetoothVolumeAndMute::NotifyProvider((BluetoothControls::BluetoothVolumeAndMute *)this, v4, v5);
LABEL_21:
    BluetoothControls::BluetoothVolumeAndMute::TryTakePendingReconcileState(this, &v14);
  }
  return 0LL;
}
