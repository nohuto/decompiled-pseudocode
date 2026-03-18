/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x14000C4F0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x14004E8F4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *SecurityContext; // r14
  _DWORD *v11; // rdi
  __int64 v12; // rdi
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  int v15; // ecx
  _DWORD *v16; // rbx
  KIRQL v17; // dl
  _DWORD *v18; // rax
  KIRQL v19; // dl
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  unsigned int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  _QWORD *v30; // rbx
  KIRQL v31; // r15
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // r8
  _DWORD *v36; // r12
  _QWORD *v37; // rbx
  KIRQL v38; // r14
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  _DWORD *v41; // rsi
  _QWORD *v42; // rbx
  KIRQL v43; // r14
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // [rsp+80h] [rbp+18h] BYREF
  int v54; // [rsp+88h] [rbp+20h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v53 = 0;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a2 + 64);
  if ( !v7 )
    goto LABEL_87;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, v7);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    v41 = PdoExt(a2);
    v42 = v41 + 306;
    v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v41 + 152);
    v44 = (_QWORD *)*((_QWORD *)v41 + 153);
    if ( v44 == (_QWORD *)(v41 + 306) || !v44 )
    {
LABEL_89:
      v50 = v41[316];
      if ( !v50 )
        goto LABEL_97;
      v41[316] = v50 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v44 == v42 )
          goto LABEL_89;
        v45 = (_QWORD *)*v44;
        if ( (IRP *)v44[2] == a3 )
          break;
        v44 = (_QWORD *)*v44;
      }
      if ( (_QWORD *)v45[1] != v44 )
        goto LABEL_94;
      v49 = (_QWORD *)v44[1];
      if ( (_QWORD *)*v49 != v44 )
        goto LABEL_94;
      *v49 = v45;
      v45[1] = v49;
      ExFreePoolWithTag(v44 - 1, 0);
    }
    if ( (_QWORD *)*v42 != v42 || v41[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v41 + 152, v43);
      return 3221225485LL;
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v41 + 152, v43);
      KeSetEvent((PRKEVENT)(v41 + 310), 0, 0);
      return 3221225485LL;
    }
  }
  SecurityContext = (unsigned int *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (_DWORD)a3, 0LL);
    return 3221225485LL;
  }
  *SecurityContext = 0;
  v11 = *(_DWORD **)(a2 + 64);
  if ( !v11 )
