/*
 * XREFs of UsbhPoStartNextPowerIrp_Pdo @ 0x14002F120
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_SetPower @ 0x14002DE60 (UsbhPdoPower_SetPower.c)
 *     UsbhPdoSystemPowerState @ 0x14002E904 (UsbhPdoSystemPowerState.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x14002EB00 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPdoPower_QueryPower @ 0x14004AE50 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Pdo(__int64 a1, __int64 a2, IRP *a3, int a4)
{
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _DWORD *v9; // r10
  __int64 Options; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx

  v7 = PdoExt(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    v11 = *(_QWORD *)&v9[2 * Options + 200];
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_DWORD *)v13 = 827212880;
          *(_QWORD *)(v13 + 16) = v11;
          *(_QWORD *)(v13 + 24) = a3;
        }
      }
    }
    v14 = *(_QWORD *)&v9[2 * (unsigned int)Options + 204];
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_DWORD *)v16 = 843990096;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v16 + 24) = CurrentStackLocation;
      }
    }
    *(_QWORD *)&v9[2 * (unsigned int)Options + 200] = 0LL;
    *(_QWORD *)&v9[2 * (unsigned int)Options + 204] = 0LL;
    v9[(unsigned int)Options + 208] = a4;
    PoStartNextPowerIrp(a3);
  }
}
