/*
 * XREFs of UsbhDecrementHubIsrWorkerReference @ 0x14003365C
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x14001EB48 (UsbhBusPnpStop_Action.c)
 *     UsbhHubIsrWorker @ 0x1400334E0 (UsbhHubIsrWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

int __fastcall UsbhDecrementHubIsrWorkerReference(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r9
  signed __int32 v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = FdoExt(a1);
  v3 = v2;
  v4 = _InterlockedDecrement(v2 + 685);
  v5 = (int)v2[685];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        LODWORD(v2) = 760367432;
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)v7 = 760367432;
        *(_QWORD *)(v7 + 16) = a1;
        *(_QWORD *)(v7 + 24) = v5;
      }
    }
  }
  if ( !v4 )
    LODWORD(v2) = KeSetEvent((PRKEVENT)(v3 + 686), 0, 0);
  return (int)v2;
}
