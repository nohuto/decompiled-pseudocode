/*
 * XREFs of PopFxStopDeviceAccounting @ 0x1402B79AC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402B7DE8 (PopDiagTraceFxDeviceAccounting.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopFxPauseDeviceAccounting @ 0x1403A67DC (PopFxPauseDeviceAccounting.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140A55D28 (PopDiagTraceFxComponentAccounting.c)
 */

void __fastcall PopFxStopDeviceAccounting(unsigned __int64 a1)
{
  char v1; // r15
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  ULONG_PTR i; // rbx
  __int64 v6; // r13
  __int128 *v7; // r12
  KIRQL v8; // al
  char v9; // r14
  unsigned int j; // r14d
  KIRQL v11; // al
  char v12; // r12
  KIRQL v13; // al
  __int64 v14; // rbx
  __int64 v15; // rdi
  size_t v16; // rax
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+98h] [rbp-70h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B8h] [rbp-50h]
  __int128 v28; // [rsp+C8h] [rbp-40h]
  char v29[32]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  __int64 *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  _OWORD *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  _OWORD *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  _QWORD *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  __int64 *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  _OWORD v42[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v43; // [rsp+178h] [rbp+70h]
  _OWORD v44[2]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v45; // [rsp+1A0h] [rbp+98h]

  v17 = a1;
  memset_0(&v23[1], 0, 0x60uLL);
  v1 = 0;
  v21 = 0LL;
  if ( PopFxAccountingGroup )
  {
    v2 = 1;
    if ( PopFxAccountingGroup == 1 )
      PopFxPauseDeviceAccounting();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = KeAbPreAcquire(&PopFxDeviceListLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, 0LL, v4, &PopFxDeviceListLock);
    if ( v4 )
      *(_BYTE *)(v4 + 10) = 1;
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v6 = *(_QWORD *)(i + 48);
      if ( v6 )
      {
        if ( *(_QWORD *)(i + 1240) )
        {
          v7 = (__int128 *)(i + 1232);
        }
        else
        {
          DWORD1(v21) = 0;
          *((_QWORD *)&v21 + 1) = &SourceString;
          v16 = 2 * wcslen(&SourceString);
          v7 = &v21;
          if ( v16 >= 0xFFFE )
            LOWORD(v16) = -4;
          LOWORD(v21) = v16;
          WORD1(v21) = v16 + 2;
        }
        v18 = v7;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 640));
        if ( *(_DWORD *)(i + 656) )
        {
          v1 = 1;
          *(_OWORD *)&v23[1] = *(_OWORD *)(i + 672);
          v24 = *(_OWORD *)(i + 688);
          v25 = *(_OWORD *)(i + 704);
          v26 = *(_OWORD *)(i + 720);
          v27 = *(_OWORD *)(i + 736);
          v28 = *(_OWORD *)(i + 752);
          v9 = *(_DWORD *)(i + 652) < 5u;
        }
        else
        {
          v9 = 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(i + 640), v8);
        if ( v1 )
        {
          if ( v17 < 0x23C34600 || v23[1] < 0x989680uLL )
            v9 = 0;
          PopDiagTraceFxDeviceAccounting(v6, (unsigned int)&v23[1], (_DWORD)v7, v23[1], v9);
        }
        v1 = 0;
        for ( j = 0; j < *(_DWORD *)(i + 868); v1 = 0 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(i + 872) + 8LL * j);
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 200));
          if ( *(_DWORD *)(v19 + 216) )
          {
            v12 = 1;
            *(_OWORD *)&v23[1] = *(_OWORD *)(v19 + 232);
            v24 = *(_OWORD *)(v19 + 248);
            v25 = *(_OWORD *)(v19 + 264);
            v26 = *(_OWORD *)(v19 + 280);
            v27 = *(_OWORD *)(v19 + 296);
            v28 = *(_OWORD *)(v19 + 312);
            v1 = *(_DWORD *)(v19 + 212) != -1;
          }
          else
          {
            v12 = 0;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 200), v11);
          if ( v12 )
          {
            if ( v17 < 0x23C34600 || v23[1] < 0x989680uLL )
              v1 = 0;
            PopDiagTraceFxComponentAccounting(v6, *(_DWORD *)(v19 + 16), (unsigned int)&v23[1], (_DWORD)v18, v23[1], v1);
          }
          ++j;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    KeLeaveCriticalRegion();
    v13 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v14 = qword_140F0D950;
    v15 = qword_140F0D958;
    v42[0] = xmmword_140F0D960;
    v42[1] = xmmword_140F0D970;
    v43 = qword_140F0D980;
    v44[0] = xmmword_140F0D988;
    v44[1] = xmmword_140F0D998;
    v45 = qword_140F0D9A8;
    KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v13);
    if ( (unsigned int)dword_140E076F0 > 5 && !PopDiagFxAccountingTelemetryDisabled )
    {
      if ( (qword_140E07700 & 0x400000000000LL) == 0 || (qword_140E07708 & 0x400000000000LL) != qword_140E07708 )
        v2 = 0;
      if ( v2 )
      {
        v17 = PopWnfCsEnterScenarioId;
        v31 = 8LL;
        v30 = &v17;
        v33 = 8LL;
        v32 = &v22;
        v39 = 8LL;
        v34 = v42;
        v36 = v44;
        v38 = v23;
        v40 = &v20;
        v41 = 8LL;
        v22 = v14;
        v35 = 40LL;
        v37 = 40LL;
        v23[0] = v15;
        v20 = 0x1000000LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E076F0, byte_14004A741, 0LL, 0LL, 8, v29);
      }
    }
  }
}
