/*
 * XREFs of UsbhClearPdoIdleReady @ 0x14001E640
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x14001F3A0 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v8 = result;
  if ( result )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
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
          *(_QWORD *)(v10 + 16) = 0LL;
          *(_DWORD *)v10 = 826893938;
          *(_QWORD *)(v10 + 24) = result;
        }
      }
    }
    v6[446] = 0;
    v11 = FdoExt(a1);
    if ( *((_QWORD *)v11 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v11 + 560))(*((_QWORD *)v11 + 529), v8, 0LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232235619LL);
  }
  return result;
}
