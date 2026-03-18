/*
 * XREFs of UsbhIdleIrp_Event @ 0x14001EFA4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCompletePdoIdleIrp @ 0x14001D8AC (UsbhCompletePdoIdleIrp.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x14001EF70 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x14001F4C0 (UsbhPdoIdleCC_Worker.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140040684 (UsbhFdoSubmitPdoIdleNotification.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001C40C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x14001F3A0 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhIdleIrp_CB_Pending @ 0x140034B24 (UsbhIdleIrp_CB_Pending.c)
 *     UsbhSetIdleIrpState @ 0x1400352E0 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleExIrp_IdleReady @ 0x14005D6B4 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x14005D838 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_WaitWorker @ 0x14005D934 (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(__int64 a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  KSPIN_LOCK *v12; // rbx
  KIRQL NewIrql; // r12
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  _DWORD *v21; // rbx
  KSPIN_LOCK *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  unsigned int v26; // ebx
  KSPIN_LOCK *v28; // rax
  __int64 v29; // rcx
  int v30; // [rsp+30h] [rbp-28h]

  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v30 = 1447392115;
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1447392115;
        *(_QWORD *)(v10 + 16) = (int)a4;
        *(_QWORD *)(v10 + 24) = a3;
      }
    }
  }
  v11 = PdoExt(a2);
  v12 = (KSPIN_LOCK *)PdoExt(a2);
  NewIrql = KeAcquireSpinLockRaiseToDpc(v12 + 256);
  v14 = *((int *)v12 + 384);
  v15 = 4 * (*((unsigned int *)v12 + 447) + 56LL);
  LODWORD(v12[v15]) = 0;
  HIDWORD(v12[v15]) = v14;
  v11[360] = a5;
  if ( _bittest(&UsbhLogMask, 0x10u) )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_DWORD *)v17 = 826635123;
        *(_QWORD *)(v17 + 16) = a2;
        *(_QWORD *)(v17 + 24) = v14;
      }
    }
  }
  switch ( (_DWORD)v14 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, a3, a4, 1, NewIrql, v30);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, NewIrql, v30);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, a3, a4, 3, NewIrql, v30);
    case 4:
      if ( _bittest(&UsbhLogMask, 0x10u) )
      {
        if ( a1 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_DWORD *)v19 = 1666675571;
            *(_QWORD *)(v19 + 16) = a2;
            *(_QWORD *)(v19 + 24) = a3;
          }
        }
      }
      v21 = PdoExt(a2);
      switch ( a4 )
      {
        case 1u:
          if ( a3 )
          {
            UsbhSetIdleIrpState(v20, a2, 1, 4, NewIrql);
            v24 = -2147483631;
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v24);
          }
          break;
        case 5u:
          if ( a3 )
          {
            UsbhSetIdleIrpState(v20, a2, 5, 0, NewIrql);
            v24 = v21[360];
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v24);
          }
          break;
        case 6u:
          if ( a3 )
          {
            v28 = (KSPIN_LOCK *)PdoExt(a2);
            v29 = 4 * (*((unsigned int *)v28 + 447) + 56LL);
            LODWORD(v28[v29]) = 6;
            *((_DWORD *)v28 + 384) = 0;
            LODWORD(v28[v29 + 1]) = 0;
            *((_DWORD *)v28 + 447) = ((unsigned __int8)*((_DWORD *)v28 + 447) + 1) & 7;
            KeReleaseSpinLock(v28 + 256, NewIrql);
            v24 = -1073741536;
            return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v24);
          }
          break;
        default:
          v22 = (KSPIN_LOCK *)PdoExt(a2);
          v23 = 4 * (*((unsigned int *)v22 + 447) + 56LL);
          LODWORD(v22[v23]) = a4;
          *((_DWORD *)v22 + 384) = 4;
          LODWORD(v22[v23 + 1]) = 4;
          *((_DWORD *)v22 + 447) = ((unsigned __int8)*((_DWORD *)v22 + 447) + 1) & 7;
          KeReleaseSpinLock(v22 + 256, NewIrql);
          v24 = -1073741823;
          return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v24);
      }
      UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( (_DWORD)v14 != 5 )
  {
    v26 = -1073741823;
    UsbhSetIdleIrpState(v14 - 4, a2, a4, v14, NewIrql);
    return v26;
  }
  return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, a3, a4, 5, NewIrql, v30);
}
