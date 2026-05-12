/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x140005A88
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x140096298 (RaUnitResetBusSrb.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidUnitStartDeviceBusy @ 0x140045EC0 (RaidUnitStartDeviceBusy.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v6; // r14
  int v7; // eax
  _DWORD *v8; // r8
  __int64 v9; // rax
  __int64 ContiguousIoResources; // rax
  char v11; // al
  bool v12; // zf
  int v13; // ecx
  char *v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  void *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r15
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // di
  char v23; // r11
  char v24; // r12
  char *v25; // r11
  unsigned int *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  char v29; // cl
  char v30; // r8
  char *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  __int128 v34; // xmm1
  KIRQL CurrentIrql; // al
  __int64 v36; // rcx
  __int64 v37; // r8
  KSPIN_LOCK *v38; // rcx
  _QWORD *Pool; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  KIRQL v42; // bl
  char v44; // [rsp+60h] [rbp-29h]
  char v45; // [rsp+61h] [rbp-28h]
  int v46; // [rsp+64h] [rbp-25h]
  unsigned int v47; // [rsp+68h] [rbp-21h]
  __int128 v48; // [rsp+70h] [rbp-19h] BYREF
  __int128 v49; // [rsp+80h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+7h] BYREF

  LOBYTE(v2) = 0;
  *(_QWORD *)&v49 = 0LL;
  DWORD2(v49) = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v48 = 0LL;
  v6 = *(_QWORD *)(v4 + 8);
  *(_BYTE *)(v4 + 3) |= 1u;
  v7 = *(unsigned __int8 *)(v6 + 2);
  *(_BYTE *)(v6 + 3) = 0;
  if ( (_BYTE)v7 == 40 )
    v7 = *(_DWORD *)(v6 + 20);
  if ( v7 == 16 )
  {
    v8 = *(_DWORD **)(a1 + 24);
    v9 = 79LL;
    if ( *v8 != 1314275652 )
      v9 = 131LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(((v8[v9] + 7) & 0xFFFFFFF8) + 1184);
    if ( ContiguousIoResources )
    {
      *((_QWORD *)&v49 + 1) = ContiguousIoResources + 928;
      *(_QWORD *)&v49 = ContiguousIoResources + 48;
      *((_QWORD *)&v48 + 1) = ContiguousIoResources + 1184;
      RaidZeroXrb(v49, v49, 0LL, 0LL);
      LODWORD(v48) = -1;
      goto LABEL_77;
    }
  }
  else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1856), 1, 0) )
  {
    v34 = *(_OWORD *)(a1 + 1840);
    v48 = *(_OWORD *)(a1 + 1824);
    v49 = v34;
LABEL_77:
    if ( (qword_140170460 & 0x20) != 0 )
      DbgLogRequest(
        *(_QWORD *)(a1 + 24),
        3,
        a2,
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
        0LL,
        0LL,
        0LL);
    if ( (*(_BYTE *)(a1 + 505) & 1) != 0 || *(char *)(a1 + 504) < 0 )
      goto LABEL_91;
    CurrentIrql = KeGetCurrentIrql();
    v36 = a1;
    if ( CurrentIrql >= 2u )
    {
      if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
      {
LABEL_91:
        v42 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, &v48);
        KeLowerIrql(v42);
        return 259LL;
      }
      v38 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1872) + 96LL);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock(v38, &LockHandle);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 2) == 0 )
      {
        Pool = (_QWORD *)RaidAllocatePool(64LL, 32LL, 1330667858LL, *(_QWORD *)(a1 + 8));
        if ( Pool )
        {
          Pool[2] = a2;
          v40 = *(_QWORD *)(a1 + 1872) + 80LL;
          v41 = *(_QWORD *)v40;
          if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 )
            __fastfail(3u);
          *Pool = v41;
          Pool[1] = v40;
          *(_QWORD *)(v41 + 8) = Pool;
          *(_QWORD *)v40 = Pool;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          RaidUnitStartDeviceBusy(a1, a2, 0LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
          return 259LL;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
      v37 = 0LL;
      v36 = a1;
    }
    else
    {
      v37 = 1LL;
    }
    RaidUnitStartDeviceBusy(v36, a2, v37);
    goto LABEL_91;
  }
  v11 = RaidNtStatusToSrbStatus(-1073741670);
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v6 + 3) = v11;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v13;
  if ( v12 )
    goto LABEL_75;
  LockHandle.LockQueue = 0LL;
  IoGetActivityIdIrp(a2, &LockHandle);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_75;
    v17 = &EventNonReadWriteRequestComplete;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v2 = *v16;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v14, v15, (unsigned int)&LockHandle, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_75;
    v17 = &EventPnpRequestComplete;
