/*
 * XREFs of Usbh_PdoRemove_PdoEvent @ 0x14004898C
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     UsbhDeletePdo @ 0x140014454 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     SET_PDO_HWPNPSTATE @ 0x140024C28 (SET_PDO_HWPNPSTATE.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     UsbhDeleteUxdSettings @ 0x14002ABAC (UsbhDeleteUxdSettings.c)
 *     UsbhOnPdoAbsentList @ 0x140046F80 (UsbhOnPdoAbsentList.c)
 *     UsbhSetPdo_FailIo @ 0x140047830 (UsbhSetPdo_FailIo.c)
 */

void __fastcall Usbh_PdoRemove_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 PortData; // r15
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r8d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rsi
  int v15; // edi
  int v16; // edi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int16 *v20; // rdi
  int v21; // eax

  PortData = 0LL;
  Log(a1, 2, 1884441942, 0LL, a3);
  UsbhAcquirePdoStateLock(v7, a3, 6);
  v8 = PdoExt(a2)[281];
  if ( !a1 )
  {
    v9 = v8;
    v10 = 0LL;
LABEL_12:
    UsbhDeletePdo(v10, a2, v9, 6, a3);
    return;
  }
  v11 = PdoExt(a2);
  v14 = v11;
  v15 = v8 - 3;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        if ( UsbhOnPdoAbsentList(*((_QWORD *)v11 + 148), a2) )
        {
          v17 = v14 + 330;
          v18 = *((_QWORD *)v14 + 165);
          if ( *(_DWORD **)(v18 + 8) != v14 + 330 || (v19 = (_QWORD *)*((_QWORD *)v14 + 166), (_QWORD *)*v19 != v17) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          *((_QWORD *)v14 + 166) = 0LL;
        }
        v9 = 5;
        v10 = a1;
        goto LABEL_12;
      }
    }
    else
    {
      SET_PDO_HWPNPSTATE(a2, 4, 6);
    }
    *(_DWORD *)(a3 + 136) = 0;
    qword_14006F5E0 = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
    return;
  }
  v20 = (unsigned __int16 *)(v11 + 357);
  if ( (v11[358] & 0x2000) != 0 )
    PortData = UsbhGetPortData(a1, *v20, v12, v13);
  SET_PDO_HWPNPSTATE(a2, 3, 6);
  *(_DWORD *)(a3 + 136) = 0;
  qword_14006F5E0 = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
  UsbhDeleteUxdSettings(a1, a2, 1);
  if ( PortData )
  {
    UsbhSetPdo_FailIo(a2);
    KeWaitForSingleObject(v14 + 724, Executive, 0, 0, 0LL);
    v21 = v14[355];
    if ( (v21 & 0x8000000) == 0 )
    {
      v14[355] = v21 | 0x8000000;
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, *v20, 1, 0);
    }
    KeSetEvent((PRKEVENT)(v14 + 724), 0, 0);
  }
}
