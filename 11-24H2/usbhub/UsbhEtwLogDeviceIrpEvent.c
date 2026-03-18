/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x14001C918
 * Callers:
 *     UsbhPdoPower_WaitWake @ 0x14001C2A0 (UsbhPdoPower_WaitWake.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001C40C (UsbhIdleIrp_NoIrp.c)
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x14001F3A0 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhCompletePdoWakeIrp @ 0x14002123C (UsbhCompletePdoWakeIrp.c)
 *     UsbhFdoResetPdoPort @ 0x14003FC5C (UsbhFdoResetPdoPort.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x14004AD00 (UsbhCompleteCanceledPdoWakeIrp.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4)
{
  _DWORD *v7; // rax
  int ActivityIdIrp; // eax
  const GUID *v9; // rdx
  int v10; // [rsp+50h] [rbp-29h] BYREF
  int v11; // [rsp+58h] [rbp-21h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp-1Dh]
  __int16 v13; // [rsp+5Eh] [rbp-1Bh]
  __int16 v14; // [rsp+60h] [rbp-19h]
  __int16 v15; // [rsp+62h] [rbp-17h]
  __int64 v16; // [rsp+68h] [rbp-11h] BYREF
  __int16 v17; // [rsp+70h] [rbp-9h]
  __int16 v18; // [rsp+72h] [rbp-7h]
  int v19; // [rsp+74h] [rbp-5h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+84h] [rbp+Bh]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int v26; // [rsp+90h] [rbp+17h]
  __int128 v27; // [rsp+98h] [rbp+1Fh] BYREF

  v10 = a4;
  v27 = 0LL;
  if ( dword_14006F6D0 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1184));
    v11 = v7[1298];
    v12 = *((_WORD *)v7 + 2598);
    v13 = v7[1300];
    v14 = *((_WORD *)v7 + 2614);
    v15 = *((_WORD *)v7 + 2615);
    v16 = *(_QWORD *)(a1 + 1160);
    v17 = *(_WORD *)(a1 + 1408);
    v18 = *(_WORD *)(a1 + 1410);
    v19 = *(_DWORD *)(a1 + 2688);
    v20 = *(_DWORD *)(a1 + 2692);
    v21 = *(_DWORD *)(a1 + 2696);
    v22 = *(_DWORD *)(a1 + 2700);
    v23 = *(_DWORD *)(a1 + 2704);
    v24 = *(_DWORD *)(a1 + 2708);
    v25 = *(_DWORD *)(a1 + 2712);
    v26 = *(_DWORD *)(a1 + 1168);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v27);
    else
      ActivityIdIrp = -1073741823;
    v9 = (const GUID *)&v27;
    if ( ActivityIdIrp < 0 )
      v9 = 0LL;
    UsbhEtwWrite(a3, v9, &v11, 12LL, &v16, 44LL, &v10, 4LL, 0LL);
  }
}
