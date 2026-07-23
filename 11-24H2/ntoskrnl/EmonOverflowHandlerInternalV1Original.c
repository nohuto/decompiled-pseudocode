/*
 * XREFs of EmonOverflowHandlerInternalV1Original @ 0x14055A288
 * Callers:
 *     EmonOverflowHandlerOriginal @ 0x14055B010 (EmonOverflowHandlerOriginal.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EmonIsModifiedByBadActorInternalOriginal @ 0x1404828CC (EmonIsModifiedByBadActorInternalOriginal.c)
 *     KeProfileInterruptWithSource @ 0x140492A60 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1404F7E70 (PoGetProcessorIdleAccounting.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EmonOverflowHandlerInternalV1Original(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // r15
  int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // rdx^4
  unsigned int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r13d
  __int64 v29; // r13
  LARGE_INTEGER v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-78h]
  unsigned __int64 v35; // [rsp+28h] [rbp-70h]
  __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  char v40; // [rsp+A8h] [rbp+10h] BYREF
  int v41; // [rsp+B0h] [rbp+18h]
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v2 = a1;
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v4 = (1LL << EmonCounterResolution) - 1;
  else
    v4 = -1LL;
  if ( *(_DWORD *)(a2 + 4) )
  {
    v5 = 0;
    v6 = 193;
    v41 = 0;
    while ( 1 )
    {
      v7 = v6 - 193;
      v8 = *(_QWORD *)(a2 + 16) + 48 * v7;
      if ( !*(_DWORD *)(v8 + 24) )
      {
        v9 = __readmsr(v6);
        if ( ((((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) & v4) < (v4 & 0xFFFFFFFF80000001uLL) )
          break;
      }
LABEL_44:
      ++v6;
      v5 += 4;
      v41 = v5;
      if ( v6 - 193 >= *(_DWORD *)(a2 + 4) )
        return;
    }
    v10 = *(_DWORD *)a2;
    LODWORD(v11) = 0;
    v35 = 0LL;
    v12 = 0LL;
    v38 = 0LL;
    v40 = 0;
    v34 = 0LL;
    if ( v10 == 1 )
    {
      v42 = v6 - 161;
      v35 = ~(15LL << v5) & __readmsr(0x38Du);
      v16 = __readmsr(0x38Fu);
      _bittestandreset64((__int64 *)&v16, v6 - 161);
      v13 = 911;
      v38 = v16;
      v14 = HIDWORD(v16);
      v15 = v16;
    }
    else
    {
      v42 = v6 - 193;
      if ( v10 )
        goto LABEL_13;
      v13 = v6 + 197;
      v42 = v6 - 193;
      v35 = __readmsr(v6 + 197);
      v14 = HIDWORD(v35);
      v15 = v35 & 0xFFAFFFFF;
    }
    v2 = a1;
    v12 = v8;
    __writemsr(v13, __PAIR64__(v14, v15));
    v34 = v8;
LABEL_13:
    v17 = *(unsigned int *)(v12 + 36);
    if ( (_DWORD)v17 )
    {
      KeProfileInterruptWithSource(v2, v17);
      LODWORD(v11) = *(_DWORD *)v12;
      goto LABEL_25;
    }
    v36 = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( HalpTimerProfilingCallback )
      guard_dispatch_icall_no_overrides(v2, v17);
    else
      KeProfileInterruptWithSource(v2, 0LL);
    v18 = HalpProfileData;
    v19 = 296LL * KeGetPcr()->Prcb.Number;
    v20 = *(_DWORD *)(v19 + HalpProfileData + 24);
    if ( !v20 )
    {
LABEL_24:
      v12 = v34;
      LODWORD(v7) = v6 - 193;
LABEL_25:
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 )
        {
          if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
            v26 = (1LL << EmonFixedCounterResolution) - 1;
          else
            v26 = -1LL;
          __writemsr(v6 + 584, v26 & -(__int64)(unsigned int)v11);
          __writemsr(0x38Fu, v38 | (1LL << v42));
        }
        v32 = v35;
      }
      else
      {
        if ( (unsigned int)EmonCounterResolution < 0x40 )
          v33 = (1LL << EmonCounterResolution) - 1;
        else
          v33 = -1LL;
        __writemsr(v6, v33 & -(__int64)(unsigned int)v11);
        v32 = v35;
        __writemsr(v6 + 197, v35 | 0x500000);
      }
      EmonIsModifiedByBadActorInternalOriginal(v7, (int *)a2, v32, &v40);
      v2 = a1;
      if ( v40 )
        *(_BYTE *)(v12 + 40) = 1;
      goto LABEL_44;
    }
    LODWORD(v11) = *(_DWORD *)(v19 + HalpProfileData + 16);
    v21 = v19 + 16LL * *(unsigned int *)(v19 + HalpProfileData + 32);
    *(_DWORD *)(v19 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v19 + HalpProfileData + 32) + 1) & 0xF;
    v22 = *(_DWORD *)(v19 + v18 + 20);
    if ( v22 )
    {
      v27 = v22 - 1;
      *(_DWORD *)(v19 + v18 + 20) = v27;
      if ( v27 )
        goto LABEL_23;
      *(_DWORD *)(v19 + v18 + 20) = 0x2710 / v20;
      v28 = 0x2710 / v20;
      if ( !(0x2710 / v20) )
      {
        *(_DWORD *)(v19 + v18 + 20) = 1;
        v28 = 1;
      }
      PoGetProcessorIdleAccounting(&v36);
      v23 = v36;
      if ( v36 == *(_QWORD *)(v19 + v18 + 8) )
      {
        v29 = (unsigned int)v11 * v28;
        v30 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v31 = HalpProfileData;
        if ( v30.QuadPart != *(_QWORD *)(v19 + HalpProfileData) )
        {
          v11 = PerformanceFrequency.QuadPart
              * (v29
               * (unsigned __int64)*(unsigned int *)(v19 + HalpProfileData + 24)
               / (v30.QuadPart - *(_QWORD *)(v19 + HalpProfileData)))
              / 0x989680;
          if ( v11 - 4096 > 0x7FFFEFFF )
            LODWORD(v11) = *(_DWORD *)(v19 + HalpProfileData + 28);
          *(_DWORD *)(v19 + HalpProfileData + 16) = v11;
          *(LARGE_INTEGER *)(v19 + v31) = v30;
        }
        *(_DWORD *)(v21 + v18 + 40) = v11;
        *(LARGE_INTEGER *)(v21 + v18 + 48) = v30;
        goto LABEL_23;
      }
    }
    else
    {
      *(_DWORD *)(v19 + v18 + 20) = 0x2710 / v20;
      if ( !(0x2710 / v20) )
        *(_DWORD *)(v19 + v18 + 20) = 1;
      PoGetProcessorIdleAccounting(&v36);
      v23 = v36;
    }
    *(_QWORD *)(v19 + v18 + 8) = v23;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v25 = HalpProfileData;
    *(LARGE_INTEGER *)(v19 + HalpProfileData) = PerformanceCounter;
    *(_DWORD *)(v21 + v18 + 40) = v11;
    *(_QWORD *)(v21 + v18 + 48) = *(_QWORD *)(v19 + v25);
LABEL_23:
    v5 = v41;
    goto LABEL_24;
  }
}
