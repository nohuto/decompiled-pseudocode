/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x1400285A0
 * Callers:
 *     <none>
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x14005357C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, char a2)
{
  char v2; // si
  int v4; // r8d
  KSPIN_LOCK *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  KIRQL v15; // bl
  __int64 v16; // rcx
  int v17; // r8d
  KIRQL v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  KIRQL v22; // r12
  KIRQL v23; // al
  signed __int64 v24; // r14
  KIRQL v25; // r13
  signed __int64 v26; // rax
  char *v27; // rax
  signed __int64 v28; // rbx
  char v29; // r8
  char *v30; // r14
  __int64 v31; // rax
  signed __int64 v32; // rdx
  signed __int64 v33; // rax
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  char v36; // dl
  bool v37; // zf
  KIRQL v38; // al
  __int64 v39; // rdx
  int v40; // ecx
  int v42; // [rsp+54h] [rbp-65h]
  __int128 v43; // [rsp+70h] [rbp-49h] BYREF
  __int64 v44; // [rsp+80h] [rbp-39h]
  int v45; // [rsp+88h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-29h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-11h]
  __int128 v48; // [rsp+B8h] [rbp-1h]
  __int128 v49; // [rsp+C8h] [rbp+Fh]
  __int64 v50; // [rsp+D8h] [rbp+1Fh]

  v2 = a2;
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
    return;
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      (unsigned int)&EventUnitActiveConditionStart,
      v4,
      **(_QWORD **)(a1 + 1872),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      v2);
  v42 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0
    && RaidIsUnitControlSupported(a1, 6)
    && RaidIsUnitControlSupported(a1, 6) )
  {
    RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 376LL);
  }
  v5 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1872) + 96LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
  *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) |= 2u;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 1872) + 80LL);
      if ( (_QWORD *)*v6 == v6 )
        break;
      v7 = *(_QWORD **)(*(_QWORD *)(a1 + 1872) + 88LL);
      if ( (_QWORD *)*v7 != v6 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 88LL) = v8;
      *v8 = v6;
      v9 = v7[2];
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
      if ( *(_BYTE *)(v10 + 2) == 40 )
        v11 = *(_DWORD *)(v10 + 20);
      else
        v11 = *(unsigned __int8 *)(v10 + 2);
      v12 = v11 - 16;
      if ( !v12 || (v13 = v12 - 2) == 0 || (v14 = v13 - 1) == 0 || v14 == 13 )
      {
        v15 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v9, a1 + 1824);
        KeLowerIrql(v15);
      }
      ExFreePoolWithTag(v7, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    v2 = a2;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(a1 + 759) )
  {
    *(_BYTE *)(a1 + 759) = 0;
    v47 = 0LL;
    v50 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x40u;
      v19 = *(_QWORD *)(a1 + 32);
      if ( (*(_DWORD *)(v19 + 80) & 0x1E0) == 0 && *(int *)(v19 + 84) <= 0 )
      {
        v20 = *(_QWORD *)(a1 + 24);
        WORD4(v49) = 1;
        *(_QWORD *)&v47 = 0x3800000038LL;
        DWORD2(v47) = 3;
        HIDWORD(v49) = 4;
        WORD5(v49) = *(_WORD *)(v20 + 56);
        LOWORD(v50) = *(_WORD *)(a1 + 104);
        BYTE2(v50) = *(_BYTE *)(a1 + 106);
        if ( *(_DWORD *)v20 == 1094997074 )
        {
          v21 = v20 + 376;
        }
        else if ( *(_DWORD *)v20 == 1314275652 )
        {
          v21 = v20 + 168;
        }
        else
        {
          v21 = 0LL;
        }
        RaCallMiniportUnitControl(v21);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v18);
    }
    v43 = 0LL;
    v44 = 0LL;
    v22 = 0;
    v45 = 0;
    if ( KeGetCurrentIrql() != 2 )
    {
      v42 = 0;
      v22 = KfRaiseIrql(2u);
    }
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
    v24 = *(_QWORD *)(a1 + 808);
    v25 = v23;
    if ( (v24 & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
      ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
      do
      {
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v24 | 1, v24);
        v37 = v24 == v26;
        v24 = v26;
      }
      while ( !v37 && (v26 & 1) == 0 );
    }
    v27 = RiNormalizeDeviceQueue(a1 + 720, 0);
    v28 = *(_QWORD *)(a1 + 808);
    v29 = 0;
    v30 = v27;
    if ( (v28 & 3) != 0 )
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
        v31 = v28;
        if ( (v28 & 1) != 0 )
        {
          if ( !v29 )
          {
            ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
            v29 = 1;
          }
          v31 = v28 ^ 1;
        }
        v32 = v31 ^ 2;
        if ( (v28 & 2) == 0 )
          v32 = v31;
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v32, v28);
        v37 = v28 == v33;
        v28 = v33;
        if ( v37 )
        {
          if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
          {
            v34 = *(_QWORD *)(a1 + 808);
            if ( (v34 & 3) == 0 )
            {
              do
              {
                v35 = v34;
                v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v34 | 2, v34);
              }
              while ( v35 != v34 && (v34 & 3) == 0 );
            }
          }
          break;
        }
        if ( (v33 & 3) == 0 )
          break;
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v25);
    if ( !v30 )
      goto LABEL_81;
    if ( !(unsigned __int8)StorSubmitIoGatewayItem(*(_QWORD *)(a1 + 728), v30, &v43) )
    {
      (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v30 - 120,
        &v43,
        0LL);
LABEL_81:
      if ( !v42 )
        KeLowerIrql(v22);
      if ( !*(_BYTE *)(a1 + 759) )
      {
        v16 = *(_QWORD *)(a1 + 32);
        if ( v16 )
        {
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 24));
          v39 = *(_QWORD *)(a1 + 32);
          v40 = *(_DWORD *)(v39 + 80);
          if ( (v40 & 8) != 0 )
          {
            *(_DWORD *)(v39 + 80) = v40 & 0xFFFFFFF7;
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
            KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v38);
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
              RaAcquirePowerRefWorkRoutine,
              CriticalWorkQueue,
              (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 24), v38);
          }
        }
      }
      v2 = a2;
      goto LABEL_89;
    }
    v16 = *(_QWORD *)(a1 + 728);
    v36 = *(_BYTE *)(*(_QWORD *)(v16 + 48) + 112LL);
    if ( FeatureFixKcsanRacyAccessV2 )
    {
      if ( (v36 & 4) == 0 || *(_DWORD *)(v16 + 40) != 1699901262 || !*(_DWORD *)(v16 + 24) )
        goto LABEL_81;
      v37 = *(_DWORD *)(v16 + 192) == 0;
    }
    else
    {
      if ( (v36 & 4) == 0 || *(_DWORD *)(v16 + 40) != 1699901262 || !*(_DWORD *)(v16 + 24) )
        goto LABEL_81;
      v37 = *(_DWORD *)(v16 + 192) == 0;
    }
    if ( v37 )
    {
      *(_DWORD *)(v16 + 40) = 0;
      RaidAdapterRestartGateway((PKSPIN_LOCK)v16);
    }
    goto LABEL_81;
  }
LABEL_89:
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pquuuq_EtwWriteTransfer(
      v16,
      (unsigned int)&EventUnitActiveConditionStop,
      v17,
      **(_QWORD **)(a1 + 1872),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      v2);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
}
