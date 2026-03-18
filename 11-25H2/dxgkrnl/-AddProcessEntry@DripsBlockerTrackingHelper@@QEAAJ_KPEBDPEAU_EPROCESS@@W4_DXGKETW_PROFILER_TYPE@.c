/*
 * XREFs of ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402ED3B4
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402ED2D0 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     McTemplateK0qqsz_EtwWriteTransfer @ 0x14005984C (McTemplateK0qqsz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1402ED690 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402EDA78 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402EDAAC (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402EDF98 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        const char *a3,
        struct _EPROCESS *a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v10; // rcx
  DripsBlockerTrackingHelper *v11; // rcx
  SIZE_T v12; // r12
  unsigned int i; // edi
  __int64 v14; // r14
  __int64 j; // rsi
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  const wchar_t *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v25; // r14
  __int64 v26; // rcx
  __int128 v27; // xmm0
  char v28; // al
  __int128 v29; // xmm1
  SIZE_T Length; // [rsp+40h] [rbp-40h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-38h] BYREF
  __int128 v32; // [rsp+58h] [rbp-28h]
  char v33; // [rsp+68h] [rbp-18h]

  v5 = 0;
  *((_BYTE *)a1 + 302129) = 0;
  DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(a1);
  if ( !*((_BYTE *)a1 + 302080) )
    return 0LL;
  if ( !(unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(v10, a5) )
  {
    Length = 0LL;
    v33 = 0;
    Source2 = 0LL;
    v32 = 0LL;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v11, a3, a4, (char *)&Source2, 0x21u, &Length);
    v12 = Length;
    for ( i = 0; i < 0x40; ++i )
    {
      v14 = 4720LL * i;
      if ( *((_BYTE *)a1 + v14 + 104)
        && *(_QWORD *)((char *)a1 + v14) == a2
        && RtlCompareMemory((char *)a1 + v14 + 8, &Source2, v12) == v12 )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)((char *)a1 + v14 + 44); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)((char *)a1 + 72 * j + v14 + 172) == a5 )
            goto LABEL_13;
        }
      }
    }
    for ( i = 0; i < 0x40; ++i )
    {
      v25 = 4720LL * i;
      if ( *((_BYTE *)a1 + v25 + 104)
        && *(_QWORD *)((char *)a1 + v25) == a2
        && RtlCompareMemory((char *)a1 + v25 + 8, &Source2, v12) == v12 )
      {
        if ( *(_DWORD *)((char *)a1 + v25 + 44) >= 0x40u )
        {
          return (unsigned int)-2147483622;
        }
        else
        {
          _mm_lfence();
          j = *(unsigned int *)((char *)a1 + v25 + 44);
          *(_DWORD *)((char *)a1 + v25 + 44) = j + 1;
          *(_DWORD *)((char *)a1 + 72 * j + v25 + 172) = a5;
LABEL_13:
          v5 = 0;
LABEL_14:
          v16 = 4720LL * i;
          v17 = v16 + 72 * ((unsigned int)j + 2LL);
          v18 = ++*(_DWORD *)((char *)a1 + v17);
          v19 = v16 + 72LL * (unsigned int)j;
          ++*(_DWORD *)((char *)a1 + v19 + 148);
          *(_DWORD *)((char *)a1 + v19 + 176) += *((_BYTE *)a1 + 302104) != 0;
          if ( v18 == 1 )
          {
            if ( !*((_BYTE *)a1 + v19 + 112) && !*((_BYTE *)a1 + 302104) )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              *((_BYTE *)a1 + v19 + 112) = 1;
              *(LARGE_INTEGER *)((char *)a1 + v19 + 120) = PerformanceCounter;
            }
            if ( bTracingEnabled )
            {
              LODWORD(Length) = 0;
              v21 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                                       *(unsigned int *)((char *)a1 + v19 + 172),
                                       &Length);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                McTemplateK0qqsz_EtwWriteTransfer(
                  (__int64)a1 + v16 + 8,
                  v22,
                  v23,
                  i,
                  j,
                  (const char *)a1 + v16 + 8,
                  v21);
            }
          }
        }
        return v5;
      }
    }
    v5 = 0;
    for ( i = 0; i < 0x40; ++i )
    {
      v26 = 4720LL * i;
      if ( !*((_BYTE *)a1 + v26 + 104) )
      {
        ++*(_DWORD *)((char *)a1 + v26 + 44);
        LODWORD(j) = 0;
        v27 = Source2;
        v28 = v33;
        v29 = v32;
        *(_QWORD *)((char *)a1 + v26) = a2;
        *(_OWORD *)((char *)a1 + v26 + 8) = v27;
        *(_OWORD *)((char *)a1 + v26 + 24) = v29;
        *((_BYTE *)a1 + v26 + 40) = v28;
        *(_DWORD *)((char *)a1 + v26 + 172) = a5;
        *((_BYTE *)a1 + v26 + 104) = 1;
        *((_BYTE *)a1 + 302128) = 0;
        goto LABEL_14;
      }
    }
    return (unsigned int)-1073741275;
  }
  return v5;
}
