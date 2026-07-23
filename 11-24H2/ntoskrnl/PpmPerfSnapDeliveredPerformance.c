/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x1402AFD50
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1402AF8B0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x1402AFC80 (PpmPerfAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x14036E610 (PpmSnapPerformanceAccumulation.c)
 *     PpmConvertTimeTo @ 0x140370A00 (PpmConvertTimeTo.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140440784 (PpmHvSnapPerformanceAccumulation.c)
 *     Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D0050 (Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(__int64 a1, char a2, int a3)
{
  _QWORD *v3; // r13
  char result; // al
  bool v8; // zf
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  unsigned int *v11; // rdi
  bool v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r9
  unsigned int v21; // ecx
  char v22; // r14
  REGHANDLE v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  REGHANDLE v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r10
  __int64 v35; // rcx
  unsigned __int64 v36; // r15
  const EVENT_DESCRIPTOR *v37; // r14
  int *v38; // rax
  unsigned int v39; // ebx
  unsigned __int64 v40; // r12
  unsigned int v41; // r14d
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // rbx
  unsigned int i; // r10d
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // r13
  __int64 v56; // rax
  _QWORD *v57; // r11
  __int64 v58; // r12
  __int64 v59; // r11
  __int64 v60; // r13
  unsigned int v61; // r15d
  __int64 v62; // r9
  __int64 v63; // r10
  unsigned int k; // r8d
  int v65; // ebx
  __int64 v66; // rdx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _OWORD *v69; // rcx
  unsigned int Number; // [rsp+40h] [rbp-69h] BYREF
  __int64 v71; // [rsp+48h] [rbp-61h] BYREF
  int v72; // [rsp+50h] [rbp-59h] BYREF
  __int64 v73; // [rsp+58h] [rbp-51h]
  _QWORD *v74; // [rsp+60h] [rbp-49h]
  unsigned __int64 v75; // [rsp+68h] [rbp-41h] BYREF
  __int64 j; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v77; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-29h]
  _OWORD *v79; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-19h] BYREF
  int *v81; // [rsp+A0h] [rbp-9h]
  __int64 v82; // [rsp+A8h] [rbp-1h]
  __int64 *v83; // [rsp+B0h] [rbp+7h]
  __int64 v84; // [rsp+B8h] [rbp+Fh]
  int *v85; // [rsp+C0h] [rbp+17h]
  __int64 v86; // [rsp+C8h] [rbp+1Fh]

  v3 = *(_QWORD **)(a1 + 16);
  v74 = v3;
  if ( !v3 )
    return 1;
  v8 = *(_BYTE *)(a1 + 68) == 0;
  v9 = (__int64)(v3 + 12);
  v10 = (_QWORD *)v3[27];
  v11 = (unsigned int *)v3[19];
  v79 = v3 + 12;
  if ( v8 )
  {
    v73 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      result = PpmHvSnapPerformanceAccumulation(a1, 0, a3, v9, (__int64)v11);
      if ( !a2 )
        break;
      LODWORD(v9) = (_DWORD)v3 + 96;
      if ( result )
        goto LABEL_10;
    }
  }
  else
  {
    v12 = a1 - 35248 != (_QWORD)KeGetCurrentPrcb();
    v73 = a1 - 35248;
    result = PpmSnapPerformanceAccumulation((int)a1 - 35248, 0, v12, 1, v9, v11);
    v3 = v74;
  }
  if ( result )
  {
LABEL_10:
    v14 = v3[12];
    v15 = v3[20];
    if ( v14 <= v15 )
      return 0;
    v16 = v3[13] - v3[21];
    v78 = v14 - v15;
    if ( v16 > v14 - v15 && v12 )
    {
      return 0;
    }
    else
    {
      if ( v73 )
      {
        v8 = !v12;
        v17 = v73;
        if ( v8 )
        {
          v18 = *(_QWORD *)(v73 + 35248);
          v19 = *(_QWORD *)(v73 + 35256);
          v75 = 0LL;
          if ( PopProcessorThrottleLogInterval && v18 && v19 && *(_QWORD *)(v18 + 320) && *(_BYTE *)(v73 + 35128) )
          {
            guard_dispatch_icall_no_overrides(&v75, v13);
            if ( *(_DWORD *)(v19 + 80) >= *(_DWORD *)(v18 + 456) )
            {
              if ( *(_BYTE *)(v73 + 35136) )
              {
                if ( *(_QWORD *)(v73 + 35144) != v75 )
                {
                  v21 = *(_DWORD *)(v73 + 35132) + 1;
                  *(_DWORD *)(v73 + 35132) = v21;
                  if ( !(v21 % PopProcessorThrottleLogInterval) || v21 == 1 )
                  {
                    LOBYTE(v20) = 1;
                    v77 = v75;
                    v22 = 1;
                    Number = KeGetPcr()->Prcb.Number;
                    if ( !PopDiagHandleRegistered
                      || (v23 = PopDiagHandle) == 0
                      || ((v24 = *(_QWORD *)(PopDiagHandle + 32), !*(_DWORD *)(v24 + 96))
                       || (v25 = *(_BYTE *)(v24 + 100), v25 < 3u) && v25
                       || (*(_QWORD *)(v24 + 112) & 0x2000000000000020LL) == 0
                       || (*(_QWORD *)(v24 + 120) & 0x2000000000000020LL) != *(_QWORD *)(v24 + 120))
                      && (!*(_WORD *)(PopDiagHandle + 102)
                       || (LOBYTE(v23) = 3,
                           !(unsigned __int8)EtwpLevelKeywordEnabled(
                                               *(_QWORD *)(PopDiagHandle + 40) + 96LL,
                                               v23,
                                               0x2000000000000020LL,
                                               v20))) )
                    {
                      LOBYTE(v20) = 0;
                    }
                    if ( !PopDiagHandleRegistered
                      || (v26 = PopDiagHandle) == 0
                      || ((v27 = *(_QWORD *)(PopDiagHandle + 32), !*(_DWORD *)(v27 + 96))
                       || (v28 = *(_BYTE *)(v27 + 100), v28 < 3u) && v28
                       || (*(_QWORD *)(v27 + 112) & 0x1000000000000020LL) == 0
                       || (*(_QWORD *)(v27 + 120) & 0x1000000000000020LL) != *(_QWORD *)(v27 + 120))
                      && (!*(_WORD *)(PopDiagHandle + 102)
                       || (LOBYTE(v26) = 3,
                           !(unsigned __int8)EtwpLevelKeywordEnabled(
                                               *(_QWORD *)(PopDiagHandle + 40) + 96LL,
                                               v26,
                                               0x1000000000000020LL,
                                               v20))) )
                    {
                      v22 = 0;
                    }
                    if ( (_BYTE)v20 || v22 )
                    {
                      *(_QWORD *)&UserData.Size = 4LL;
                      UserData.Ptr = (ULONGLONG)&Number;
                      v82 = 8LL;
                      v81 = (int *)&v77;
                      v29 = *(_QWORD *)(v17 + 35152);
                      if ( v29 )
                        v30 = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - v29) / 10000000;
                      else
                        LODWORD(v30) = 0;
                      v72 = v30;
                      v83 = (__int64 *)&v72;
                      v85 = &PopProcessorThrottleLogInterval;
                      *(_QWORD *)(v17 + 35152) = MEMORY[0xFFFFF78000000320];
                      v84 = 4LL;
                      v86 = 4LL;
                      if ( (_BYTE)v20 )
                        EtwWriteEx(
                          PopDiagHandle,
                          &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          4u,
                          &UserData);
                      if ( v22 )
                        EtwWriteEx(
                          PopDiagHandle,
                          &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          4u,
                          &UserData);
                    }
                  }
                }
              }
              else
              {
                *(_BYTE *)(v73 + 35136) = 1;
              }
            }
            else
            {
              *(_BYTE *)(v73 + 35136) = 0;
            }
            *(_QWORD *)(v17 + 35144) = v75;
          }
          v31 = *(_QWORD *)(v17 + 35248);
          v32 = *(_QWORD *)(v17 + 35256);
          if ( v31 && v32 && *(_QWORD *)(v31 + 416) )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v32 + 8), PpmCheckTime);
        }
      }
      else
      {
        v17 = 0LL;
      }
      if ( v16 )
      {
        v33 = v74[15] - v74[23];
        v34 = (v74[16] - v74[24]) / v16;
        if ( *(_QWORD *)a1 )
          v35 = *(unsigned int *)(*(_QWORD *)a1 + 448LL);
        else
          v35 = *(unsigned int *)(v17 + 68);
        v77 = (unsigned int)v35;
        v36 = v33 * v35 / 0x64 / v16;
        if ( __PAIR64__(v33 / v16, v34) != v74[28] )
        {
          LODWORD(v71) = v33 * v35 / 0x64 / v16;
          LODWORD(v75) = v33 / v16;
          v72 = v34;
          Number = 0;
          if ( *(_BYTE *)(a1 + 68) )
          {
            v37 = &PPM_ETW_DELIVERED_PERF_CHANGE;
            LOWORD(Number) = *(unsigned __int8 *)(a1 - 35040);
            BYTE2(Number) = *(_BYTE *)(a1 - 35039);
            *(_QWORD *)&UserData.Size = 3LL;
          }
          else
          {
            v37 = &PPM_ETW_DELIVERED_PERF_CHANGE_HV;
            Number = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
            *(_QWORD *)&UserData.Size = 4LL;
          }
          UserData.Ptr = (ULONGLONG)&Number;
          if ( PpmEtwRegistered )
          {
            if ( EtwEventEnabled(PpmEtwHandle, v37) )
            {
              j = PpmConvertTimeTo(v78, 1000000LL);
              v81 = &v72;
              v83 = &j;
              v38 = (int *)&v75;
              v82 = 4LL;
              v84 = 8LL;
              v86 = 4LL;
              if ( v37 != &PPM_ETW_DELIVERED_PERF_CHANGE )
                v38 = (int *)&v71;
              v85 = v38;
              EtwWriteEx(PpmEtwHandle, v37, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
        if ( *(_BYTE *)(a1 + 68) )
        {
          v39 = 47;
          if ( (unsigned int)v36 / 0x64 < 0x2F )
            v39 = (unsigned int)v36 / 0x64;
          v40 = *(_QWORD *)v11 - *v10;
          if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline)() )
            Number = *(_DWORD *)(v73 + 68);
          else
            Number = 0;
          v41 = 0;
          v42 = Number;
          v71 = v39;
          do
          {
            while ( 1 )
            {
              v43 = 0LL;
              for ( i = 0; i < 2; ++i )
              {
                if ( v11[12] )
                {
                  v45 = v11[12];
                  v46 = v11[12] * (i + 2 * v41);
                  do
                  {
                    v47 = *(_QWORD *)&v11[2 * v46 + 14] - v10[v46 + 7];
                    v46 = (unsigned int)(v46 + 1);
                    v43 += v47;
                    --v45;
                  }
                  while ( v45 );
                }
              }
              if ( v43 >= v40 )
                v40 = 0LL;
              else
                v40 -= v43;
              if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline)() )
              {
                v50 = v42;
                if ( v43 && (_DWORD)v42 && v42 != (unsigned int)v36 )
                {
                  j = 0LL;
                  if ( is_mul_ok(v43, (unsigned int)v36) )
                  {
                    v48 = v43 * (unsigned __int128)(unsigned int)v36 % v42;
                    v43 = v43 * (unsigned __int128)(unsigned int)v36 / v42;
                  }
                  else
                  {
                    v48 = (unsigned int)v36 * (v43 % v42) % v42;
                    v49 = (unsigned int)v36 * (v43 / v42);
                    v43 = v49 + (unsigned int)v36 * (v43 % v42) / v42;
                  }
                }
              }
              else
              {
                v48 = v43 * (unsigned int)v36 % v77;
                v43 = v43 * (unsigned int)v36 / v77;
              }
              if ( v41 )
                break;
              v51 = v71;
              v52 = v74;
              v74[v71 + 31] += v43;
              v52[v51 + 127] += v43;
              v41 = 1;
            }
            if ( v41 == 2 || v41 - 5 <= 1 )
            {
              v53 = v71;
              v54 = v74;
              v74[v71 + 79] += v43;
            }
            else
            {
              v53 = v71;
              v54 = v74;
            }
            v54[v53 + 127] += v43;
            ++v41;
          }
          while ( v41 < 7 );
          v55 = v73;
          if ( v40 )
          {
            if ( (unsigned int)Feature_Servicing_PowersnapCyclesFix__private_IsEnabledDeviceUsageNoInline(
                                 v54,
                                 v48,
                                 v49,
                                 v50) )
              v40 = PpmConvertTime(v40, Number, (unsigned int)v36);
            v56 = v71;
            v57 = v74;
            v74[v71 + 31] += v40;
            v57[v56 + 127] += v40;
          }
          if ( PpmHeteroHgsParkingEnabled )
          {
            v58 = *(_QWORD *)(v55 + 35424);
            v59 = 0LL;
            v60 = *(_QWORD *)(v55 + 35416);
            for ( j = v58; (unsigned int)v59 < PpmHeteroWorkloadClasses; v59 = (unsigned int)(v59 + 1) )
            {
              v61 = v11[12];
              v62 = 0LL;
              v63 = 0LL;
              for ( k = 0; k < 7; ++k )
              {
                v65 = 2 * k;
                v66 = *(_QWORD *)&v11[2 * (unsigned int)v59 + 14 + 2 * v65 * v61]
                    - v10[(unsigned int)v59 + 7 + v65 * v61];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k] - 3) <= 1 )
                  v62 += v66;
                else
                  v63 += v66;
                v67 = *(_QWORD *)&v11[2 * (unsigned int)v59 + 14 + 2 * v61 * (v65 + 1)]
                    - v10[(unsigned int)v59 + 7 + v61 * (v65 + 1)];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k + 1] - 3) <= 1 )
                  v62 += v67;
                else
                  v63 += v67;
              }
              *(_QWORD *)(j + 8 * v59 + 8) = v63;
              *(_QWORD *)(v60 + 8 * v59 + 8) = v62;
            }
          }
        }
      }
      v68 = v74;
      v69 = v79;
      *((_OWORD *)v74 + 10) = *v79;
      *((_OWORD *)v68 + 11) = v69[1];
      *((_OWORD *)v68 + 12) = v69[2];
      v68[26] = *((_QWORD *)v69 + 6);
      memmove(v10, v11, (int)(112 * v11[12] + 56));
      return 1;
    }
  }
  return result;
}
