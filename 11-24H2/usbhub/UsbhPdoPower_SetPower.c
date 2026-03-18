/*
 * XREFs of UsbhPdoPower_SetPower @ 0x14002DE60
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemPowerState @ 0x14002E904 (UsbhPdoSystemPowerState.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x14002F120 (UsbhPoStartNextPowerIrp_Pdo.c)
 */

__int64 __fastcall UsbhPdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _DWORD *v5; // rsi
  __int64 v6; // r14
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *v8; // r9
  __int64 Options; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  _DWORD *v16; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt((__int64)a1);
  v6 = *((_QWORD *)v5 + 148);
  v7 = PdoExt((__int64)a1);
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( v6 )
      {
        v10 = *(_QWORD *)(v6 + 64);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
          *(_QWORD *)(v11 + 8) = 0LL;
          *(_DWORD *)v11 = 860767312;
          *(_QWORD *)(v11 + 16) = v8;
          *(_QWORD *)(v11 + 24) = a2;
        }
      }
    }
    *(_QWORD *)&v7[2 * Options + 200] = a2;
    *(_QWORD *)&v7[2 * Options + 204] = v8;
    v7[Options + 208] = 752;
  }
  FdoExt(*((_QWORD *)v5 + 148));
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *((_QWORD *)v5 + 148);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_DWORD *)v14 = 1347642480;
        *(_QWORD *)(v14 + 16) = a1;
        *(_QWORD *)(v14 + 24) = a2;
      }
    }
  }
  v15 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v15 )
    return UsbhPdoSystemPowerState(*((_QWORD *)v5 + 148), a1, a2);
  if ( v15 == 1 )
    return UsbhPdoDevicePowerState(*((_QWORD *)v5 + 148), a1, a2);
  v16 = PdoExt((__int64)a1);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v16 + 148), a1, a2, 767LL);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
