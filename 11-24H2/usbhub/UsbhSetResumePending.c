/*
 * XREFs of UsbhSetResumePending @ 0x1400043CC
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  KIRQL v11; // al
  KIRQL v12; // bl

  v6 = FdoExt(a1, a2, a3, a4);
  v7 = *(unsigned __int16 *)(a2 + 4);
  v8 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
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
        *(_DWORD *)v10 = 1986359664;
        *(_QWORD *)(v10 + 16) = v8;
        *(_QWORD *)(v10 + 24) = v7;
      }
    }
  }
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  *(_BYTE *)(a2 + 2838) = 0;
  v12 = v11;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 4944), v12);
}
