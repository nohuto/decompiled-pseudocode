/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x140547C90
 * Callers:
 *     HalpTimerSelectRoles @ 0x14053B848 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1405479D0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405487F8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerMeasureFrequencies(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  char v3; // dl
  __int64 v5; // rcx
  __int64 v6; // r9
  ULONG_PTR *v7; // rdi
  __int64 v8; // rbx
  _DWORD *v9; // rcx
  __int64 InternalData; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR *v18; // rbx
  ULONG_PTR *v19; // rdi
  __int64 v20; // r10
  _DWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  ULONG_PTR *v32; // rbx
  ULONG_PTR *v33; // rdi
  __int64 v34; // r10
  _DWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  ULONG_PTR *v40; // rbx
  __int64 v41; // r11
  int *v42; // rcx
  int v43; // edi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  unsigned int v48; // edi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9

  v1 = (ULONG_PTR *)HalpRegisteredTimers;
  v2 = *(_DWORD *)(a1 + 224) & 2;
  v3 = 0;
  if ( (ULONG_PTR *)HalpRegisteredTimers != &HalpRegisteredTimers )
  {
    do
    {
      v5 = (__int64)v1;
      v1 = (ULONG_PTR *)*v1;
      if ( (!*(_QWORD *)(v5 + 192) || (*(_DWORD *)(v5 + 184) & 8) != 0) && (*(_DWORD *)(v5 + 224) & 2) != 0 )
      {
        HalpTimerInitialize(v5);
        v3 = 1;
      }
    }
    while ( v1 != &HalpRegisteredTimers );
    if ( v3 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v7 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v7 != &HalpRegisteredTimers )
      {
        v8 = (__int64)v7;
        v7 = (ULONG_PTR *)*v7;
        v9 = (_DWORD *)(v8 + 184);
        if ( (!*(_QWORD *)(v8 + 192) || (*v9 & 8) != 0) && (*(_DWORD *)(v8 + 224) & 2) != 0 && (*v9 & 2) != 0 )
        {
          if ( v2 )
          {
            *(_DWORD *)(v8 + 48) = HalpTimerDetermineValidTimerPairReadLatency(v8, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v8);
            *(_QWORD *)(v8 + 16) = guard_dispatch_icall_no_overrides(InternalData, v11, v12, v13);
          }
        }
      }
      v14 = __readcr2();
      __writecr2(v14);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v15 = HalpTimerGetInternalData(a1);
        guard_dispatch_icall_no_overrides(v15, 0LL, v16, v17);
      }
      v18 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v18 != &HalpRegisteredTimers )
      {
        v19 = v18;
        v20 = (__int64)v18;
        v18 = (ULONG_PTR *)*v18;
        v21 = v19 + 23;
        if ( (!v19[24] || (*v21 & 8) != 0) && (*(_DWORD *)(v20 + 224) & 2) != 0 && (*v21 & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v20 + 48), v20, a1, (_DWORD)v19 + 16, v20 + 24);
          }
          else
          {
            v22 = HalpTimerGetInternalData(v20);
            v19[2] = guard_dispatch_icall_no_overrides(v22, v23, v24, v25);
          }
        }
      }
      v26 = __readcr2();
      __writecr2(v26);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v27 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0LL, v6);
      }
      else
      {
        v28 = HalpTimerGetInternalData(a1);
        v27 = guard_dispatch_icall_no_overrides(v28, 1250000LL, v29, v30);
      }
      v31 = __readcr2();
      __writecr2(v31);
      v32 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v32 != &HalpRegisteredTimers )
      {
        v33 = v32;
        v34 = (__int64)v32;
        v32 = (ULONG_PTR *)*v32;
        v35 = v33 + 23;
        if ( (!v33[24] || (*v35 & 8) != 0) && (*(_DWORD *)(v34 + 224) & 2) != 0 && (*v35 & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v34 + 48), v34, a1, (_DWORD)v33 + 32, v34 + 40);
          }
          else
          {
            v36 = HalpTimerGetInternalData(v34);
            v33[4] = guard_dispatch_icall_no_overrides(v36, v37, v38, v39);
          }
        }
      }
      v40 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v40 != &HalpRegisteredTimers )
      {
        v41 = (__int64)v40;
        v40 = (ULONG_PTR *)*v40;
        v42 = (int *)(v41 + 184);
        if ( (!*(_QWORD *)(v41 + 192) || (*v42 & 8) != 0) && (*(_DWORD *)(v41 + 224) & 2) != 0 )
        {
          v43 = *v42;
          if ( (*v42 & 2) != 0 )
          {
            v44 = *(_QWORD *)(v41 + 16);
            v45 = *(_QWORD *)(v41 + 32) - v44;
            v46 = *(_QWORD *)(v41 + 24);
            v47 = *(_QWORD *)(v41 + 40) - v46;
            if ( *(_QWORD *)(v41 + 32) < v44 )
              v45 += 1LL << *(_DWORD *)(v41 + 220);
            if ( *(_QWORD *)(v41 + 40) < v46 )
              v47 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v2 )
              v27 = HalpTimerScaleCounter(v47, *(_QWORD *)(a1 + 192), 10000000LL);
            v48 = v43 & 0xFFFFFFF7;
            *(_DWORD *)(v41 + 184) = v48;
            *(_QWORD *)(v41 + 192) = 10000000 * v45 / v27;
            if ( v41 != a1 && (v48 & 4) == 0 )
            {
              if ( *(_QWORD *)(v41 + 136) )
              {
                v49 = HalpTimerGetInternalData(v41);
                guard_dispatch_icall_no_overrides(v49, v50, v51, v52);
              }
            }
          }
        }
      }
    }
  }
}
