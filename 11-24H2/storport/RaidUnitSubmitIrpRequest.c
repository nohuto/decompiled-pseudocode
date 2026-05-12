/*
 * XREFs of RaidUnitSubmitIrpRequest @ 0x14000AA60
 * Callers:
 *     RaUnitIoIrp @ 0x14000A870 (RaUnitIoIrp.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14003E4F0 (RaAcquirePowerRefWorkRoutine.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     StorEtwIORequestDispatch @ 0x1400023D4 (StorEtwIORequestDispatch.c)
 *     RaUnitFillIrpData @ 0x14000AE80 (RaUnitFillIrpData.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaUnitAttributedIoQueued @ 0x140091CA8 (RaUnitAttributedIoQueued.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidUnitSubmitIrpRequest(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 v4; // r15
  __int64 v7; // rax
  bool v8; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG64 v10; // rax
  unsigned __int8 *v11; // rcx
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD); // rax
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, _QWORD, __int64); // rax
  int v25; // r14d
  __int64 v26; // rdx
  KIRQL v27; // al
  __int64 v28; // rdx
  KIRQL v29; // r12
  int v30; // eax
  __int64 v31; // rcx
  __int64 *v32; // rdi
  __int64 v33; // rax
  __int64 **v34; // rcx
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp-69h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v38; // [rsp+60h] [rbp-49h]
  __int128 v39; // [rsp+70h] [rbp-39h]
  __int128 v40; // [rsp+80h] [rbp-29h]
  __int128 v41; // [rsp+90h] [rbp-19h] BYREF
  int v42; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v43; // [rsp+A4h] [rbp-5h]
  int v44; // [rsp+B4h] [rbp+Bh]
  ULONG64 v45; // [rsp+B8h] [rbp+Fh]

  v3 = *(_DWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a2 + 184);
  v37[1] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  QpcTimeStamp = 0LL;
  v36 = 0LL;
  v41 = 0LL;
  if ( v3 >= 0 || a3 )
  {
LABEL_2:
    DWORD1(v41) = 4;
    v37[0] = &v41;
    LOWORD(v41) = 1;
    RaUnitFillIrpData(a2, v37);
    v7 = *((_QWORD *)&v38 + 1);
    **((_OWORD **)&v38 + 1) = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    if ( *(_QWORD *)(a2 + 56) )
      goto LABEL_16;
    if ( (int)IoGetIoAttributionHandle(a2, &v36) >= 0 )
    {
      v10 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      v11 = *(unsigned __int8 **)(a2 + 184);
      v43 = 0LL;
      QpcTimeStamp = v10;
      v44 = 0;
      v42 = 1;
      v12 = *v11;
      v45 = v10;
      LODWORD(v43) = v12 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00 | 0x100;
      IoRecordIoAttribution(v36, &v42);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 32) + 12LL));
      PerformanceCounter.QuadPart = QpcTimeStamp;
LABEL_13:
      *(_DWORD *)(a2 + 168) = PerformanceCounter.LowPart;
      v8 = StorEtwLoggingEnabled == 0;
      *(_DWORD *)(a2 + 172) = PerformanceCounter.HighPart;
      if ( !v8
        && ((byte_140171461 & 8) != 0
         || (byte_140171461 & 0x10) != 0
         || (byte_140171461 & 2) != 0
         || (byte_140171461 & 4) != 0)
        && (unsigned __int8)(*(_BYTE *)v4 - 3) <= 1u )
      {
        StorEtwIORequestDispatch(a2);
      }
      if ( (qword_140170460 & 0x2000) != 0 )
        DbgLogRequest(
          *(_QWORD *)(a1 + 24),
          49,
          a2,
          (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | ((((unsigned __int8)*(_DWORD *)(a1 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104))) << 8),
          0LL,
          0LL,
          QpcTimeStamp);
LABEL_16:
      if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2232));
        v21 = -1073740534;
        goto LABEL_43;
      }
      if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 30LL) )
      {
        if ( *(_BYTE *)v4 == 3 )
        {
          v14 = *(_QWORD *)(a2 + 8);
          v22 = (__int64 *)(*(_QWORD *)(a1 + 24) + 880LL);
          if ( !v14 )
            goto LABEL_27;
          if ( *(_QWORD *)(a1 + 24) == -880LL )
            goto LABEL_27;
          v23 = *v22;
          if ( !*v22 )
            goto LABEL_27;
          v13 = *(_QWORD *)(v23 + 8);
          if ( !v13 )
            goto LABEL_27;
          if ( *(int *)(*(_QWORD *)(a1 + 24) + 908LL) >= 3 )
          {
            v24 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v13 + 240);
            if ( v24 )
            {
              LOBYTE(v13) = 1;
              v24(v23, *(_QWORD *)(a2 + 8), v13);
              goto LABEL_27;
            }
          }
          LOBYTE(v13) = 1;
          v26 = 1LL;
LABEL_66:
          KeFlushIoBuffers(v14, v26, v13);
LABEL_27:
          v19 = *(_DWORD **)(a1 + 24);
          if ( *v19 == 1094997074 )
          {
            v20 = v19 + 94;
          }
          else if ( *v19 == 1314275652 )
          {
            v20 = v19 + 42;
          }
          else
          {
            v20 = 0LL;
          }
          v21 = RaCallMiniportUnitControl(v20, 30LL, v37);
          if ( !v21 )
            return;
LABEL_43:
          *(_DWORD *)(a2 + 48) = v21;
          *(_QWORD *)(a2 + 56) = 0LL;
          RaidUnitCompleteIrpRequest((PIRP)a2);
          return;
        }
        if ( *(_BYTE *)v4 == 4 )
        {
          v14 = *(_QWORD *)(a2 + 8);
          v15 = (__int64 *)(*(_QWORD *)(a1 + 24) + 880LL);
          if ( !v14 )
            goto LABEL_27;
          if ( *(_QWORD *)(a1 + 24) == -880LL )
            goto LABEL_27;
          v16 = *v15;
          if ( !*v15 )
            goto LABEL_27;
          v17 = *(_QWORD *)(v16 + 8);
          if ( !v17 )
            goto LABEL_27;
          if ( *(int *)(*(_QWORD *)(a1 + 24) + 908LL) >= 3 )
          {
            v18 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v17 + 240);
            if ( v18 )
            {
              v18(v16, *(_QWORD *)(a2 + 8), 0LL);
              goto LABEL_27;
            }
          }
          LOBYTE(v13) = 1;
          v26 = 0LL;
          goto LABEL_66;
        }
      }
      v21 = -1073741637;
      goto LABEL_43;
    }
    if ( StorEtwLoggingEnabled )
    {
      v8 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        PerformanceCounter.QuadPart = 0LL;
        goto LABEL_12;
      }
      if ( !UseQPCTime )
        goto LABEL_11;
      v8 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v8 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_12:
      QpcTimeStamp = PerformanceCounter.QuadPart;
      goto LABEL_13;
    }
LABEL_11:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_12;
  }
  v25 = 0;
  if ( (unsigned __int8)(*(_BYTE *)v4 - 3) <= 1u )
    v25 = *(_DWORD *)(v4 + 8);
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
  v28 = *(_QWORD *)(a1 + 32);
  v29 = v27;
  if ( *(_QWORD *)(v28 + 48) == v28 + 48 )
  {
    v30 = *(_DWORD *)(v28 + 4);
    if ( v30 < 8 && *(int *)(v28 + 8) < 0x40000 )
    {
      *(_DWORD *)(v28 + 4) = v30 + 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) += v25;
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v29);
      goto LABEL_2;
    }
  }
  if ( (int)IoGetIoAttributionHandle(a2, &v36) >= 0 )
    RaUnitAttributedIoQueued(v31, a2, v36);
  v32 = (__int64 *)(a2 + 168);
  v33 = *(_QWORD *)(a1 + 32) + 48LL;
  v34 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 56LL);
  if ( *v34 != (__int64 *)v33 )
    __fastfail(3u);
  v32[1] = (__int64)v34;
  *v32 = v33;
  *v34 = v32;
  *(_QWORD *)(v33 + 8) = v32;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v29);
}