LABEL_74:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &LockHandle, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_75;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v44 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v25 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_75;
  LODWORD(v14) = 0;
  v46 = 0;
  v47 = *(_DWORD *)(v18 + 56);
  if ( !v47 )
    goto LABEL_48;
  v26 = (unsigned int *)(v18 + 120);
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_42:
    LODWORD(v14) = (_DWORD)v14 + 1;
    ++v26;
    v46 = (int)v14;
    if ( (unsigned int)v14 >= v47 )
      goto LABEL_48;
  }
  if ( *(_DWORD *)(v27 + v18) != 64 )
  {
    LODWORD(v14) = *(_DWORD *)(v27 + v18) - 65;
    if ( *(_DWORD *)(v27 + v18) == 65 )
    {
      LODWORD(v14) = v27 + 56;
      if ( v27 + 56 <= v28 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v27 + v18 + 10) )
          v25 = (char *)(v27 + v18 + 24);
        v19 = *(_BYTE *)(v27 + v18 + 8);
        v20 = *(_BYTE **)(v27 + v18 + 16);
        v21 = *(_BYTE *)(v27 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v27 + v18) == 66 )
    {
      LODWORD(v14) = v27 + 40;
      if ( v27 + 40 <= v28 )
      {
        if ( *(_DWORD *)(v27 + v18 + 12) )
          v25 = (char *)(v27 + v18 + 32);
        v20 = *(_BYTE **)(v27 + v18 + 24);
        goto LABEL_47;
      }
    }
    goto LABEL_40;
  }
  LODWORD(v14) = v27 + 40;
  if ( v27 + 40 > v28 )
  {
LABEL_40:
    if ( v45 )
      goto LABEL_48;
    LODWORD(v14) = v46;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v27 + v18 + 10) )
    v25 = (char *)(v27 + v18 + 24);
  v20 = *(_BYTE **)(v27 + v18 + 16);
LABEL_47:
  v21 = *(_BYTE *)(v27 + v18 + 9);
  v19 = *(_BYTE *)(v27 + v18 + 8);
LABEL_48:
  if ( v25 )
  {
    v29 = *v25;
    v23 = 0;
LABEL_51:
    LOBYTE(v14) = v29 - 8;
    if ( ((unsigned __int8)v14 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v18 + 3);
      if ( v30 == 1 || !v20 || !v21 )
        goto LABEL_70;
      LOBYTE(v18) = 0;
      v14 = &v20[v21];
      v31 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( v31 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( v31 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v32 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v32 = (unsigned __int8)v20[7] + 8;
          v14 = v20 + 13;
          v18 = (unsigned __int64)&v20[v32];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v44 = 0;
          else
            v44 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *v14;
          LOBYTE(v18) = 1;
        }
        v23 = v44;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v2) = v23;
        v33 = v24;
      }
      else
      {
LABEL_70:
        v22 = 0;
        v33 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v14,
        v18,
        (unsigned int)&LockHandle,
        a2,
        *(_DWORD *)(a2 + 48),
        v30,
        v19,
        v22,
        v2,
        v33,
        a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return 259LL;
}