LABEL_87:
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = (__int64)(v11 + 236);
  v13 = (KSPIN_LOCK *)FdoExt(a1);
  v14 = KeAcquireSpinLockRaiseToDpc(v13 + 632);
  v15 = *((_DWORD *)v13 + 1043);
  *((_BYTE *)v13 + 5064) = v14;
  *(_DWORD *)(v12 + 40) = v15;
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v13[168] = v12;
  FdoExt(*(_QWORD *)(v12 + 8));
  if ( FdoExt(*(_QWORD *)(v12 + 8))[1043] == 213
    || (FdoExt(*(_QWORD *)(v12 + 8)), FdoExt(*(_QWORD *)(v12 + 8))[1043] == 212) )
  {
    UsbhReleaseFdoPwrLock(a1, v12);
    Log(a1, 8, 1196450936, (_DWORD)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v16 = FdoExt(a1);
  FdoExt(*(_QWORD *)(v12 + 8));
  *(_DWORD *)(v12 + 32) = 1734964085;
  v17 = *((_BYTE *)v16 + 5064);
  *((_QWORD *)v16 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  qword_14006F5E0 = v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v18 = *(_DWORD **)(a2 + 64);
  if ( !v18 )
    goto LABEL_87;
  if ( *v18 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( v18[281] != 3 )
  {
    *(_DWORD *)(v12 + 136) = 0;
    qword_14006F5E0 = 0LL;
    *(_DWORD *)(v12 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(v12 + 132));
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    v36 = PdoExt(a2);
    v37 = v36 + 306;
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v36 + 152);
    v39 = (_QWORD *)*((_QWORD *)v36 + 153);
    if ( v39 == (_QWORD *)(v36 + 306) || !v39 )
    {
LABEL_92:
      v51 = v36[316];
      if ( !v51 )
        goto LABEL_97;
      v36[316] = v51 - 1;
    }
    else
    {
      while ( 1 )
      {
        if ( v39 == v37 )
          goto LABEL_92;
        v40 = (_QWORD *)*v39;
        if ( (IRP *)v39[2] == a3 )
          break;
        v39 = (_QWORD *)*v39;
      }
      if ( (_QWORD *)v40[1] != v39 )
        goto LABEL_94;
      v46 = (_QWORD *)v39[1];
      if ( (_QWORD *)*v46 != v39 )
        goto LABEL_94;
      *v46 = v40;
      v40[1] = v46;
      ExFreePoolWithTag(v39 - 1, 0);
    }
    if ( (_QWORD *)*v37 != v37 || v36[316] )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v36 + 152, v38);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v36 + 152, v38);
      KeSetEvent((PRKEVENT)(v36 + 310), 0, 0);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v47 = *(_QWORD *)(a1 + 64);
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
          *(_DWORD *)v48 = 2018725959;
          *(_QWORD *)(v48 + 8) = 0LL;
          *(_QWORD *)(v48 + 16) = a3;
          *(_QWORD *)(v48 + 24) = 0LL;
        }
      }
    }
    return 3221225486LL;
  }
  *(_DWORD *)(v12 + 136) = 0;
  qword_14006F5E0 = 0LL;
  v19 = *(_BYTE *)(v12 + 132);
  *(_DWORD *)(v12 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v19);
  if ( (Usbh_SSH_Event(*(_QWORD *)(v12 + 8), 5LL, v12, v20) & 0xC0000000) == 0xC0000000 )
  {
    *SecurityContext |= 3u;
    LODWORD(v21) = 0;
  }
  else
  {
    v21 = (int)UsbhQueryPortState(a1, *(unsigned __int16 *)(v7 + 1428), (__int64)&v53, &v54);
    if ( (UsbhLogMask & 8) != 0 && a1 && (v22 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v23 = *(_QWORD *)(v22 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
      *(_DWORD *)v23 = 861098055;
      v24 = v53;
      *(_QWORD *)(v23 + 16) = (unsigned __int16)v53;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 24) = v21;
    }
    else
    {
      v24 = v53;
    }
    if ( (int)v21 < 0 )
      goto LABEL_30;
    if ( (v24 & 1) != 0 )
      *SecurityContext |= 2u;
    else
      LODWORD(v21) = -1073741810;
    v25 = *SecurityContext;
    if ( (v24 & 2) != 0 )
    {
      v25 |= 1u;
      *SecurityContext = v25;
    }
    if ( *(_DWORD *)(v7 + 2384) == 2 )
      *SecurityContext = v25 & 0xFFFFFFFE;
    if ( (v53 & 0x10000) != 0 )
LABEL_30:
      LODWORD(v21) = -1073741810;
  }
  v26 = *SecurityContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 877875271;
        *(_QWORD *)(v28 + 24) = (int)v21;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v26;
      }
    }
  }
  a3->IoStatus.Status = v21;
  IofCompleteRequest(a3, 0);
  v29 = *(_QWORD *)(a2 + 64);
  if ( !v29 )
    goto LABEL_87;
  if ( *(_DWORD *)v29 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v30 = (_QWORD *)(v29 + 1224);
  v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 1216));
  v32 = *(_QWORD **)(v29 + 1224);
  if ( v32 != (_QWORD *)(v29 + 1224) && v32 )
  {
    while ( 1 )
    {
      if ( v32 == v30 )
        goto LABEL_95;
      v33 = (_QWORD *)*v32;
      if ( (IRP *)v32[2] == a3 )
        break;
      v32 = (_QWORD *)*v32;
    }
    if ( (_QWORD *)v33[1] == v32 )
    {
      v34 = (_QWORD *)v32[1];
      if ( (_QWORD *)*v34 == v32 )
      {
        *v34 = v33;
        v33[1] = v34;
        ExFreePoolWithTag(v32 - 1, 0);
        goto LABEL_45;
      }
    }
LABEL_94:
    __fastfail(3u);
  }
LABEL_95:
  v52 = *(_DWORD *)(v29 + 1264);
  if ( !v52 )
  {
LABEL_97:
    USBHUB_TriggerCallBacks(a2);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
  }
  *(_DWORD *)(v29 + 1264) = v52 - 1;
LABEL_45:
  if ( (_QWORD *)*v30 != v30 || *(_DWORD *)(v29 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v29 + 1216), v31);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v29 + 1216), v31);
    KeSetEvent((PRKEVENT)(v29 + 1240), 0, 0);
  }
  return (unsigned int)v21;
}
