/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x14004F550
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 PortData; // rax

  v6 = PdoExt(a3);
  KeWaitForSingleObject(v6 + 724, Executive, 0, 0, 0LL);
  if ( PdoExt(a3)[280] == 100 )
  {
    v9 = v6[355];
    if ( (v9 & 0x18000000) != 0 )
    {
      if ( (v9 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          a1,
          (__int64)(v6 + 426),
          10000,
          *((unsigned __int16 *)v6 + 714),
          *((_QWORD *)v6 + 105),
          0x77464E44u);
    }
    else
    {
      v6[355] = v9 | 0x8000000;
      PortData = UsbhGetPortData(a1, a2, v7, v8);
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, a2, 1, 0);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 724), 0, 0);
  UsbhUnlatchPdo(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
