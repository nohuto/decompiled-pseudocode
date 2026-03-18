/*
 * XREFs of HalpTimerPerformanceCounterPowerChange @ 0x140548008
 * Callers:
 *     HalpTimerPowerChange @ 0x1405486C0 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x14030AA50 (HalpTimerScaleCounter.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpHvCounterQueryCounter @ 0x1403D6CB0 (HalpHvCounterQueryCounter.c)
 *     HalpHpetQueryCounter @ 0x1403D6DB0 (HalpHpetQueryCounter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPerformanceCounterPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  ULONG_PTR v2; // rbp
  __int64 InternalData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (*v14)(); // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  signed __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // r14
  signed __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64); // rdx
  __int64 Counter; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 (*v39)(); // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // r10
  signed __int64 v42; // rax
  int v43; // r9d
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // r8
  signed __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 (__fastcall *v52)(__int64, __int64, __int64, __int64); // rdx
  __int64 v53; // rax
  ULONG_PTR v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rbp
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 (*v61)(); // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // r10
  signed __int64 v64; // rax
  int v65; // r9d
  unsigned __int64 v66; // rcx
  __int64 v67; // r8
  unsigned __int64 v68; // r8
  signed __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 (__fastcall *v74)(__int64, __int64, __int64, __int64); // rdx
  __int64 v75; // rax
  __int64 v76; // rdi
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // r12
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 (*v84)(); // rdx
  __int64 v85; // rax
  unsigned __int64 v86; // r9
  signed __int64 v87; // rax
  int v88; // r8d
  __int64 v89; // r14
  unsigned __int64 v90; // rcx
  __int64 v91; // rsi
  unsigned __int64 v92; // r14
  signed __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 (__fastcall *v98)(__int64, __int64, __int64, __int64); // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // r11
  int v102; // eax
  signed __int32 v103[8]; // [rsp+0h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+70h] [rbp+18h]
  ULONG_PTR BugCheckParameter3b; // [rsp+70h] [rbp+18h]
  ULONG_PTR v106; // [rsp+78h] [rbp+20h]

  v2 = HalpTimerSavedPerformanceCounter;
  BugCheckParameter3a = HalpTimerSavedPerformanceCounter;
  if ( HalpTimerSavedPerformanceCounter )
  {
    if ( BugCheckParameter3 == HalpTimerSavedPerformanceCounter && a2 )
    {
      InternalData = HalpTimerGetInternalData(HalpTimerSavedPerformanceCounter);
      v7 = guard_dispatch_icall_no_overrides(InternalData, v4, v5, v6);
      if ( v7 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v2, v7);
      if ( HalpTimerDelayedQueryHardwareCount )
      {
        *(_QWORD *)(HalpPerformanceCounter + 112) = HalpTimerDelayedQueryHardwareCount;
        HalpTimerDelayedQueryHardwareCount = 0LL;
      }
      v8 = HalpPerformanceCounter;
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v24 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v8 + 112);
        if ( v27 == HalpHvCounterQueryCounter )
          Counter = HalpHvCounterQueryCounter(v24, (__int64)v27, v25, v26);
        else
          Counter = guard_dispatch_icall_no_overrides(v24, v27, v25, v26);
        v9 = *(_QWORD *)(v8 + 208);
        v22 = Counter;
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)(v8 + 208);
          do
          {
            v10 = *(_QWORD *)(v8 + 200);
            v11 = HalpTimerGetInternalData(v8);
            v14 = *(__int64 (**)())(v8 + 112);
            if ( v14 == HalpHpetQueryCounter )
              v15 = HalpHpetQueryCounter();
            else
              v15 = guard_dispatch_icall_no_overrides(v11, v14, v12, v13);
            v16 = v15;
            _InterlockedOr(v103, 0);
            v17 = *(_QWORD *)(v8 + 200);
          }
          while ( v10 != v17 );
        }
        while ( v9 != *(_QWORD *)(v8 + 208) );
        v18 = *(_DWORD *)(v8 + 220);
        v2 = BugCheckParameter3a;
        v19 = v10 ^ v16;
        if ( _bittest64((const __int64 *)&v19, (unsigned __int8)(v18 - 1)) )
        {
          v20 = -1LL;
          if ( v18 != 64 )
            v20 = (1LL << v18) - 1;
          v21 = v10 & v20;
          v22 = (v16 | v10 ^ v21) + (1LL << v18);
          if ( v16 >= v21 )
            v22 = v16 | v10 ^ v21;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), v22, v17);
        }
        else
        {
          if ( v18 == 64 )
            v23 = -1LL;
          else
            v23 = (1LL << v18) - 1;
          v22 = v16 | v10 & ~v23;
        }
      }
      v29 = HalpTimerScaleCounter(
              v9 + v22,
              *(_QWORD *)(HalpPerformanceCounter + 192),
              *(_QWORD *)(HalpTimerSavedPerformanceCounter + 192));
      v31 = *(_QWORD *)(v30 + 16);
      if ( v29 >= v31 )
        v31 = v29;
      v32 = HalpTimerCalibratePerformanceCounter(v2, v31);
      if ( v32 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, v2, v32);
      HalpPerformanceCounter = v2;
      HalpTimerSavedPerformanceCounter = 0LL;
    }
  }
  else
  {
    v33 = HalpPerformanceCounter;
    if ( BugCheckParameter3 == HalpPerformanceCounter && !a2 )
    {
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      v106 = HalpAlwaysOnCounter;
      if ( !HalpAlwaysOnCounter )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x22uLL, BugCheckParameter3, 0LL);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v49 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v52 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v33 + 112);
        if ( v52 == HalpHvCounterQueryCounter )
          v53 = HalpHvCounterQueryCounter(v49, (__int64)v52, v50, v51);
        else
          v53 = guard_dispatch_icall_no_overrides(v49, v52, v50, v51);
        v34 = *(_QWORD *)(v33 + 208);
        v47 = v53;
      }
      else
      {
        do
        {
          v34 = *(_QWORD *)(v33 + 208);
          do
          {
            v35 = *(_QWORD *)(v33 + 200);
            v36 = HalpTimerGetInternalData(v33);
            v39 = *(__int64 (**)())(v33 + 112);
            if ( v39 == HalpHpetQueryCounter )
              v40 = HalpHpetQueryCounter();
            else
              v40 = guard_dispatch_icall_no_overrides(v36, v39, v37, v38);
            v41 = v40;
            _InterlockedOr(v103, 0);
            v42 = *(_QWORD *)(v33 + 200);
          }
          while ( v35 != v42 );
        }
        while ( v34 != *(_QWORD *)(v33 + 208) );
        v43 = *(_DWORD *)(v33 + 220);
        v44 = v35 ^ v41;
        if ( _bittest64((const __int64 *)&v44, (unsigned __int8)(v43 - 1)) )
        {
          v45 = -1LL;
          if ( v43 != 64 )
            v45 = (1LL << v43) - 1;
          v46 = v35 & v45;
          v47 = (v41 | v35 ^ v46) + (1LL << v43);
          if ( v41 >= v46 )
            v47 = v41 | v35 ^ v46;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 200), v47, v42);
        }
        else
        {
          if ( v43 == 64 )
            v48 = -1LL;
          else
            v48 = (1LL << v43) - 1;
          v47 = v41 | v35 & ~v48;
        }
      }
      v54 = v47 + v34;
      v55 = HalpAlwaysOnCounter;
      BugCheckParameter3b = v47 + v34;
      *(_QWORD *)(HalpPerformanceCounter + 16) = v47 + v34;
      if ( *(_DWORD *)(v55 + 220) == 64 )
      {
        v71 = HalpTimerGetInternalData(v55);
        v74 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v55 + 112);
        if ( v74 == HalpHvCounterQueryCounter )
          v75 = HalpHvCounterQueryCounter(v71, (__int64)v74, v72, v73);
        else
          v75 = guard_dispatch_icall_no_overrides(v71, v74, v72, v73);
        v56 = *(_QWORD *)(v55 + 208);
        v69 = v75;
      }
      else
      {
        do
        {
          v56 = *(_QWORD *)(v55 + 208);
          do
          {
            v57 = *(_QWORD *)(v55 + 200);
            v58 = HalpTimerGetInternalData(v55);
            v61 = *(__int64 (**)())(v55 + 112);
            if ( v61 == HalpHpetQueryCounter )
              v62 = HalpHpetQueryCounter();
            else
              v62 = guard_dispatch_icall_no_overrides(v58, v61, v59, v60);
            v63 = v62;
            _InterlockedOr(v103, 0);
            v64 = *(_QWORD *)(v55 + 200);
          }
          while ( v57 != v64 );
        }
        while ( v56 != *(_QWORD *)(v55 + 208) );
        v65 = *(_DWORD *)(v55 + 220);
        v54 = BugCheckParameter3b;
        v66 = v57 ^ v63;
        if ( _bittest64((const __int64 *)&v66, (unsigned __int8)(v65 - 1)) )
        {
          v67 = -1LL;
          if ( v65 != 64 )
            v67 = (1LL << v65) - 1;
          v68 = v57 & v67;
          v69 = (v63 | v57 ^ v68) + (1LL << v65);
          if ( v63 >= v68 )
            v69 = v63 | v57 ^ v68;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 200), v69, v64);
        }
        else
        {
          if ( v65 == 64 )
            v70 = -1LL;
          else
            v70 = (1LL << v65) - 1;
          v69 = v63 | v57 & ~v70;
        }
      }
      v76 = HalpPerformanceCounter;
      v77 = HalpTimerScaleCounter(
              v69 + v56,
              *(_QWORD *)(HalpAlwaysOnCounter + 192),
              *(_QWORD *)(HalpPerformanceCounter + 192));
      v78 = v54 - v77;
      if ( v54 <= v77 )
        v78 = v77 - v54;
      if ( v78 > HalpTimerMaximumAllowableDrift )
      {
        ++HalpTimerDriftReadjustmentCount;
        if ( *(_DWORD *)(v76 + 220) == 64 )
        {
          v95 = HalpTimerGetInternalData(v76);
          v98 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v76 + 112);
          if ( v98 == HalpHvCounterQueryCounter )
            v99 = HalpHvCounterQueryCounter(v95, (__int64)v98, v96, v97);
          else
            v99 = guard_dispatch_icall_no_overrides(v95, v98, v96, v97);
          v79 = *(_QWORD *)(v76 + 208);
          v93 = v99;
        }
        else
        {
          do
          {
            v79 = *(_QWORD *)(v76 + 208);
            do
            {
              v80 = *(_QWORD *)(v76 + 200);
              v81 = HalpTimerGetInternalData(v76);
              v84 = *(__int64 (**)())(v76 + 112);
              if ( v84 == HalpHpetQueryCounter )
                v85 = HalpHpetQueryCounter();
              else
                v85 = guard_dispatch_icall_no_overrides(v81, v84, v82, v83);
              v86 = v85;
              _InterlockedOr(v103, 0);
              v87 = *(_QWORD *)(v76 + 200);
            }
            while ( v80 != v87 );
          }
          while ( v79 != *(_QWORD *)(v76 + 208) );
          v88 = *(_DWORD *)(v76 + 220);
          v89 = -1LL;
          v90 = v80 ^ v86;
          if ( _bittest64((const __int64 *)&v90, (unsigned __int8)(v88 - 1)) )
          {
            v91 = 1LL << v88;
            if ( v88 != 64 )
              v89 = v91 - 1;
            v92 = v80 & v89;
            v93 = (v86 | v80 ^ v92) + v91;
            if ( v86 >= v92 )
              v93 = v86 | v80 ^ v92;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 200), v93, v87);
          }
          else
          {
            if ( v88 == 64 )
              v94 = -1LL;
            else
              v94 = (1LL << v88) - 1;
            v93 = v86 | v80 & ~v94;
          }
        }
        v100 = HalpTimerScaleCounter(
                 v79 + v93,
                 *(_QWORD *)(HalpPerformanceCounter + 192),
                 *(_QWORD *)(HalpAlwaysOnCounter + 192));
        v102 = HalpTimerCalibratePerformanceCounter(v101, v100);
        if ( v102 < 0 )
          KeBugCheckEx(0x5Cu, 0x113uLL, 0x26uLL, HalpAlwaysOnCounter, v102);
      }
      HalpTimerDelayedQueryHardwareCount = *(_QWORD *)(v106 + 112);
      *(_QWORD *)(v106 + 112) = HalpTimerDelayedQueryCounter;
      HalpTimerSavedPerformanceCounter = HalpPerformanceCounter;
      HalpPerformanceCounter = HalpAlwaysOnCounter;
    }
  }
}
