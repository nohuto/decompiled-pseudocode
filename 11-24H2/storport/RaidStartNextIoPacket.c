/*
 * XREFs of RaidStartNextIoPacket @ 0x140021350
 * Callers:
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaidUnitPendingIrpDpcRoutine @ 0x14003C390 (RaidUnitPendingIrpDpcRoutine.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x14006D2DC (RaidLunQueueCheckWaitTimeout.c)
 * Callees:
 *     RiFastRemoveDeviceQueue @ 0x140013570 (RiFastRemoveDeviceQueue.c)
 *     RaidNormalizeDeviceQueue @ 0x140013720 (RaidNormalizeDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RiDeviceQueueQueuedCount @ 0x140022848 (RiDeviceQueueQueuedCount.c)
 *     RiDeviceQueueOutstandingCount @ 0x1400229FC (RiDeviceQueueOutstandingCount.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x14006CF68 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidStartNextIoPacket(__int64 a1, int a2, int a3)
{
  char v3; // r12
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // r14d
  unsigned __int64 v12; // rdi
  KSPIN_LOCK *v13; // rbx
  unsigned __int64 v14; // rbx
  KIRQL v15; // bl
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  KIRQL v19; // r15
  signed __int64 v20; // r14
  signed __int64 v21; // rax
  int v22; // eax
  char *v23; // rax
  signed __int64 v24; // rbx
  char v25; // r8
  __int64 v26; // rdx
  signed __int64 v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  int v36; // r8d
  char v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  bool v40; // zf
  __int64 i; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  char *v46; // [rsp+60h] [rbp-61h] BYREF
  __int128 v47; // [rsp+68h] [rbp-59h] BYREF
  __int64 v48; // [rsp+78h] [rbp-49h]
  int v49; // [rsp+80h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-39h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-21h]
  __int128 v52; // [rsp+B0h] [rbp-11h]
  __int128 v53; // [rsp+C0h] [rbp-1h]
  __int64 v54; // [rsp+D0h] [rbp+Fh]
  __int128 v55; // [rsp+D8h] [rbp+17h] BYREF

  v3 = 0;
  v48 = 0LL;
  v49 = 0;
  v6 = 0;
  v47 = 0LL;
  if ( a3 )
  {
    v7 = a1 + 720;
    v8 = RaidNormalizeDeviceQueue(a1 + 720);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 560);
      if ( v10 )
      {
        if ( *(_QWORD *)(v9 + 4904) )
        {
          v11 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v12 = -1LL;
          if ( *(_DWORD *)(v10 + 8) )
          {
            do
            {
              v13 = (KSPIN_LOCK *)(v10 + ((v11 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v13 + 5, &LockHandle);
              if ( (KSPIN_LOCK *)*v13 != v13 && *(_QWORD *)(*v13 + 40) < v12 )
                v12 = *(_QWORD *)(*v13 + 40);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              ++v11;
            }
            while ( v11 < *(_DWORD *)(v10 + 8) );
          }
          v14 = 0LL;
          if ( v12 != -1LL )
            v14 = v12;
          if ( v14 )
            v3 = KeQueryUnbiasedInterruptTime() - v14 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4904LL);
        }
      }
    }
    v7 = a1 + 720;
    if ( a2 )
    {
      v51 = 0LL;
      v54 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( RaidIsUnitControlSupported(a1, 31) )
        {
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x100u;
          v16 = *(_QWORD *)(a1 + 32);
          if ( (*(_DWORD *)(v16 + 80) & 0x1E0) == 0 && *(int *)(v16 + 84) <= 0 )
          {
            v17 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)&v51 = 0x3800000038LL;
            DWORD2(v51) = 3;
            WORD4(v53) = 1;
            HIDWORD(v53) = 4;
            WORD5(v53) = *(_WORD *)(v17 + 56);
            LOWORD(v54) = *(_WORD *)(a1 + 104);
            BYTE2(v54) = *(_BYTE *)(a1 + 106);
            if ( *(_DWORD *)v17 == 1094997074 )
            {
              v18 = v17 + 376;
            }
            else if ( *(_DWORD *)v17 == 1314275652 )
            {
              v18 = v17 + 168;
            }
            else
            {
              v18 = 0LL;
            }
            RaCallMiniportUnitControl(v18);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v15);
        }
      }
    }
    v46 = 0LL;
    v19 = KfRaiseIrql(2u);
    if ( (unsigned __int8)RiFastRemoveDeviceQueue(a1 + 720, v3, 0, (__int64)&v46) )
    {
      KeLowerIrql(v19);
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 792));
      if ( !(unsigned __int8)RiFastRemoveDeviceQueue(a1 + 720, v3, 1, (__int64)&v46) )
      {
        v20 = *(_QWORD *)(a1 + 808);
        if ( (v20 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
          do
          {
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v20 | 1, v20);
            v40 = v20 == v21;
            v20 = v21;
          }
          while ( !v40 && (v21 & 1) == 0 );
        }
        if ( a2 )
          *(_BYTE *)(a1 + 758) = 0;
        v22 = *(_DWORD *)(a1 + 748);
        if ( v22 )
          *(_DWORD *)(a1 + 748) = v22 - 1;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 808), 0xFFFFFFFFFFFFFFFCuLL);
        if ( (((__int64)*(unsigned int *)(a1 + 808) >> 2) & 0x3FFFFFFF) == 0 && *(_DWORD *)(a1 + 760) )
          KeSetEvent((PRKEVENT)(a1 + 768), 0, 0);
        v23 = RiNormalizeDeviceQueue(a1 + 720, v3);
        v24 = *(_QWORD *)(a1 + 808);
        v25 = 0;
        v46 = v23;
        if ( (v24 & 3) != 0 )
        {
          while ( !*(_DWORD *)(a1 + 748)
               && !*(_DWORD *)(a1 + 736)
               && !*(_DWORD *)(a1 + 752)
               && !*(_BYTE *)(a1 + 757)
               && !*(_BYTE *)(a1 + 759)
               && !*(_BYTE *)(a1 + 756)
               && *(int *)(a1 + 744) <= 0
               && !*(_BYTE *)(a1 + 758) )
          {
            v26 = v24;
            if ( (v24 & 1) != 0 )
            {
              if ( !v25 )
              {
                ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
                v25 = 1;
              }
              v26 = v24 ^ 1;
            }
            v27 = v26 ^ 2;
            if ( (v24 & 2) == 0 )
              v27 = v26;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v27, v24);
            v40 = v24 == v28;
            v24 = v28;
            if ( v40 )
            {
              if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
              {
                v29 = *(_QWORD *)(a1 + 808);
                if ( (v29 & 3) == 0 )
                {
                  do
                  {
                    v30 = v29;
                    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v29 | 2, v29);
                  }
                  while ( v30 != v29 && (v29 & 3) == 0 );
                }
              }
              break;
            }
            if ( (v28 & 3) == 0 )
              break;
          }
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v19);
    }
    v6 = 0;
    v8 = (__int64)v46;
  }
  if ( v8 )
  {
    if ( StorEtwLoggingEnabled )
    {
      if ( byte_140171462 < 0 )
      {
        v55 = 0LL;
        IoGetActivityIdIrp(v8 - 120, &v55);
        if ( byte_140171462 < 0 )
        {
          v33 = RiDeviceQueueQueuedCount(v7, v31, v32, *(unsigned __int8 *)(v8 + 22));
          v35 = RiDeviceQueueOutstandingCount(v7, v34, v33);
          McTemplateK0pquuqqd_EtwWriteTransfer(
            v36 + *(_DWORD *)(a1 + 736),
            v35,
            (unsigned int)&v55,
            v7,
            ((v37 & 6) != 0) + 1,
            5,
            0,
            v36 + *(_BYTE *)(a1 + 736),
            v35);
        }
      }
    }
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v8, &v47) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v8 - 120,
        &v47,
        0LL);
      v6 = 1;
      goto LABEL_86;
    }
    v38 = *(_QWORD *)(a1 + 728);
    v39 = *(_QWORD *)(v38 + 48);
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( (*(_BYTE *)(v39 + 112) & 4) == 0 || *(_DWORD *)(v38 + 40) != 1699901262 || !*(_DWORD *)(v38 + 24) )
        goto LABEL_86;
      v40 = *(_DWORD *)(v38 + 192) == 0;
    }
    else
    {
      if ( (*(_BYTE *)(v39 + 112) & 4) == 0 || *(_DWORD *)(v38 + 40) != 1699901262 || !*(_DWORD *)(v38 + 24) )
        goto LABEL_86;
      v40 = *(_DWORD *)(v38 + 192) == 0;
    }
    if ( v40 )
    {
      *(_DWORD *)(v38 + 40) = 0;
      RaidAdapterRestartGateway((PKSPIN_LOCK)v38);
    }
  }
LABEL_86:
  if ( a2 )
  {
    for ( i = RaidNormalizeDeviceQueue(v7); i; i = RaidNormalizeDeviceQueue(v7) )
    {
      if ( (unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), i, &v47) )
      {
        v42 = *(_QWORD *)(a1 + 728);
        v43 = *(_QWORD *)(v42 + 48);
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( (*(_BYTE *)(v43 + 112) & 4) != 0 && *(_DWORD *)(v42 + 40) == 1699901262 && *(_DWORD *)(v42 + 24) )
          {
            v44 = *(_DWORD *)(v42 + 192) == 0;
            goto LABEL_99;
          }
        }
        else if ( (*(_BYTE *)(v43 + 112) & 4) != 0 && *(_DWORD *)(v42 + 40) == 1699901262 && *(_DWORD *)(v42 + 24) )
        {
          v44 = *(_DWORD *)(v42 + 192) == 0;
LABEL_99:
          if ( v44 )
          {
            *(_DWORD *)(v42 + 40) = 0;
            RaidAdapterRestartGateway((PKSPIN_LOCK)v42);
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
          *(_QWORD *)(a1 + 704),
          i - 120,
          &v47,
          0LL);
      }
    }
  }
  return v6;
}
