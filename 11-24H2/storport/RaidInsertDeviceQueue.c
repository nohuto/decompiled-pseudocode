/*
 * XREFs of RaidInsertDeviceQueue @ 0x140013CA0
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 * Callees:
 *     RiFastInsertDeviceQueue @ 0x140014290 (RiFastInsertDeviceQueue.c)
 *     RiIsDeviceQueueBusy @ 0x1400146C4 (RiIsDeviceQueueBusy.c)
 *     RiPeekDeviceQueue @ 0x1400146F0 (RiPeekDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x140014938 (RiEnqueueDeviceQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x14006CF68 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        int *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  char v12; // cl
  char v13; // r8
  char v14; // dl
  char v15; // r8
  char v16; // dl
  char v17; // r8
  char v18; // dl
  KIRQL v19; // bl
  int v20; // ecx
  KIRQL v21; // di
  int v23; // edx
  char v24; // al
  bool v25; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  char v33; // cl
  __int64 v34; // rdi
  char v35; // cl
  char v36; // r8
  signed __int64 v37; // rdi
  __int64 v38; // rax
  signed __int64 v39; // rdx
  signed __int64 v40; // rax
  __int64 v41; // rax
  __int128 v42; // rax
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  KIRQL v45; // al
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  KIRQL v50[4]; // [rsp+50h] [rbp-69h] BYREF
  int v51; // [rsp+54h] [rbp-65h] BYREF
  int v52; // [rsp+58h] [rbp-61h] BYREF
  int v53; // [rsp+5Ch] [rbp-5Dh]
  LARGE_INTEGER v54; // [rsp+60h] [rbp-59h] BYREF
  signed __int64 v55; // [rsp+68h] [rbp-51h]
  _OWORD v56[2]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v57; // [rsp+90h] [rbp-29h]
  __int64 v58; // [rsp+A0h] [rbp-19h]
  __int128 v59; // [rsp+A8h] [rbp-11h] BYREF

  v8 = a2 + 120;
  v51 = 0;
  v50[0] = 0;
  v12 = *(_BYTE *)(a2 + 142);
  v54.QuadPart = 0LL;
  v52 = 0;
  v25 = (a3 & 2) == 0;
  v13 = v12 | 2;
  if ( v25 )
    v13 = v12 & 0xFD;
  v14 = v13 | 4;
  v59 = 0LL;
  if ( (a3 & 4) == 0 )
    v14 = v13 & 0xFB;
  v15 = v14 | 1;
  if ( (a3 & 1) == 0 )
    v15 = v14 & 0xFE;
  v16 = v15 | 8;
  if ( (a3 & 8) == 0 )
    v16 = v15 & 0xF7;
  v17 = v16 | 0x20;
  if ( (a3 & 0x10) == 0 )
    v17 = v16 & 0xDF;
  v18 = v17 | 0x40;
  if ( (a3 & 0x20) == 0 )
    v18 = v17 & 0xBF;
  *(_BYTE *)(v8 + 22) = v18 ^ (v18 ^ (16 * a5)) & 0x10;
  v19 = KfRaiseIrql(2u);
  v53 = 0;
  if ( byte_140171462 < 0 )
  {
    IoGetActivityIdIrp(a2, &v59);
    v53 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( !(unsigned __int8)RiFastInsertDeviceQueue(
                           a1,
                           v8,
                           0,
                           (unsigned int)v50,
                           (__int64)&v54,
                           (__int64)&v51,
                           (__int64)&v52) )
  {
    if ( StorEtwLoggingEnabled )
    {
      v25 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        PerformanceCounter.QuadPart = 0LL;
LABEL_27:
        v54 = PerformanceCounter;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        LOBYTE(v27) = 1;
        if ( (unsigned __int8)RiFastInsertDeviceQueue(
                                a1,
                                v8,
                                v27,
                                (unsigned int)v50,
                                (__int64)&v54,
                                (__int64)&v51,
                                (__int64)&v52) )
        {
LABEL_68:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          goto LABEL_16;
        }
        v55 = *(_QWORD *)(a1 + 88);
        if ( (v55 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 80));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 80));
          v31 = v55;
          do
          {
            v32 = v31;
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v31 | 1, v31);
          }
          while ( v32 != v31 && (v31 & 1) == 0 );
        }
        if ( (unsigned int)RiIsDeviceQueueBusy(a1, v28, v29, v30) )
        {
          v51 = 1;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 37) && (*(_BYTE *)(v8 + 22) & 4) == 0 )
          {
            v51 = 2;
            goto LABEL_74;
          }
          if ( *(_BYTE *)(a1 + 36) && (*(_BYTE *)(v8 + 22) & 2) == 0 )
          {
            v51 = 3;
            goto LABEL_74;
          }
          if ( *(int *)(a1 + 24) > 0 )
          {
            v51 = 4;
            goto LABEL_74;
          }
          if ( *(_BYTE *)(a1 + 38) )
          {
            v51 = 5;
            goto LABEL_74;
          }
          if ( !*(_DWORD *)(a1 + 16) && !(unsigned int)(*(_QWORD *)(a1 + 88) / 0x100000000LL)
            || (v41 = RiPeekDeviceQueue(a1), v8 == v41)
            || (*(_BYTE *)(v41 + 22) & 1) == 0
            || (*(_BYTE *)(v8 + 22) & 6) != 0 )
          {
            v33 = *(_BYTE *)(v8 + 22);
            if ( (v33 & 1) == 0 || (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) == 0 )
            {
              if ( *(_BYTE *)(a1 + 39) && (v33 & 8) == 0 )
              {
                v51 = 8;
                goto LABEL_74;
              }
              if ( (v33 & 0x10) != 0 )
              {
                v51 = 9;
                goto LABEL_74;
              }
              if ( (v33 & 0x40) != 0 )
              {
                v51 = 10;
                goto LABEL_74;
              }
              if ( (v33 & 1) == 0 )
                goto LABEL_45;
              v34 = a1 - 720;
              if ( !*(_QWORD *)(a1 - 720 + 32) )
                goto LABEL_45;
              v58 = 0LL;
              memset(v56, 0, sizeof(v56));
              v57 = 0LL;
              if ( (unsigned __int8)RaidIsUnitControlSupported(a1 - 720, 31LL) )
              {
                v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v34 + 32) + 24LL));
                v46 = *(_QWORD *)(v34 + 32);
                v50[0] = v45;
                *(_DWORD *)(v46 + 80) |= 0x100u;
                v47 = *(_QWORD *)(v34 + 32);
                if ( (*(_DWORD *)(v47 + 80) & 0x201) == 1 )
                {
                  *(_DWORD *)(v47 + 80) |= 0x200u;
                  KeSetCoalescableTimer(
                    (PKTIMER)(*(_QWORD *)(v34 + 32) + 88LL),
                    (LARGE_INTEGER)-20000000LL,
                    0,
                    0x12Cu,
                    (PKDPC)(*(_QWORD *)(v34 + 32) + 152LL));
                }
                v48 = *(_QWORD *)(v34 + 24);
                WORD4(v57) = 1;
                *(_QWORD *)&v56[0] = 0x3800000038LL;
                DWORD2(v56[0]) = 2;
                HIDWORD(v57) = 4;
                WORD5(v57) = *(_WORD *)(v48 + 56);
                LOWORD(v58) = *(_WORD *)(v34 + 104);
                BYTE2(v58) = *(_BYTE *)(v34 + 106);
                if ( *(_DWORD *)v48 == 1094997074 )
                {
                  v49 = v48 + 376;
                }
                else if ( *(_DWORD *)v48 == 1314275652 )
                {
                  v49 = v48 + 168;
                }
                else
                {
                  v49 = 0LL;
                }
                RaCallMiniportUnitControl(v49, 31LL, v56);
                KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v34 + 32) + 24LL), v50[0]);
              }
              *(_BYTE *)(v8 + 20) |= 4u;
              if ( !(unsigned __int8)RaUnitCheckForwardIoOutstanding(a1 - 720) )
              {
LABEL_45:
                v51 = 0;
                v50[0] = 0;
                _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 4uLL);
                v35 = 0;
                if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
                  *(_BYTE *)(a1 + 38) = 1;
LABEL_47:
                *(_BYTE *)(v8 + 20) = v35 | *(_BYTE *)(v8 + 20) & 0xFE;
                v36 = 0;
                v37 = *(_QWORD *)(a1 + 88);
                while ( (v37 & 3) != 0
                     && !*(_DWORD *)(a1 + 28)
                     && !*(_DWORD *)(a1 + 16)
                     && !*(_DWORD *)(a1 + 32)
                     && !*(_BYTE *)(a1 + 37)
                     && !*(_BYTE *)(a1 + 39)
                     && !*(_BYTE *)(a1 + 36)
                     && *(int *)(a1 + 24) <= 0
                     && !*(_BYTE *)(a1 + 38) )
                {
                  v38 = v37;
                  if ( (v37 & 1) != 0 )
                  {
                    if ( !v36 )
                    {
                      ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
                      v36 = 1;
                    }
                    v38 = v37 ^ 1;
                  }
                  v39 = v38 ^ 2;
                  if ( (v37 & 2) == 0 )
                    v39 = v38;
                  v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v39, v37);
                  v25 = v37 == v40;
                  v37 = v40;
                  if ( v25 )
                  {
                    if ( *(_BYTE *)(a1 + 37) || *(_BYTE *)(a1 + 39) || *(_BYTE *)(a1 + 36) || *(int *)(a1 + 24) > 0 )
                    {
                      v43 = *(_QWORD *)(a1 + 88);
                      if ( (v43 & 3) == 0 )
                      {
                        do
                        {
                          v44 = v43;
                          v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v43 | 2, v43);
                        }
                        while ( v44 != v43 && (v43 & 3) == 0 );
                      }
                    }
                    goto LABEL_68;
                  }
                }
                goto LABEL_68;
              }
            }
            v51 = 7;
            goto LABEL_74;
          }
          v51 = 6;
        }
LABEL_74:
        RiEnqueueDeviceQueue(a1, v8);
        v35 = 1;
        v42 = *(__int64 *)(a1 + 88);
        v50[0] = 1;
        v52 = (DWORD2(v42) + (unsigned __int64)v42) >> 32;
        goto LABEL_47;
      }
      if ( !UseQPCTime )
      {
LABEL_26:
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        goto LABEL_27;
      }
      v25 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v25 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
LABEL_16:
  v21 = v50[0];
  if ( v50[0] )
  {
    v23 = v52;
    *a6 = v54;
    v24 = v51;
    *a7 = v51;
    *a8 = v23;
    if ( byte_140171462 < 0 )
      McTemplateK0pquuqqd_EtwWriteTransfer(
        v20,
        *(_DWORD *)(a1 + 16) + v23,
        (unsigned int)&v59,
        a1,
        v53,
        3,
        v24,
        *(_BYTE *)(a1 + 16) + v23,
        (__int64)*(unsigned int *)(a1 + 88) >> 2);
  }
  KeLowerIrql(v19);
  return v21;
}
