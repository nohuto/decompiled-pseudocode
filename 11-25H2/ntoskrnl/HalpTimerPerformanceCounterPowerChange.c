/*
 * XREFs of HalpTimerPerformanceCounterPowerChange @ 0x140545718
 * Callers:
 *     HalpTimerPowerChange @ 0x140545DD0 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x14028EF68 (HalpTimerScaleCounter.c)
 *     HalpHvCounterQueryCounter @ 0x14028FA00 (HalpHvCounterQueryCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14028FC0C (HalpTimerCalibratePerformanceCounter.c)
 *     HalpHpetQueryCounter @ 0x140350770 (HalpHpetQueryCounter.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  ULONG_PTR v2; // rbp
  __int64 InternalData; // rax
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  signed __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64); // rdx
  __int64 Counter; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // r10
  signed __int64 v31; // rax
  int v32; // r9d
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  signed __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64, __int64); // rdx
  __int64 v40; // rax
  ULONG_PTR v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  signed __int64 v48; // rax
  int v49; // r9d
  unsigned __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // r8
  signed __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 (__fastcall *v56)(__int64, __int64); // rdx
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // r12
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // r9
  signed __int64 v66; // rax
  int v67; // r8d
  __int64 v68; // r14
  unsigned __int64 v69; // rcx
  __int64 v70; // rsi
  unsigned __int64 v71; // r14
  signed __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 (__fastcall *v75)(__int64, __int64); // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // r11
  int v79; // eax
  signed __int32 v80[8]; // [rsp+0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+70h] [rbp+18h]
  ULONG_PTR BugCheckParameter3b; // [rsp+70h] [rbp+18h]
  ULONG_PTR v83; // [rsp+78h] [rbp+20h]

  v2 = HalpTimerSavedPerformanceCounter;
  BugCheckParameter3a = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v4 = guard_dispatch_icall_no_overrides(InternalData);
      if ( v4 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v2, v4);
      if ( HalpTimerDelayedQueryHardwareCount )
      {
        *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
        HalpTimerDelayedQueryHardwareCount = 0LL;
      }
      v5 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v18 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v19 = *(__int64 (__fastcall **)(__int64, __int64))(v5 + 112);
        if ( v19 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(v18, (__int64)v19);
        else
          Counter = guard_dispatch_icall_no_overrides(v18);
        v6 = *(_QWORD *)(v5 + 208);
        v16 = Counter;
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)(v5 + 208);
          do
          {
            v7 = *(_QWORD *)(v5 + 200);
            v8 = HalpTimerGetInternalData(v5);
            if ( *(__int64 (**)())(v5 + 112) == HalpHpetQueryCounter )
              v9 = HalpHpetQueryCounter();
            else
              v9 = guard_dispatch_icall_no_overrides(v8);
            v10 = v9;
            _InterlockedOr(v80, 0);
            v11 = *(_QWORD *)(v5 + 200);
          }
          while ( v7 != v11 );
        }
        while ( v6 != *(_QWORD *)(v5 + 208) );
        v12 = *(_DWORD *)(v5 + 220);
        v2 = BugCheckParameter3a;
        v13 = v7 ^ v10;
        if ( _bittest64((const __int64 *)&v13, (unsigned __int8)(v12 - 1)) )
        {
          v14 = -1LL;
          if ( v12 != 64 )
            v14 = (1LL << v12) - 1;
          v15 = v7 & v14;
          v16 = (v10 | v7 ^ v15) + (1LL << v12);
          if ( v10 >= v15 )
            v16 = v10 | v7 ^ v15;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 200), v16, v11);
        }
        else
        {
          if ( v12 == 64 )
            v17 = -1LL;
          else
            v17 = (1LL << v12) - 1;
          v16 = v10 | v7 & ~v17;
        }
      }
      v21 = HalpTimerScaleCounter(
              v6 + v16,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v23 = *(_QWORD *)(v22 + 16);
      if ( v21 >= v23 )
        v23 = v21;
      v24 = HalpTimerCalibratePerformanceCounter(v2, v23);
      if ( v24 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v2, v24);
      HalpPerformanceCounter = v2;
      HalpTimerSavedPerformanceCounter = 0LL;
    }
  }
  else
  {
    v25 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      v83 = HalpAlwaysOnCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v38 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v39 = *(__int64 (__fastcall **)(__int64, __int64))(v25 + 112);
        if ( v39 == HalpHvCounterQueryCounter )
          v40 = HalpHvCounterQueryCounter(v38, (__int64)v39);
        else
          v40 = guard_dispatch_icall_no_overrides(v38);
        v26 = *(_QWORD *)(v25 + 208);
        v36 = v40;
      }
      else
      {
        do
        {
          v26 = *(_QWORD *)(v25 + 208);
          do
          {
            v27 = *(_QWORD *)(v25 + 200);
            v28 = HalpTimerGetInternalData(v25);
            if ( *(__int64 (**)())(v25 + 112) == HalpHpetQueryCounter )
              v29 = HalpHpetQueryCounter();
            else
              v29 = guard_dispatch_icall_no_overrides(v28);
            v30 = v29;
            _InterlockedOr(v80, 0);
            v31 = *(_QWORD *)(v25 + 200);
          }
          while ( v27 != v31 );
        }
        while ( v26 != *(_QWORD *)(v25 + 208) );
        v32 = *(_DWORD *)(v25 + 220);
        v33 = v27 ^ v30;
        if ( _bittest64((const __int64 *)&v33, (unsigned __int8)(v32 - 1)) )
        {
          v34 = -1LL;
          if ( v32 != 64 )
            v34 = (1LL << v32) - 1;
          v35 = v27 & v34;
          v36 = (v30 | v27 ^ v35) + (1LL << v32);
          if ( v30 >= v35 )
            v36 = v30 | v27 ^ v35;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 200), v36, v31);
        }
        else
        {
          if ( v32 == 64 )
            v37 = -1LL;
          else
            v37 = (1LL << v32) - 1;
          v36 = v30 | v27 & ~v37;
        }
      }
      v41 = v36 + v26;
      v42 = HalpAlwaysOnCounter;
      BugCheckParameter3b = v36 + v26;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v36 + v26;
      if ( *(_DWORD *)(v42 + 220) == 64 )
      {
        v55 = HalpTimerGetInternalData(v42);
        v56 = *(__int64 (__fastcall **)(__int64, __int64))(v42 + 112);
        if ( v56 == HalpHvCounterQueryCounter )
          v57 = HalpHvCounterQueryCounter(v55, (__int64)v56);
        else
          v57 = guard_dispatch_icall_no_overrides(v55);
        v43 = *(_QWORD *)(v42 + 208);
        v53 = v57;
      }
      else
      {
        do
        {
          v43 = *(_QWORD *)(v42 + 208);
          do
          {
            v44 = *(_QWORD *)(v42 + 200);
            v45 = HalpTimerGetInternalData(v42);
            if ( *(__int64 (**)())(v42 + 112) == HalpHpetQueryCounter )
              v46 = HalpHpetQueryCounter();
            else
              v46 = guard_dispatch_icall_no_overrides(v45);
            v47 = v46;
            _InterlockedOr(v80, 0);
            v48 = *(_QWORD *)(v42 + 200);
          }
          while ( v44 != v48 );
        }
        while ( v43 != *(_QWORD *)(v42 + 208) );
        v49 = *(_DWORD *)(v42 + 220);
        v41 = BugCheckParameter3b;
        v50 = v44 ^ v47;
        if ( _bittest64((const __int64 *)&v50, (unsigned __int8)(v49 - 1)) )
        {
          v51 = -1LL;
          if ( v49 != 64 )
            v51 = (1LL << v49) - 1;
          v52 = v44 & v51;
          v53 = (v47 | v44 ^ v52) + (1LL << v49);
          if ( v47 >= v52 )
            v53 = v47 | v44 ^ v52;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 200), v53, v48);
        }
        else
        {
          if ( v49 == 64 )
            v54 = -1LL;
          else
            v54 = (1LL << v49) - 1;
          v53 = v47 | v44 & ~v54;
        }
      }
      v58 = HalpPerformanceCounter;
      v59 = HalpTimerScaleCounter(
              v53 + v43,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v60 = v41 - v59;
      if ( v41 <= v59 )
        v60 = v59 - v41;
      if ( v60 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v58 + 220) == 64 )
        {
          v74 = HalpTimerGetInternalData(v58);
          v75 = *(__int64 (__fastcall **)(__int64, __int64))(v58 + 112);
          if ( v75 == HalpHvCounterQueryCounter )
            v76 = HalpHvCounterQueryCounter(v74, (__int64)v75);
          else
            v76 = guard_dispatch_icall_no_overrides(v74);
          v61 = *(_QWORD *)(v58 + 208);
          v72 = v76;
        }
        else
        {
          do
          {
            v61 = *(_QWORD *)(v58 + 208);
            do
            {
              v62 = *(_QWORD *)(v58 + 200);
              v63 = HalpTimerGetInternalData(v58);
              if ( *(__int64 (**)())(v58 + 112) == HalpHpetQueryCounter )
                v64 = HalpHpetQueryCounter();
              else
                v64 = guard_dispatch_icall_no_overrides(v63);
              v65 = v64;
              _InterlockedOr(v80, 0);
              v66 = *(_QWORD *)(v58 + 200);
            }
            while ( v62 != v66 );
          }
          while ( v61 != *(_QWORD *)(v58 + 208) );
          v67 = *(_DWORD *)(v58 + 220);
          v68 = -1LL;
          v69 = v62 ^ v65;
          if ( _bittest64((const __int64 *)&v69, (unsigned __int8)(v67 - 1)) )
          {
            v70 = 1LL << v67;
            if ( v67 != 64 )
              v68 = v70 - 1;
            v71 = v62 & v68;
            v72 = (v65 | v62 ^ v71) + v70;
            if ( v65 >= v71 )
              v72 = v65 | v62 ^ v71;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v58 + 200), v72, v66);
          }
          else
          {
            if ( v67 == 64 )
              v73 = -1LL;
            else
              v73 = (1LL << v67) - 1;
            v72 = v65 | v62 & ~v73;
          }
        }
        v77 = HalpTimerScaleCounter(
                v61 + v72,
                *(_QWORD *)(HalpPerformanceCounter + 192),
                *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v79 = HalpTimerCalibratePerformanceCounter(v78, v77);
        if ( v79 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v79);
      }
      HalpTimerDelayedQueryHardwareCount = *(_QWORD *)(v83 + 112);
      *(_QWORD *)(v83 + 112) = HalpTimerDelayedQueryCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
    }
  }
}
