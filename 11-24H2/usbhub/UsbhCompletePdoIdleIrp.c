/*
 * XREFs of UsbhCompletePdoIdleIrp @ 0x14001D8AC
 * Callers:
 *     UsbhPdoSetD0 @ 0x1400164A0 (UsbhPdoSetD0.c)
 *     UsbhPdoRemoveCleanup @ 0x14001DB50 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhIdleIrp_Event @ 0x14001EFA4 (UsbhIdleIrp_Event.c)
 *     UsbhSetIdleIrpState @ 0x1400352E0 (UsbhSetIdleIrpState.c)
 */

LONG __fastcall UsbhCompletePdoIdleIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  _DWORD *v6; // r14
  KSPIN_LOCK *v7; // rbx
  KIRQL NewIrql; // al
  KIRQL v9; // r15
  KSPIN_LOCK *v10; // rcx
  int v11; // ebx
  KSPIN_LOCK *v12; // rax
  __int64 v13; // rcx
  PIRP v14; // rbx
  LONG result; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = a3;
  v6 = PdoExt(a2);
  KeWaitForSingleObject(v6 + 514, Executive, 0, 0, 0LL);
  v7 = (KSPIN_LOCK *)PdoExt(a2);
  NewIrql = KeAcquireSpinLockRaiseToDpc(v7 + 256);
  v9 = NewIrql;
  v10 = &v7[4 * *((unsigned int *)v7 + 447) + 224];
  v11 = *((_DWORD *)v7 + 384);
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 1) = v11;
  if ( v11 == 2 )
  {
    v6[360] = v4;
    UsbhSetIdleIrpState((int)v10, a2, 9, 3, NewIrql);
  }
  else
  {
    v12 = (KSPIN_LOCK *)PdoExt(a2);
    v13 = 4 * (*((unsigned int *)v12 + 447) + 56LL);
    LODWORD(v12[v13]) = 9;
    *((_DWORD *)v12 + 384) = v11;
    LODWORD(v12[v13 + 1]) = v11;
    *((_DWORD *)v12 + 447) = ((unsigned __int8)*((_DWORD *)v12 + 447) + 1) & 7;
    KeReleaseSpinLock(v12 + 256, v9);
  }
  v14 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 366), 0LL);
  result = KeSetEvent((PRKEVENT)(v6 + 514), 0, 0);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        result = 1145663587;
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_DWORD *)v17 = 1145663587;
        *(_QWORD *)(v17 + 16) = v4;
        *(_QWORD *)(v17 + 24) = v14;
      }
    }
  }
  if ( v14 )
    return UsbhIdleIrp_Event(a1, a2, v14, 5LL, v4);
  return result;
}
