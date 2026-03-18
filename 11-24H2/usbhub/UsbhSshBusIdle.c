/*
 * XREFs of UsbhSshBusIdle @ 0x140036E94
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x14005E000 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rcx

  v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt(a1) + 411, 0LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      if ( v2 )
      {
        v4 = *(_QWORD *)(v2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_DWORD *)v4 = 762934082;
        *(_QWORD *)(v4 + 24) = v3;
      }
    }
  }
  return UsbhDecHubBusy(a1, v2, v3);
}
