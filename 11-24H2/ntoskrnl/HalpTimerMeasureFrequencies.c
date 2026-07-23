/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x140545550
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140545290 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405460B8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerMeasureFrequencies(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  char v3; // dl
  __int64 v5; // rcx
  ULONG_PTR *v6; // rdi
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  __int64 InternalData; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR *v13; // rbx
  ULONG_PTR *v14; // rdi
  __int64 v15; // r10
  _DWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  ULONG_PTR *v23; // rbx
  ULONG_PTR *v24; // rdi
  __int64 v25; // r10
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  ULONG_PTR *v29; // rbx
  __int64 v30; // r11
  int *v31; // rcx
  int v32; // edi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rdx

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
      v6 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v6 != &HalpRegisteredTimers )
      {
        v7 = (__int64)v6;
        v6 = (ULONG_PTR *)*v6;
        v8 = (_DWORD *)(v7 + 184);
        if ( (!*(_QWORD *)(v7 + 192) || (*v8 & 8) != 0) && (*(_DWORD *)(v7 + 224) & 2) != 0 && (*v8 & 2) != 0 )
        {
          if ( v2 )
          {
            *(_DWORD *)(v7 + 48) = HalpTimerDetermineValidTimerPairReadLatency(v7, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v7);
            *(_QWORD *)(v7 + 16) = guard_dispatch_icall_no_overrides(InternalData, v10);
          }
        }
      }
      v11 = __readcr2();
      __writecr2(v11);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v12 = HalpTimerGetInternalData(a1);
        guard_dispatch_icall_no_overrides(v12, 0LL);
      }
      v13 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v13 != &HalpRegisteredTimers )
      {
        v14 = v13;
        v15 = (__int64)v13;
        v13 = (ULONG_PTR *)*v13;
        v16 = v14 + 23;
        if ( (!v14[24] || (*v16 & 8) != 0) && (*(_DWORD *)(v15 + 224) & 2) != 0 && (*v16 & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v15 + 48), v15, a1, (_DWORD)v14 + 16, v15 + 24);
          }
          else
          {
            v17 = HalpTimerGetInternalData(v15);
            v14[2] = guard_dispatch_icall_no_overrides(v17, v18);
          }
        }
      }
      v19 = __readcr2();
      __writecr2(v19);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v20 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0);
      }
      else
      {
        v21 = HalpTimerGetInternalData(a1);
        v20 = guard_dispatch_icall_no_overrides(v21, 1250000LL);
      }
      v22 = __readcr2();
      __writecr2(v22);
      v23 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v23 != &HalpRegisteredTimers )
      {
        v24 = v23;
        v25 = (__int64)v23;
        v23 = (ULONG_PTR *)*v23;
        v26 = v24 + 23;
        if ( (!v24[24] || (*v26 & 8) != 0) && (*(_DWORD *)(v25 + 224) & 2) != 0 && (*v26 & 2) != 0 )
        {
          if ( v2 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v25 + 48), v25, a1, (_DWORD)v24 + 32, v25 + 40);
          }
          else
          {
            v27 = HalpTimerGetInternalData(v25);
            v24[4] = guard_dispatch_icall_no_overrides(v27, v28);
          }
        }
      }
      v29 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v29 != &HalpRegisteredTimers )
      {
        v30 = (__int64)v29;
        v29 = (ULONG_PTR *)*v29;
        v31 = (int *)(v30 + 184);
        if ( (!*(_QWORD *)(v30 + 192) || (*v31 & 8) != 0) && (*(_DWORD *)(v30 + 224) & 2) != 0 )
        {
          v32 = *v31;
          if ( (*v31 & 2) != 0 )
          {
            v33 = *(_QWORD *)(v30 + 16);
            v34 = *(_QWORD *)(v30 + 32) - v33;
            v35 = *(_QWORD *)(v30 + 24);
            v36 = *(_QWORD *)(v30 + 40) - v35;
            if ( *(_QWORD *)(v30 + 32) < v33 )
              v34 += 1LL << *(_DWORD *)(v30 + 220);
            if ( *(_QWORD *)(v30 + 40) < v35 )
              v36 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v2 )
              v20 = HalpTimerScaleCounter(v36, *(_QWORD *)(a1 + 192), 10000000LL);
            v37 = v32 & 0xFFFFFFF7;
            *(_DWORD *)(v30 + 184) = v37;
            *(_QWORD *)(v30 + 192) = 10000000 * v34 / v20;
            if ( v30 != a1 && (v37 & 4) == 0 )
            {
              if ( *(_QWORD *)(v30 + 136) )
              {
                v38 = HalpTimerGetInternalData(v30);
                guard_dispatch_icall_no_overrides(v38, v39);
              }
            }
          }
        }
      }
    }
  }
}
