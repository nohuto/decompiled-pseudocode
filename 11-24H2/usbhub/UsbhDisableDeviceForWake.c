/*
 * XREFs of UsbhDisableDeviceForWake @ 0x140026D74
 * Callers:
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x14004AFF4 (UsbhPdoSetD0_Finish.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhDisableDeviceForWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v10) = 0;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v9 = 65792LL;
  v5 = (int)UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&v9, 0, (__int64)&v10);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v10 = 1802980932;
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = v10;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v5;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  if ( (int)v5 >= 0 )
    v4[355] &= ~0x8000u;
  return (unsigned int)v5;
}
