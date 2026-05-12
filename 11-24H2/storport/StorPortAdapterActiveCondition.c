/*
 * XREFs of StorPortAdapterActiveCondition @ 0x140024390
 * Callers:
 *     <none>
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 *     StorNextIoGatewayItem @ 0x140029150 (StorNextIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x140051730 (StorSubmitIoGatewayItem.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     StorAcquireLockForAllGateways @ 0x1400A6238 (StorAcquireLockForAllGateways.c)
 *     StorReleaseLockForAllGateways @ 0x1400A6ED4 (StorReleaseLockForAllGateways.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorPortAdapterActiveCondition(KSPIN_LOCK a1, int a2, int a3)
{
  int v3; // r12d
  KSPIN_LOCK v4; // r13
  __int64 v5; // r8
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, __int64, _QWORD *); // rax
  unsigned int v8; // esi
  char v9; // al
  KSPIN_LOCK *v10; // rcx
  signed __int32 v11; // edi
  __int64 *v12; // rsi
  KIRQL v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  KSPIN_LOCK v17; // r9
  unsigned int v18; // edi
  KSPIN_LOCK *v19; // rbx
  __int64 IoGatewayItem; // rax
  __int64 v21; // rcx
  __int64 *v22; // r14
  KSPIN_LOCK v23; // r13
  int v24; // r12d
  KIRQL v25; // al
  signed __int64 v26; // rsi
  bool v27; // zf
  signed __int64 v28; // rax
  char *v29; // rax
  signed __int64 v30; // rdi
  char v31; // r8
  char *v32; // rsi
  __int64 v33; // rax
  signed __int64 v34; // rdx
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 v38; // r9
  __int64 v39; // rcx
  KIRQL v40; // al
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rcx
  char v44; // dl
  KIRQL v45; // [rsp+38h] [rbp-D0h]
  KIRQL v46; // [rsp+39h] [rbp-CFh]
  KIRQL v47; // [rsp+3Ah] [rbp-CEh]
  char v48; // [rsp+3Ch] [rbp-CCh]
  _QWORD v49[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v50; // [rsp+50h] [rbp-B8h]
  char v51; // [rsp+54h] [rbp-B4h]
  __int16 v52; // [rsp+55h] [rbp-B3h]
  char v53; // [rsp+57h] [rbp-B1h]
  KSPIN_LOCK v54; // [rsp+60h] [rbp-A8h]
  __int128 v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h]
  int v57; // [rsp+80h] [rbp-88h]
  __int128 v58; // [rsp+88h] [rbp-80h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h]
  int v60; // [rsp+A0h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+C0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v63; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-18h]
  __int128 v65; // [rsp+100h] [rbp-8h]
  __int128 v66; // [rsp+110h] [rbp+8h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  KSPIN_LOCK retaddr; // [rsp+170h] [rbp+68h]

  v3 = a2;
  v4 = a1;
  v48 = a2;
  v54 = a1;
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      a3,
      **(_QWORD **)(a1 + 4960),
      *(_DWORD *)(a1 + 56),
      a2);
  _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(v4 + 4960) + 20LL), 0);
  if ( RaidIsAdapterControlSupported(v4 + 376, 8) )
  {
    if ( RaidIsAdapterControlSupported(v4 + 376, 8) )
    {
      v6 = *(_QWORD *)(v4 + 608);
      v52 = 0;
      v53 = 0;
      v49[0] = 0x1800000001LL;
      v49[1] = 0LL;
      v50 = v3;
      v51 = 1;
      v7 = *(void (__fastcall **)(__int64, __int64, _QWORD *))(v6 + 120);
      if ( v7 )
        v7(*(_QWORD *)(v4 + 616) + 16LL, 8LL, v49);
    }
  }
  v8 = *(_DWORD *)(v4 + 968);
  v9 = 0;
  v10 = *(KSPIN_LOCK **)(v4 + 960);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v62, 0, sizeof(v62));
  if ( v10 )
  {
    if ( v8 <= 1 )
    {
      KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
      v11 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 988));
      goto LABEL_15;
    }
    v9 = StorAcquireLockForAllGateways(v4);
  }
  v11 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 988));
  if ( !v9 )
    goto LABEL_16;
  if ( v8 > 1 )
  {
    StorReleaseLockForAllGateways(v4);
    goto LABEL_16;
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_16:
  if ( (*(_BYTE *)(v4 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &v62);
    v12 = *(__int64 **)(v4 + 144);
    if ( v12 != (__int64 *)(v4 + 144) )
    {
      do
      {
        v64 = 0LL;
        v67 = 0LL;
        v65 = 0LL;
        v66 = 0LL;
        if ( *(v12 - 4) && RaidIsUnitControlSupported((__int64)(v12 - 8), 31) )
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(v12 - 4) + 24));
          --*(_DWORD *)(*(v12 - 4) + 84);
          v14 = *(v12 - 4);
          if ( (*(_DWORD *)(v14 + 80) & 0x1E0) == 0 && *(int *)(v14 + 84) <= 0 )
          {
            v15 = *(v12 - 5);
            *(_QWORD *)&v64 = 0x3800000038LL;
            DWORD2(v64) = 3;
            WORD4(v66) = 1;
            HIDWORD(v66) = 4;
            WORD5(v66) = *(_WORD *)(v15 + 56);
            LOWORD(v67) = *((_WORD *)v12 + 20);
            BYTE2(v67) = *((_BYTE *)v12 + 42);
            if ( *(_DWORD *)v15 == 1094997074 )
            {
              v16 = v15 + 376;
            }
            else if ( *(_DWORD *)v15 == 1314275652 )
            {
              v16 = v15 + 168;
            }
            else
            {
              v16 = 0LL;
            }
            RaCallMiniportUnitControl(v16);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(*(v12 - 4) + 24), v13);
        }
        v12 = (__int64 *)*v12;
      }
      while ( v12 != (__int64 *)(v4 + 144) );
      LOBYTE(v3) = v48;
    }
    KeReleaseInStackQueuedSpinLock(&v62);
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v17 = *(unsigned int *)(v4 + 56);
    if ( *(_DWORD *)v4 != 1314275652 )
    {
      LODWORD(v10) = *(_DWORD *)(v4 + 4932);
      if ( (_DWORD)v10 )
      {
        v5 = *(_QWORD *)(v4 + 4936);
        if ( v5 )
        {
          v10 = (KSPIN_LOCK *)(v5
                             + 48LL
                             * (_InterlockedIncrement((volatile signed __int32 *)(v4 + 4928)) % (unsigned int)v10));
          *(_DWORD *)v10 = 7;
          v10[5] = MEMORY[0xFFFFF78000000014];
          v10[2] = v11;
          v10[1] = retaddr;
          v10[3] = v4;
          v10[4] = v17;
        }
      }
    }
  }
  if ( !v11 )
  {
    v47 = KfRaiseIrql(2u);
    v18 = 0;
    memset(&v63, 0, sizeof(v63));
    if ( *(_DWORD *)(v4 + 968) )
    {
      do
      {
        v55 = 0LL;
        v19 = (KSPIN_LOCK *)(*(_QWORD *)(v4 + 960) + 320LL * v18);
        v56 = 0LL;
        v57 = 0;
        while ( 1 )
        {
          IoGatewayItem = StorNextIoGatewayItem(v19);
          if ( !IoGatewayItem )
            break;
          v21 = *(_QWORD *)(*(_QWORD *)(IoGatewayItem - 120 + 184) + 32LL);
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v21 + 712))(
            *(_QWORD *)(v21 + 704),
            IoGatewayItem - 120,
            &v55,
            0LL);
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v4 + 968) );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &v63);
    v22 = *(__int64 **)(v4 + 144);
    if ( v22 != (__int64 *)(v4 + 144) )
    {
      v23 = v4 + 144;
      while ( 1 )
      {
        v45 = 0;
        v59 = 0LL;
        v58 = 0LL;
        v60 = 0;
        if ( KeGetCurrentIrql() == 2 )
        {
          v24 = 1;
        }
        else
        {
          v24 = 0;
          v45 = KfRaiseIrql(2u);
        }
        v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v22 + 182);
        v26 = v22[93];
        v46 = v25;
        if ( (v26 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v22 + 92);
          ExRundownCompleted((PEX_RUNDOWN_REF)v22 + 92);
          do
          {
            v28 = _InterlockedCompareExchange64(v22 + 93, v26 | 1, v26);
            v27 = v26 == v28;
            v26 = v28;
          }
          while ( !v27 && (v28 & 1) == 0 );
        }
        v29 = RiNormalizeDeviceQueue((__int64)(v22 + 82), 0);
        v30 = v22[93];
        v31 = 0;
        v32 = v29;
        if ( (v30 & 3) != 0 )
        {
          while ( !*((_DWORD *)v22 + 171)
               && !*((_DWORD *)v22 + 168)
               && !*((_DWORD *)v22 + 172)
               && !*((_BYTE *)v22 + 693)
               && !*((_BYTE *)v22 + 695)
               && !*((_BYTE *)v22 + 692)
               && *((int *)v22 + 170) <= 0
               && !*((_BYTE *)v22 + 694) )
          {
            v33 = v30;
            if ( (v30 & 1) != 0 )
            {
              if ( !v31 )
              {
                ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v22 + 92);
                v31 = 1;
              }
              v33 = v30 ^ 1;
            }
            v34 = v33 ^ 2;
            if ( (v30 & 2) == 0 )
              v34 = v33;
            v35 = _InterlockedCompareExchange64(v22 + 93, v34, v30);
            v27 = v30 == v35;
            v30 = v35;
            if ( v27 )
            {
              if ( *((_BYTE *)v22 + 693) || *((_BYTE *)v22 + 695) || *((_BYTE *)v22 + 692) || *((int *)v22 + 170) > 0 )
              {
                v36 = v22[93];
                if ( (v36 & 3) == 0 )
                {
                  do
                  {
                    v37 = v36;
                    v36 = _InterlockedCompareExchange64(v22 + 93, v36 | 2, v36);
                  }
                  while ( v37 != v36 && (v36 & 3) == 0 );
                }
              }
              break;
            }
            if ( (v35 & 3) == 0 )
              break;
          }
        }
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v22 + 182, v46);
        if ( !v32 )
          goto LABEL_80;
        if ( (unsigned __int8)StorSubmitIoGatewayItem(v22[83], v32, &v58) )
        {
          v43 = v22[83];
          v44 = *(_BYTE *)(*(_QWORD *)(v43 + 48) + 112LL);
          if ( FeatureFixKcsanRacyAccessV2 )
          {
            if ( (v44 & 4) == 0
              || *(_DWORD *)(v43 + 40) != 1699901262
              || !*(_DWORD *)(v43 + 24)
              || *(_DWORD *)(v43 + 192) )
            {
              goto LABEL_80;
            }
          }
          else if ( (v44 & 4) == 0
                 || *(_DWORD *)(v43 + 40) != 1699901262
                 || !*(_DWORD *)(v43 + 24)
                 || *(_DWORD *)(v43 + 192) )
          {
            goto LABEL_80;
          }
          *(_DWORD *)(v43 + 40) = 0;
          RaidAdapterRestartGateway((PKSPIN_LOCK)v43);
        }
        else
        {
          LOBYTE(v38) = 1;
          ((void (__fastcall *)(__int64, char *, __int128 *, __int64))v22[81])(v22[80], v32 - 120, &v58, v38);
        }
LABEL_80:
        if ( !v24 )
          KeLowerIrql(v45);
        if ( !*((_BYTE *)v22 + 695) )
        {
          v39 = *(v22 - 4);
          if ( v39 )
          {
            v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 24));
            v41 = *(v22 - 4);
            v42 = *(_DWORD *)(v41 + 80);
            if ( (v42 & 8) != 0 )
            {
              *(_DWORD *)(v41 + 80) = v42 & 0xFFFFFFF7;
              *(_DWORD *)(*(v22 - 4) + 80) |= 0x10u;
              KeReleaseSpinLock((PKSPIN_LOCK)(*(v22 - 4) + 24), v40);
              *(_QWORD *)(*(v22 - 4) + 72) = 0LL;
              IoQueueWorkItem(
                *(PIO_WORKITEM *)(*(v22 - 4) + 64),
                RaAcquirePowerRefWorkRoutine,
                CriticalWorkQueue,
                (PVOID)(*(v22 - 4) + 64));
            }
            else
            {
              KeReleaseSpinLock((PKSPIN_LOCK)(v41 + 24), v40);
            }
          }
        }
        v22 = (__int64 *)*v22;
        if ( v22 == (__int64 *)v23 )
        {
          v4 = v54;
          LOBYTE(v3) = v48;
          break;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&v63);
    KeLowerIrql(v47);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        (_DWORD)v10,
        (unsigned int)&EventAdapterActiveConditionStop,
        v5,
        **(_QWORD **)(v4 + 4960),
        *(_DWORD *)(v4 + 56),
        v3);
  }
}
