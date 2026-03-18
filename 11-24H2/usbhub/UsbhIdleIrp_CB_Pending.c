/*
 * XREFs of UsbhIdleIrp_CB_Pending @ 0x140034B24
 * Callers:
 *     UsbhIdleIrp_Event @ 0x14001EFA4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x14001F3A0 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhSetIdleIrpState @ 0x1400352E0 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Pending(__int64 a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  _DWORD *v13; // r14
  KSPIN_LOCK *v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // r9d

  if ( (UsbhLogMask & 0x10000) != 0 && a1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_DWORD *)v11 = 1666675571;
      *(_QWORD *)(v11 + 16) = a2;
      *(_QWORD *)(v11 + 24) = a3;
    }
  }
  v13 = PdoExt(a2);
  switch ( a4 )
  {
    case 1:
      if ( !a3 )
LABEL_8:
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v12, a2, 1, 2, NewIrql);
      v17 = -2147483631;
      break;
    case 4:
      if ( !a3 )
        goto LABEL_8;
      if ( !a3->Cancel )
      {
        v14 = (KSPIN_LOCK *)PdoExt(a2);
        v15 = 4 * (*((unsigned int *)v14 + 447) + 56LL);
        LODWORD(v14[v15]) = 4;
        *((_DWORD *)v14 + 384) = 4;
        LODWORD(v14[v15 + 1]) = 4;
        *((_DWORD *)v14 + 447) = ((unsigned __int8)*((_DWORD *)v14 + 447) + 1) & 7;
        KeReleaseSpinLock(v14 + 256, NewIrql);
        IoCsqInsertIrp((PIO_CSQ)(v13 + 366), a3, 0LL);
        return 259LL;
      }
      UsbhSetIdleIrpState(v12, a2, 4, 0, NewIrql);
      v17 = -1073741536;
      break;
    case 5:
      UsbhSetIdleIrpState(v12, a2, 5, 3, NewIrql);
      return 259LL;
    default:
      UsbhSetIdleIrpState(v12, a2, a4, a5, NewIrql);
      v17 = -1073741823;
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v17);
}
