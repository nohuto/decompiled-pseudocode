/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x140351020
 * Callers:
 *     PpmPerfAction @ 0x140351770 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140351B20 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     PpmConvertTimeTo @ 0x14032D92C (PpmConvertTimeTo.c)
 *     PpmSnapPerformanceAccumulation @ 0x140350130 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140351630 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140448064 (PpmHvSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
  __int64 v19; // r9
  LONGLONG v20; // rax
  LONGLONG v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  bool v27; // zf
  const EVENT_DESCRIPTOR *v28; // r15
  __int64 v29; // r9
  LARGE_INTEGER v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  unsigned int v33; // r8d
  __int64 v34; // rsi
  unsigned __int64 v35; // r11
  unsigned int i; // r10d
  __int64 LowPart; // r14
  __int64 v38; // r9
  LONGLONG v39; // rdx
  ULONGLONG v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r11
  LONGLONG v44; // r15
  ULONG v45; // ebx
  __int64 v46; // rsi
  __int64 v47; // r14
  unsigned int k; // r10d
  LONGLONG v49; // rdx
  LONGLONG v50; // rdx
  ULONGLONG v51; // rcx
  __int64 *v52; // rax
  int v53; // [rsp+40h] [rbp-59h] BYREF
  __int64 v54; // [rsp+48h] [rbp-51h] BYREF
  LONGLONG *v55; // [rsp+50h] [rbp-49h]
  ULONGLONG v56; // [rsp+58h] [rbp-41h] BYREF
  int v57; // [rsp+60h] [rbp-39h] BYREF
  int v58; // [rsp+68h] [rbp-31h] BYREF
  unsigned __int64 j; // [rsp+70h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-19h] BYREF
  int *v61; // [rsp+90h] [rbp-9h]
  __int64 v62; // [rsp+98h] [rbp-1h]
  ULONGLONG *v63; // [rsp+A0h] [rbp+7h]
  __int64 v64; // [rsp+A8h] [rbp+Fh]
  __int64 *v65; // [rsp+B0h] [rbp+17h]
  __int64 v66; // [rsp+B8h] [rbp+1Fh]

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
    v55 = (LONGLONG *)v11;
    result = PpmSnapPerformanceAccumulation(v11, 0, v12, 1, v3 + 96, v9);
  }
  else
  {
    v55 = 0LL;
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
      v18 = v55;
      if ( v55 && !v12 )
      {
        PpmPerfCheckForIllegalProcessorThrottle(v55, v14);
        v18 = v55;
        v20 = v55[4406];
        v21 = v55[4407];
        if ( v20 && v21 && *(_QWORD *)(v20 + 416) )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v21 + 8), PpmCheckTime, 0LL, v19);
          v18 = v55;
        }
        v14 = v3 + 96;
      }
      if ( v17 )
      {
        v22 = *(_QWORD *)(v14 + 24) - *(_QWORD *)(v3 + 184);
        v23 = (*(_QWORD *)(v14 + 32) - *(_QWORD *)(v3 + 192)) / v17;
        v24 = v22 / v17;
        if ( *(_QWORD *)a1 )
          v25 = *(unsigned int *)(*(_QWORD *)a1 + 448LL);
        else
          v25 = *((unsigned int *)v18 + 17);
        j = (unsigned int)v25;
        v26 = v22 * v25 / 0x64 / v17;
        if ( (_DWORD)v23 != *(_DWORD *)(v3 + 224) || (_DWORD)v24 != *(_DWORD *)(v3 + 228) )
        {
          v27 = *(_BYTE *)(a1 + 68) == 0;
          LODWORD(v54) = v26;
          v58 = v24;
          v57 = v23;
          v53 = 0;
          if ( v27 )
          {
            v28 = (const EVENT_DESCRIPTOR *)PPM_ETW_DELIVERED_PERF_CHANGE_HV;
            v53 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
            *(_QWORD *)&UserData.Size = 4LL;
          }
          else
          {
            v28 = &PPM_ETW_DELIVERED_PERF_CHANGE;
            LOWORD(v53) = *(unsigned __int8 *)(a1 - 35040);
            BYTE2(v53) = *(_BYTE *)(a1 - 35039);
            *(_QWORD *)&UserData.Size = 3LL;
          }
          UserData.Ptr = (ULONGLONG)&v53;
          if ( PpmEtwRegistered )
          {
            if ( PpmEtwHandle
              && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, v28->Level, v28->Keyword)
               || *(_WORD *)(v29 + 102)
               && EtwpLevelKeywordEnabled(*(_QWORD *)(v29 + 40) + 96LL, v28->Level, v28->Keyword)) )
            {
              v56 = PpmConvertTimeTo(v16, 0xF4240uLL);
              v61 = &v57;
              v63 = &v56;
              v62 = 4LL;
              v64 = 8LL;
              v66 = 4LL;
              if ( v28 == &PPM_ETW_DELIVERED_PERF_CHANGE )
                v52 = (__int64 *)&v58;
              else
                v52 = &v54;
              v65 = v52;
              EtwWriteEx(PpmEtwHandle, v28, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
        if ( *(_BYTE *)(a1 + 68) )
        {
          v30 = *v9;
          v31 = 47LL;
          v56 = (unsigned int)v26;
          if ( (unsigned int)v26 / 0x64 < 0x2F )
            v31 = (unsigned int)v26 / 0x64;
          v32 = v30.QuadPart - *v10;
          v33 = 0;
          v54 = (unsigned int)v31;
          v34 = *(_QWORD *)(v3 + 8 * v31 + 1016);
          do
          {
            while ( 1 )
            {
              v35 = 0LL;
              for ( i = 0; i < 2; ++i )
              {
                if ( v9[6].LowPart )
                {
                  LowPart = v9[6].LowPart;
                  v38 = v9[6].LowPart * (i + 2 * v33);
                  do
                  {
                    v39 = v9[v38 + 7].QuadPart - v10[v38 + 7];
                    v38 = (unsigned int)(v38 + 1);
                    v35 += v39;
                    --LowPart;
                  }
                  while ( LowPart );
                }
              }
              if ( v35 >= v32 )
                v32 = 0LL;
              else
                v32 -= v35;
              v40 = v35 * v56 / j;
              if ( v33 )
                break;
              v42 = v54;
              v34 += v40;
              *(_QWORD *)(v3 + 8 * v54 + 248) += v40;
              v33 = 1;
              *(_QWORD *)(v3 + 8 * v42 + 1016) = v34;
            }
            if ( v33 == 2 || v33 - 5 <= 1 )
            {
              v41 = v54;
              *(_QWORD *)(v3 + 8 * v54 + 632) += v40;
            }
            else
            {
              v41 = v54;
            }
            v34 += v40;
            ++v33;
            *(_QWORD *)(v3 + 8 * v41 + 1016) = v34;
          }
          while ( v33 < 7 );
          if ( v32 )
          {
            *(_QWORD *)(v3 + 8 * v41 + 248) += v32;
            *(_QWORD *)(v3 + 8 * v41 + 1016) = v34 + v32;
          }
          if ( PpmHeteroHgsParkingEnabled )
          {
            v43 = 0LL;
            v44 = v55[4428];
            v56 = v55[4427];
            for ( j = v44; (unsigned int)v43 < PpmHeteroWorkloadClasses; v43 = (unsigned int)(v43 + 1) )
            {
              v45 = v9[6].LowPart;
              v46 = 0LL;
              v47 = 0LL;
              for ( k = 0; k < 7; ++k )
              {
                v49 = v9[(unsigned int)v43 + 7 + v45 * 2 * k].QuadPart - v10[(unsigned int)v43 + 7 + v45 * 2 * k];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k] - 3) > 1 )
                  v47 += v49;
                else
                  v46 += v49;
                v50 = v9[(unsigned int)v43 + 7 + v45 * (2 * k + 1)].QuadPart
                    - v10[(unsigned int)v43 + 7 + v45 * (2 * k + 1)];
                if ( (unsigned int)(KiDynamicHeteroCpuPolicy[2 * k + 1] - 3) > 1 )
                  v47 += v50;
                else
                  v46 += v50;
              }
              v51 = v56;
              *(_QWORD *)(j + 8 * v43 + 8) = v47;
              *(_QWORD *)(v51 + 8 * v43 + 8) = v46;
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
