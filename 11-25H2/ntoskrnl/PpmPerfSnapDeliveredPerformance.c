/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x1403B0220
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1403AFD80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x1403B0150 (PpmPerfAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x14031BF40 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x1403B0830 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     PpmConvertTimeTo @ 0x1403B1DAC (PpmConvertTimeTo.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1403ECC24 (PpmHvSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(__int64 a1, char a2, int a3)
{
  __int64 v3; // r13
  char result; // al
  int v8; // edx
  LARGE_INTEGER *v9; // rdi
  _QWORD *v10; // r12
  LARGE_INTEGER *v11; // rcx
  unsigned __int8 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  LONGLONG *v18; // r11
  LONGLONG v19; // rax
  LONGLONG v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  bool v26; // zf
  const EVENT_DESCRIPTOR *v27; // r15
  __int64 v28; // r9
  LARGE_INTEGER v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  unsigned int v32; // r8d
  __int64 v33; // rsi
  unsigned __int64 v34; // r9
  unsigned int i; // r11d
  __int64 LowPart; // r15
  __int64 v37; // r10
  LONGLONG v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // r10
  __int64 v42; // r11
  LONGLONG v43; // r15
  ULONG v44; // ebx
  __int64 v45; // rsi
  __int64 v46; // r14
  unsigned int k; // r10d
  LONGLONG v48; // rdx
  LONGLONG v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rax
  int v52; // [rsp+40h] [rbp-59h] BYREF
  __int64 v53; // [rsp+48h] [rbp-51h] BYREF
  LONGLONG *v54; // [rsp+50h] [rbp-49h]
  __int64 v55; // [rsp+58h] [rbp-41h] BYREF
  int v56; // [rsp+60h] [rbp-39h] BYREF
  int v57; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 j; // [rsp+70h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  int *v60; // [rsp+90h] [rbp-9h]
  __int64 v61; // [rsp+98h] [rbp-1h]
  __int64 *v62; // [rsp+A0h] [rbp+7h]
  __int64 v63; // [rsp+A8h] [rbp+Fh]
  __int64 *v64; // [rsp+B0h] [rbp+17h]
  __int64 v65; // [rsp+B8h] [rbp+1Fh]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 1;
  v8 = v3 + 96;
  v9 = *(LARGE_INTEGER **)(v3 + 152);
  v10 = *(_QWORD **)(v3 + 216);
  if ( *(_BYTE *)(a1 + 68) )
  {
    v11 = (LARGE_INTEGER *)(a1 - 35248);
    v12 = v11 != (LARGE_INTEGER *)KeGetCurrentPrcb();
    v54 = (LONGLONG *)v11;
    result = PpmSnapPerformanceAccumulation(v11, 0, v12, 1, v3 + 96, v9);
  }
  else
  {
    v54 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      result = PpmHvSnapPerformanceAccumulation(a1, 0, a3, v8, (__int64)v9);
      if ( !a2 )
        break;
      v8 = v3 + 96;
      if ( result )
        goto LABEL_6;
    }
  }
  if ( result )
  {
LABEL_6:
    v13 = *(_QWORD *)(v3 + 96);
    v14 = v3 + 96;
    v15 = *(_QWORD *)(v3 + 160);
    if ( v13 <= v15 )
      return 0;
    v16 = v13 - v15;
    v17 = *(_QWORD *)(v3 + 104) - *(_QWORD *)(v3 + 168);
    if ( v17 > v16 && v12 )
    {
      return 0;
    }
    else
    {
      v18 = v54;
      if ( v54 && !v12 )
      {
        PpmPerfCheckForIllegalProcessorThrottle(v54, v14);
        v18 = v54;
        v19 = v54[4406];
        v20 = v54[4407];
        if ( v19 && v20 && *(_QWORD *)(v19 + 416) )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v20 + 8), PpmCheckTime);
          v18 = v54;
        }
        v14 = v3 + 96;
      }
      if ( v17 )
      {
        v21 = *(_QWORD *)(v14 + 24) - *(_QWORD *)(v3 + 184);
        v22 = (*(_QWORD *)(v14 + 32) - *(_QWORD *)(v3 + 192)) / v17;
        v23 = v21 / v17;
        if ( *(_QWORD *)a1 )
          v24 = *(unsigned int *)(*(_QWORD *)a1 + 448LL);
        else
          v24 = *((unsigned int *)v18 + 17);
        j = (unsigned int)v24;
        v25 = v21 * v24 / 0x64 / v17;
        if ( (_DWORD)v22 != *(_DWORD *)(v3 + 224) || (_DWORD)v23 != *(_DWORD *)(v3 + 228) )
        {
          v26 = *(_BYTE *)(a1 + 68) == 0;
          LODWORD(v53) = v25;
          v57 = v23;
          v56 = v22;
          v52 = 0;
          if ( v26 )
          {
            v27 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
            v52 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
            *(_QWORD *)&UserData.Size = 4LL;
          }
          else
          {
            v27 = &PPM_ETW_DELIVERED_PERF_CHANGE;
            LOWORD(v52) = *(unsigned __int8 *)(a1 - 35040);
            BYTE2(v52) = *(_BYTE *)(a1 - 35039);
            *(_QWORD *)&UserData.Size = 3LL;
          }
          UserData.Ptr = (ULONGLONG)&v52;
          if ( PpmEtwRegistered )
          {
            if ( PpmEtwHandle
              && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, v27->Level, v27->Keyword)
               || *(_BYTE *)(v28 + 101)
               && EtwpLevelKeywordEnabled(*(_QWORD *)(v28 + 40) + 96LL, v27->Level, v27->Keyword)) )
            {
              v55 = PpmConvertTimeTo(v16, 1000000LL);
              v60 = &v56;
              v62 = &v55;
              v61 = 4LL;
              v63 = 8LL;
              v65 = 4LL;
              if ( v27 == &PPM_ETW_DELIVERED_PERF_CHANGE )
                v51 = (__int64 *)&v57;
              else
                v51 = &v53;
              v64 = v51;
              EtwWriteEx(PpmEtwHandle, v27, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
        if ( *(_BYTE *)(a1 + 68) )
        {
          v29 = *v9;
          v30 = 47LL;
          v55 = (unsigned int)v25;
          if ( (unsigned int)v25 / 0x64 < 0x2F )
            v30 = (unsigned int)v25 / 0x64;
          v31 = v29.QuadPart - *v10;
          v32 = 0;
          v53 = (unsigned int)v30;
          v33 = *(_QWORD *)(v3 + 8 * v30 + 1016);
          do
          {
            while ( 1 )
            {
              v34 = 0LL;
              for ( i = 0; i < 2; ++i )
              {
                if ( v9[6].LowPart )
                {
                  LowPart = v9[6].LowPart;
                  v37 = v9[6].LowPart * (i + 2 * v32);
                  do
                  {
                    v38 = v9[v37 + 7].QuadPart - v10[v37 + 7];
                    v37 = (unsigned int)(v37 + 1);
                    v34 += v38;
                    --LowPart;
                  }
                  while ( LowPart );
                }
              }
              if ( v34 >= v31 )
                v31 = 0LL;
              else
                v31 -= v34;
              v39 = v34 * v55 / j;
              if ( v32 )
                break;
              v41 = v53;
              v33 += v39;
              *(_QWORD *)(v3 + 8 * v53 + 248) += v39;
              v32 = 1;
              *(_QWORD *)(v3 + 8 * v41 + 1016) = v33;
            }
            if ( v32 == 2 || v32 - 5 <= 1 )
            {
              v40 = v53;
              *(_QWORD *)(v3 + 8 * v53 + 632) += v39;
            }
            else
            {
              v40 = v53;
            }
            v33 += v39;
            ++v32;
            *(_QWORD *)(v3 + 8 * v40 + 1016) = v33;
          }
          while ( v32 < 7 );
          if ( v31 )
          {
            *(_QWORD *)(v3 + 8 * v40 + 248) += v31;
            *(_QWORD *)(v3 + 8 * v40 + 1016) = v33 + v31;
          }
          if ( PpmHeteroHgsParkingEnabled )
          {
            v42 = 0LL;
            v43 = v54[4428];
            v55 = v54[4427];
            for ( j = v43; (unsigned int)v42 < PpmHeteroWorkloadClasses; v42 = (unsigned int)(v42 + 1) )
            {
              v44 = v9[6].LowPart;
              v45 = 0LL;
              v46 = 0LL;
              for ( k = 0; k < 7; ++k )
              {
                v48 = v9[(unsigned int)v42 + 7 + v44 * 2 * k].QuadPart - v10[(unsigned int)v42 + 7 + v44 * 2 * k];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k] - 3) > 1 )
                  v46 += v48;
                else
                  v45 += v48;
                v49 = v9[(unsigned int)v42 + 7 + v44 * (2 * k + 1)].QuadPart
                    - v10[(unsigned int)v42 + 7 + v44 * (2 * k + 1)];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k + 1] - 3) > 1 )
                  v46 += v49;
                else
                  v45 += v49;
              }
              v50 = v55;
              *(_QWORD *)(j + 8 * v42 + 8) = v46;
              *(_QWORD *)(v50 + 8 * v42 + 8) = v45;
            }
          }
        }
      }
      *(_OWORD *)(v3 + 160) = *(_OWORD *)(v3 + 96);
      *(_OWORD *)(v3 + 176) = *(_OWORD *)(v3 + 112);
      *(_OWORD *)(v3 + 192) = *(_OWORD *)(v3 + 128);
      *(_QWORD *)(v3 + 208) = *(_QWORD *)(v3 + 144);
      memmove(v10, v9, 112 * v9[6].LowPart + 56);
      return 1;
    }
  }
  return result;
}
