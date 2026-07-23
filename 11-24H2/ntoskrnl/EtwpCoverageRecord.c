/*
 * XREFs of EtwpCoverageRecord @ 0x1408DC9D4
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064DD30 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     EtwpCoverageAddToStringBuffer @ 0x14044D428 (EtwpCoverageAddToStringBuffer.c)
 *     EtwpCoverageValidateCP @ 0x14044D4CC (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404AE9A8 (TelemetryCoverageTableLocateInternal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1407AB074 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFlushPending @ 0x140A9A3F0 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageRecord(int **a1, __int64 a2)
{
  int v4; // r12d
  int v5; // esi
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  char *v9; // rsi
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int *v13; // rsi
  unsigned int *Internal; // r13
  int v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // rcx
  int *v18; // rcx
  const CHAR *v19; // rdx
  int *v20; // rcx
  const CHAR *v21; // rdx
  int v22; // r15d
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+4Ch] [rbp-B4h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36[2]; // [rsp+80h] [rbp-80h] BYREF
  int *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  _QWORD v45[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v46[16]; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v5 = 0;
  v23 = 0;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v24 = v6;
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v23) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v8, (__int64)&EtwpCoverageLock);
    if ( v9 )
      v9[10] = 1;
    v10 = *(_DWORD *)(a2 + 12);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    v11 = a1[2][6];
    if ( v10 < v11 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v11;
      v13 = (unsigned int *)a1[2];
      Internal = TelemetryCoverageTableLocateInternal(v13, v12);
      if ( *Internal == v15 )
      {
        v5 = 0;
        v4 = 1;
      }
      else
      {
        if ( v13[8] < *((_DWORD *)a1 + 8) )
        {
          v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v23);
          if ( !v5 )
          {
            EtwpCoverageFlushPending(a1);
            if ( (int)EtwpCoverageEnsureStringBuffer((__int64)a1) < 0 )
            {
              *(_DWORD *)(a2 + 12) = v10;
              _InterlockedIncrement(*a1 + 1);
              goto LABEL_8;
            }
            v5 = EtwpCoverageAddToStringBuffer((__int64)a1[5], *(const char **)a2, v23);
          }
          *Internal = *(_DWORD *)(a2 + 8);
          ++*((_DWORD *)a1 + 16);
          ++a1[2][8];
          if ( *((_DWORD *)a1 + 16) == 1 )
          {
            v16 = -10000LL * *((unsigned int *)a1 + 7);
            v17 = (__int64)(*a1 + 60);
            v35[0] = 0LL;
            v35[1] = -1LL;
            KeSetTimer2(v17, (LARGE_INTEGER)v16, 0LL, (__int64)v35);
          }
          goto LABEL_8;
        }
        _InterlockedIncrement(*a1 + 1);
        v5 = 0;
      }
    }
    else
    {
      v4 = 1;
      v5 = 0;
    }
LABEL_8:
    LODWORD(v6) = v24;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( !v4 && v5 && (unsigned int)dword_140E09218 > 5 && tlgKeywordOn((__int64)&dword_140E09218, 2LL) )
  {
    v18 = *a1;
    v19 = *(const CHAR **)a2;
    v25 = **a1;
    v37 = &v25;
    v38 = 4LL;
    v26 = v18[1];
    v39 = &v26;
    v40 = 4LL;
    v27 = v6 - v18[4];
    v41 = &v27;
    v42 = 4LL;
    v28 = v6 - v18[5];
    v43 = &v28;
    v44 = 4LL;
    tlgCreate1Sz_char((__int64)v45, v19);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09218, (unsigned __int8 *)&dword_140053C5C, 0LL, 0LL, 7u, v36);
  }
  if ( EtwpCoverageCoreTracingEnabled
    && (unsigned int)dword_140E09218 > 5
    && tlgKeywordOn((__int64)&dword_140E09218, 1LL) )
  {
    v20 = *a1;
    v21 = *(const CHAR **)a2;
    v29 = **a1;
    v37 = &v29;
    v38 = 4LL;
    v30 = v20[1];
    v39 = &v30;
    v40 = 4LL;
    v31 = v6 - v20[4];
    v41 = &v31;
    v42 = 4LL;
    v22 = v6 - v20[5];
    v43 = &v32;
    v45[0] = &v33;
    v45[2] = &v34;
    v32 = v22;
    v44 = 4LL;
    v33 = v5;
    v45[1] = 4LL;
    v34 = v4;
    v45[3] = 4LL;
    tlgCreate1Sz_char((__int64)v46, v21);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09218, (unsigned __int8 *)byte_140053CBD, 0LL, 0LL, 9u, v36);
  }
}
