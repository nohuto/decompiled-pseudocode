/*
 * XREFs of UsbhSyncResumeDeviceInternal @ 0x1400225DC
 * Callers:
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140048BD8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhSyncResumePort @ 0x140023948 (UsbhSyncResumePort.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 */

__int64 __fastcall UsbhSyncResumeDeviceInternal(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  KIRQL v17; // dl

  v6 = PdoExt((__int64)a3);
  v7 = UsbhLatchPdo(a1, *((_WORD *)v6 + 714), 0LL, 0x70534D52u);
  v8 = *((unsigned __int16 *)v6 + 714);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1886221170;
        *(_QWORD *)(v10 + 16) = v8;
        *(_QWORD *)(v10 + 24) = v7;
      }
    }
  }
  v11 = FdoExt(a1);
  if ( v7 && a3 == (struct _DEVICE_OBJECT *)v7 && (v11[640] & 0x10) == 0 )
  {
    UsbhAcquirePdoStateLock(v12, a2, 15LL);
    if ( PdoExt((__int64)a3)[281] == 3 )
    {
      *(_DWORD *)(a2 + 136) = 0;
      qword_14006F5E0 = 0LL;
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(a2 + 132));
      v13 = UsbhSyncResumePort(a1, a2, *((unsigned __int16 *)v6 + 714));
    }
    else
    {
      *(_DWORD *)(a2 + 136) = 0;
      v13 = -1073741810;
      qword_14006F5E0 = 0LL;
      v17 = *(_BYTE *)(a2 + 132);
      *(_DWORD *)(a2 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, v17);
    }
  }
  else
  {
    v13 = -1073741810;
    if ( !v7 )
      return (unsigned int)v13;
  }
  UsbhUnlatchPdo(a1, v7, 0LL, 0x70534D52u);
  if ( v13 >= 0 )
  {
    PdoExt((__int64)a3)[197] = 1;
    PoSetPowerState(a3, DevicePowerState, (POWER_STATE)1);
    v14 = PdoExt((__int64)a3);
    v15 = PdoExt((__int64)a3);
    UsbhSshSetPortsBusyState(*((_QWORD *)v15 + 148), *((_WORD *)v14 + 714), 2, 0);
  }
  return (unsigned int)v13;
}
