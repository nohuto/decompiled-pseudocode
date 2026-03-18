/*
 * XREFs of UsbhPdoSetDx @ 0x14001F800
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhCompletePdoIdleIrp @ 0x14001D8AC (UsbhCompletePdoIdleIrp.c)
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x14001E4FC (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhSetPdoIdleReady @ 0x14001E578 (UsbhSetPdoIdleReady.c)
 *     GET_FDO_POWER_STATE @ 0x14002120C (GET_FDO_POWER_STATE.c)
 *     UsbhCompletePdoWakeIrp @ 0x14002123C (UsbhCompletePdoWakeIrp.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x14003478C (UsbhSetPdoPowerState.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoSetDx(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rsi
  _DWORD *v8; // r14
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  _DWORD *v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rbx
  KIRQL v21; // dl
  unsigned int v22; // ebx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  _DWORD *v26; // rbx
  KIRQL v27; // dl
  int v29; // edx
  int v30; // edx
  char v31; // [rsp+70h] [rbp+8h]
  int v32; // [rsp+80h] [rbp+18h]
  int v33; // [rsp+88h] [rbp+20h]

  v6 = PdoExt(a2);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  FdoExt(v7);
  v9 = *(_QWORD *)(a3 + 184);
  v10 = *(_DWORD *)(v9 + 24);
  v32 = v10;
  v33 = *(_DWORD *)(v9 + 8);
  FdoExt(*(_QWORD *)(a1 + 8));
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( v7 )
    {
      v11 = *(_QWORD *)(v7 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 2017739856;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a3;
        *(_QWORD *)(v12 + 24) = a2;
      }
    }
  }
  v8[355] &= ~0x2000000u;
  v13 = GET_FDO_POWER_STATE(a1);
  if ( v13 <= 206 )
  {
    if ( v13 == 206 )
      goto LABEL_24;
    v15 = v13 - 201;
    if ( !v15 )
    {
      v17 = PdoExt(a2)[282];
      switch ( v17 )
      {
        case 1:
          v18 = PdoExt(a2);
          FdoExt(*(_QWORD *)(a1 + 8));
          v19 = ((unsigned __int8)v18[2] + 1) & 7;
          v18[2] = v19;
          v19 *= 32LL;
          v31 = v32 == 4;
          *(_DWORD *)((char *)v18 + v19 + 272) = 4;
          *(_DWORD *)((char *)v18 + v19 + 276) = v18[282];
          *(_DWORD *)((char *)v18 + v19 + 280) = 4;
          v18[282] = 4;
          v20 = FdoExt(v7);
          FdoExt(*(_QWORD *)(a1 + 8));
          *(_DWORD *)(a1 + 32) = 1734964085;
          v21 = *((_BYTE *)v20 + 5064);
          *((_QWORD *)v20 + 168) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v20 + 632, v21);
          UsbhPdoAbortAllDevicePipes(v7, a2);
          v22 = 0;
          if ( !v8[700] || (v33 & 0xF000) != 0x5000 )
            UsbhSyncSuspendPdoPort(a1, a2, v31);
          v8[596] = v32 != 4;
LABEL_12:
          UsbhSetPdoIdleReady(v7, a2, a3);
          if ( !v31 )
            return v22;
          goto LABEL_13;
        case 2:
        case 3:
          goto LABEL_33;
        case 4:
        case 5:
          v8[596] = v10 != 4;
          UsbhSetPdoPowerState(a1, a2, v16, v17, 4);
          UsbhReleaseFdoPwrLock(v7, a1);
          v22 = 0;
          v31 = v32 == 4;
          goto LABEL_12;
        case 6:
LABEL_33:
          UsbhSetPdoPowerState(a1, a2, v16, v17, 5);
          break;
      }
      UsbhReleaseFdoPwrLock(v7, a1);
      v22 = -1073741101;
LABEL_13:
      UsbhCompletePdoWakeIrp(v7, *((_QWORD *)v8 + 105), 3221226195LL);
      if ( (v8[355] & 0x100000) == 0 )
        UsbhCompletePdoIdleIrp(v7, *((_QWORD *)v8 + 105), -1073741101);
      return v22;
    }
    v29 = v15 - 1;
    if ( !v29 )
      goto LABEL_24;
    v30 = v29 - 1;
    if ( !v30 )
      goto LABEL_24;
    v25 = v30 - 1;
    if ( !v25 )
      goto LABEL_24;
    goto LABEL_18;
  }
  v23 = v13 - 209;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
LABEL_18:
        if ( v25 != 1 )
        {
          v26 = FdoExt(v7);
          FdoExt(*(_QWORD *)(a1 + 8));
          *(_DWORD *)(a1 + 32) = 1734964085;
          v27 = *((_BYTE *)v26 + 5064);
          *((_QWORD *)v26 + 168) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)v26 + 632, v27);
          return (unsigned int)-1073741823;
        }
LABEL_24:
        v22 = -1073741101;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            19,
            (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
            *((_WORD *)v8 + 714));
        UsbhSetPdoPowerState(a1, a2, v14, 4, 5);
        UsbhReleaseFdoPwrLock(v7, a1);
        return v22;
      }
    }
  }
  UsbhSetPdoPowerState(a1, a2, v14, 5, 4);
  Log(v7, 16, 1349862520, a3, a2);
  UsbhReleaseFdoPwrLock(v7, a1);
  v22 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
      *((_WORD *)v8 + 714));
  return v22;
}
