/*
 * XREFs of HalpTimerPerformanceCounterPowerChange @ 0x1405458C8
 * Callers:
 *     HalpTimerPowerChange @ 0x140545F80 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403BC024 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403BC400 (HalpHpetQueryCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  ULONG_PTR v2; // rbp
  __int64 InternalData; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 (*v10)(); // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  signed __int64 v13; // rax
  int v14; // r8d
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  signed __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64); // rdx
  __int64 Counter; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r11
  unsigned __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 (*v31)(); // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r10
  signed __int64 v34; // rax
  int v35; // r9d
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int64 v38; // r8
  signed __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(__int64, __int64); // rdx
  __int64 v43; // rax
  ULONG_PTR v44; // r13
  __int64 v45; // rdi
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 (*v49)(); // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // r10
  signed __int64 v52; // rax
  int v53; // r9d
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // r8
  signed __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 (__fastcall *v60)(__int64, __int64); // rdx
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 (*v68)(); // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // r9
  signed __int64 v71; // rax
  int v72; // r8d
  __int64 v73; // r14
  unsigned __int64 v74; // rcx
  __int64 v75; // rsi
  unsigned __int64 v76; // r14
  signed __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 (__fastcall *v80)(__int64, __int64); // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int64 v83; // r11
  int v84; // eax
  signed __int32 v85[8]; // [rsp+0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+70h] [rbp+18h]
  ULONG_PTR BugCheckParameter3b; // [rsp+70h] [rbp+18h]
  ULONG_PTR v88; // [rsp+78h] [rbp+20h]

  v2 = HalpTimerSavedPerformanceCounter;
  BugCheckParameter3a = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v5 = guard_dispatch_icall_no_overrides(InternalData, v4);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v2, v5);
      if ( HalpTimerDelayedQueryHardwareCount )
      {
        *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
        HalpTimerDelayedQueryHardwareCount = 0LL;
      }
      v6 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v20 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v21 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 112);
        if ( v21 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(v20, (__int64)v21);
        else
          Counter = guard_dispatch_icall_no_overrides(v20, v21);
        v7 = *(_QWORD *)(v6 + 208);
        v18 = Counter;
      }
      else
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 208);
          do
          {
            v8 = *(_QWORD *)(v6 + 200);
            v9 = HalpTimerGetInternalData(v6);
            v10 = *(__int64 (**)())(v6 + 112);
            if ( v10 == HalpHpetQueryCounter )
              v11 = HalpHpetQueryCounter();
            else
              v11 = guard_dispatch_icall_no_overrides(v9, v10);
            v12 = v11;
            _InterlockedOr(v85, 0);
            v13 = *(_QWORD *)(v6 + 200);
          }
          while ( v8 != v13 );
        }
        while ( v7 != *(_QWORD *)(v6 + 208) );
        v14 = *(_DWORD *)(v6 + 220);
        v2 = BugCheckParameter3a;
        v15 = v8 ^ v12;
        if ( _bittest64((const __int64 *)&v15, (unsigned __int8)(v14 - 1)) )
        {
          v16 = -1LL;
          if ( v14 != 64 )
            v16 = (1LL << v14) - 1;
          v17 = v8 & v16;
          v18 = (v12 | v8 ^ v17) + (1LL << v14);
          if ( v12 >= v17 )
            v18 = v12 | v8 ^ v17;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 200), v18, v13);
        }
        else
        {
          if ( v14 == 64 )
            v19 = -1LL;
          else
            v19 = (1LL << v14) - 1;
          v18 = v12 | v8 & ~v19;
        }
      }
      v23 = HalpTimerScaleCounter(
              v7 + v18,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v25 = *(_QWORD *)(v24 + 16);
      if ( v23 >= v25 )
        v25 = v23;
      v26 = HalpTimerCalibratePerformanceCounter(v2, v25);
      if ( v26 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v2, v26);
      HalpPerformanceCounter = v2;
      HalpTimerSavedPerformanceCounter = 0LL;
    }
  }
  else
  {
    v27 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      v88 = HalpAlwaysOnCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v41 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v42 = *(__int64 (__fastcall **)(__int64, __int64))(v27 + 112);
        if ( v42 == HalpHvCounterQueryCounter )
          v43 = HalpHvCounterQueryCounter(v41, (__int64)v42);
        else
          v43 = guard_dispatch_icall_no_overrides(v41, v42);
        v28 = *(_QWORD *)(v27 + 208);
        v39 = v43;
      }
      else
      {
        do
        {
          v28 = *(_QWORD *)(v27 + 208);
          do
          {
            v29 = *(_QWORD *)(v27 + 200);
            v30 = HalpTimerGetInternalData(v27);
            v31 = *(__int64 (**)())(v27 + 112);
            if ( v31 == HalpHpetQueryCounter )
              v32 = HalpHpetQueryCounter();
            else
              v32 = guard_dispatch_icall_no_overrides(v30, v31);
            v33 = v32;
            _InterlockedOr(v85, 0);
            v34 = *(_QWORD *)(v27 + 200);
          }
          while ( v29 != v34 );
        }
        while ( v28 != *(_QWORD *)(v27 + 208) );
        v35 = *(_DWORD *)(v27 + 220);
        v36 = v29 ^ v33;
        if ( _bittest64((const __int64 *)&v36, (unsigned __int8)(v35 - 1)) )
        {
          v37 = -1LL;
          if ( v35 != 64 )
            v37 = (1LL << v35) - 1;
          v38 = v29 & v37;
          v39 = (v33 | v29 ^ v38) + (1LL << v35);
          if ( v33 >= v38 )
            v39 = v33 | v29 ^ v38;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 200), v39, v34);
        }
        else
        {
          if ( v35 == 64 )
            v40 = -1LL;
          else
            v40 = (1LL << v35) - 1;
          v39 = v33 | v29 & ~v40;
        }
      }
      v44 = v39 + v28;
      v45 = HalpAlwaysOnCounter;
      BugCheckParameter3b = v39 + v28;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v39 + v28;
      if ( *(_DWORD *)(v45 + 220) == 64 )
      {
        v59 = HalpTimerGetInternalData(v45);
        v60 = *(__int64 (__fastcall **)(__int64, __int64))(v45 + 112);
        if ( v60 == HalpHvCounterQueryCounter )
          v61 = HalpHvCounterQueryCounter(v59, (__int64)v60);
        else
          v61 = guard_dispatch_icall_no_overrides(v59, v60);
        v46 = *(_QWORD *)(v45 + 208);
        v57 = v61;
      }
      else
      {
        do
        {
          v46 = *(_QWORD *)(v45 + 208);
          do
          {
            v47 = *(_QWORD *)(v45 + 200);
            v48 = HalpTimerGetInternalData(v45);
            v49 = *(__int64 (**)())(v45 + 112);
            if ( v49 == HalpHpetQueryCounter )
              v50 = HalpHpetQueryCounter();
            else
              v50 = guard_dispatch_icall_no_overrides(v48, v49);
            v51 = v50;
            _InterlockedOr(v85, 0);
            v52 = *(_QWORD *)(v45 + 200);
          }
          while ( v47 != v52 );
        }
        while ( v46 != *(_QWORD *)(v45 + 208) );
        v53 = *(_DWORD *)(v45 + 220);
        v44 = BugCheckParameter3b;
        v54 = v47 ^ v51;
        if ( _bittest64((const __int64 *)&v54, (unsigned __int8)(v53 - 1)) )
        {
          v55 = -1LL;
          if ( v53 != 64 )
            v55 = (1LL << v53) - 1;
          v56 = v47 & v55;
          v57 = (v51 | v47 ^ v56) + (1LL << v53);
          if ( v51 >= v56 )
            v57 = v51 | v47 ^ v56;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 200), v57, v52);
        }
        else
        {
          if ( v53 == 64 )
            v58 = -1LL;
          else
            v58 = (1LL << v53) - 1;
          v57 = v51 | v47 & ~v58;
        }
      }
      v62 = HalpPerformanceCounter;
      v63 = HalpTimerScaleCounter(
              v57 + v46,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v64 = v44 - v63;
      if ( v44 <= v63 )
        v64 = v63 - v44;
      if ( v64 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v62 + 220) == 64 )
        {
          v79 = HalpTimerGetInternalData(v62);
          v80 = *(__int64 (__fastcall **)(__int64, __int64))(v62 + 112);
          if ( v80 == HalpHvCounterQueryCounter )
            v81 = HalpHvCounterQueryCounter(v79, (__int64)v80);
          else
            v81 = guard_dispatch_icall_no_overrides(v79, v80);
          v65 = *(_QWORD *)(v62 + 208);
          v77 = v81;
        }
        else
        {
          do
          {
            v65 = *(_QWORD *)(v62 + 208);
            do
            {
              v66 = *(_QWORD *)(v62 + 200);
              v67 = HalpTimerGetInternalData(v62);
              v68 = *(__int64 (**)())(v62 + 112);
              if ( v68 == HalpHpetQueryCounter )
                v69 = HalpHpetQueryCounter();
              else
                v69 = guard_dispatch_icall_no_overrides(v67, v68);
              v70 = v69;
              _InterlockedOr(v85, 0);
              v71 = *(_QWORD *)(v62 + 200);
            }
            while ( v66 != v71 );
          }
          while ( v65 != *(_QWORD *)(v62 + 208) );
          v72 = *(_DWORD *)(v62 + 220);
          v73 = -1LL;
          v74 = v66 ^ v70;
          if ( _bittest64((const __int64 *)&v74, (unsigned __int8)(v72 - 1)) )
          {
            v75 = 1LL << v72;
            if ( v72 != 64 )
              v73 = v75 - 1;
            v76 = v66 & v73;
            v77 = (v70 | v66 ^ v76) + v75;
            if ( v70 >= v76 )
              v77 = v70 | v66 ^ v76;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 200), v77, v71);
          }
          else
          {
            if ( v72 == 64 )
              v78 = -1LL;
            else
              v78 = (1LL << v72) - 1;
            v77 = v70 | v66 & ~v78;
          }
        }
        v82 = HalpTimerScaleCounter(
                v65 + v77,
                *(_QWORD *)(HalpPerformanceCounter + 192),
                *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v84 = HalpTimerCalibratePerformanceCounter(v83, v82);
        if ( v84 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v84);
      }
      HalpTimerDelayedQueryHardwareCount = *(_QWORD *)(v88 + 112);
      *(_QWORD *)(v88 + 112) = HalpTimerDelayedQueryCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
    }
  }
}
