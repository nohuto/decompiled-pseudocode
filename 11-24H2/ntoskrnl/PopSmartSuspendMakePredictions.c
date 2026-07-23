/*
 * XREFs of PopSmartSuspendMakePredictions @ 0x140ABAB98
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1406F3398 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x140757680 (PopPowerAggregatorDozeTimerWorker.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceSmartSuspendPrediction @ 0x140756168 (PopDiagTraceSmartSuspendPrediction.c)
 *     PopUmpoQuerySmartSuspendPrediction @ 0x14075BF3C (PopUmpoQuerySmartSuspendPrediction.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140A882C8 (PopIsDozeSupported.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

char __fastcall PopSmartSuspendMakePredictions(int a1)
{
  int v2; // ebx
  char result; // al
  __int64 v4; // rax
  char *v5; // rdi
  int v6; // r15d
  char IsDozeSupported; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  char v18; // r11
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // ebx
  _QWORD v23[10]; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v24[2]; // [rsp+78h] [rbp-39h] BYREF
  char v25; // [rsp+7Ah] [rbp-37h]
  int v26; // [rsp+80h] [rbp-31h]
  int v27; // [rsp+84h] [rbp-2Dh]
  __int64 v28; // [rsp+98h] [rbp-19h]
  unsigned __int64 v29; // [rsp+A0h] [rbp-11h]
  __int64 v30; // [rsp+A8h] [rbp-9h]
  unsigned __int64 v31; // [rsp+B0h] [rbp-1h]

  memset_0(v23, 0, 0x4CuLL);
  v2 = 0;
  memset_0(v24, 0, 0x60uLL);
  v30 = 0LL;
  v29 = -1LL;
  v31 = -1LL;
  result = SSHSupportIsPlatformAoAc();
  if ( result && dword_140F0B38C == 1 )
  {
    v4 = ((_BYTE)PopSmartSuspendQueueHead + 1) & 0xF;
    PopSmartSuspendQueueHead = ((_BYTE)PopSmartSuspendQueueHead + 1) & 0xF;
    v5 = (char *)&PopSmartSuspendDecisionQueue + 96 * v4;
    PopSmartSuspendDecision = (__int64)v5;
    memset_0(v5, 0, 0x60uLL);
    v6 = PopSmartSuspendPredictionId + 1;
    *((_QWORD *)v5 + 5) = -1LL;
    PopSmartSuspendPredictionId = v6;
    *((_QWORD *)v5 + 7) = -1LL;
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v23);
    IsDozeSupported = PopIsDozeSupported((__int64)v23);
    PopReleasePolicyLock(v9, v8, v10, v11, v23[0]);
    if ( (int)PopUmpoQuerySmartSuspendPrediction((__int64)v24, 0) < 0 )
    {
      v14 = 1;
LABEL_8:
      PopAcquirePolicyLock(v13, v12);
LABEL_33:
      *((_QWORD *)v5 + 3) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)v5 + 2) = v26;
      *((_DWORD *)v5 + 3) = v27;
      *((_DWORD *)v5 + 18) = v6;
      *((_DWORD *)v5 + 1) = v14;
      *((_DWORD *)v5 + 17) = a1;
      return PopDiagTraceSmartSuspendPrediction();
    }
    if ( IsDozeSupported )
    {
      if ( (int)PopUmpoQuerySmartSuspendPrediction((__int64)v24, 1) < 0 )
      {
        v14 = 2;
        goto LABEL_8;
      }
    }
    else
    {
      v2 = 4;
    }
    PopAcquirePolicyLock(v13, v12);
    if ( v6 == PopSmartSuspendPredictionId )
    {
      v15 = v28;
      v16 = v29;
      v17 = v31;
      if ( v24[0] )
      {
        if ( v28 + 9000000000LL <= v29 )
        {
          v18 = v25;
          if ( v25 && v30 + 72000000000LL > v31 )
          {
            v14 = v2 | 0x20;
          }
          else
          {
            if ( !v28 )
            {
              v16 = -1LL;
              v17 = -1LL;
            }
            v19 = v2 | 0x40;
            v20 = v30 & -(__int64)(v28 != 0);
            v21 = v20;
            if ( v28 )
              v19 = v2;
            v22 = v19;
            if ( v25 && v28 )
            {
              if ( v20 )
              {
                if ( v16 > v20 )
                {
                  v16 = -1LL;
                  if ( v28 + 9000000000LL < v20 )
                  {
                    v22 = v19 | 0x400;
                  }
                  else
                  {
                    v15 = 0LL;
                    v22 = v19 | 0x200;
                  }
                }
                else
                {
                  v21 = 0LL;
                  v17 = -1LL;
                  v22 = v19 | 0x100;
                }
              }
              else
              {
                v17 = -1LL;
                v22 = v19 | 0x80;
              }
            }
            v14 = v22 | 0x800;
            v5[1] = v24[0];
            v5[3] = v18;
            *((_QWORD *)v5 + 4) = v15;
            *((_QWORD *)v5 + 5) = v16;
            *((_QWORD *)v5 + 6) = v21;
            *((_QWORD *)v5 + 7) = v17;
          }
        }
        else
        {
          v14 = v2 | 0x10;
        }
      }
      else
      {
        v14 = v2 | 8;
      }
    }
    else
    {
      v14 = v2 | 0x80000000;
    }
    goto LABEL_33;
  }
  return result;
}
