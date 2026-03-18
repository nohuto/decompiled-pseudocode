/*
 * XREFs of EmonOverflowHandlerInternalV2Original @ 0x14055CF3C
 * Callers:
 *     EmonOverflowHandlerOriginal @ 0x14055D3E0 (EmonOverflowHandlerOriginal.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     EmonIsModifiedByBadActorInternalOriginal @ 0x14048785C (EmonIsModifiedByBadActorInternalOriginal.c)
 *     KeProfileInterruptWithSource @ 0x140498080 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1404FA590 (PoGetProcessorIdleAccounting.c)
 *     EmonPebsOverflowHandler @ 0x14055D6FC (EmonPebsOverflowHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall EmonOverflowHandlerInternalV2Original(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // r15
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  unsigned int v21; // ecx
  unsigned int v22; // rdx^4
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // ecx
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  LARGE_INTEGER v35; // rax
  __int64 v36; // r8
  __int64 v37; // r8
  unsigned __int64 result; // rax
  __int64 v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-40h]
  __int64 v41; // [rsp+28h] [rbp-38h]
  unsigned __int64 v42; // [rsp+30h] [rbp-30h]
  __int64 v43; // [rsp+38h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-18h]
  __int64 v46; // [rsp+50h] [rbp-10h]
  unsigned __int64 v47; // [rsp+58h] [rbp-8h]
  int v49; // [rsp+B0h] [rbp+50h] BYREF
  int v50; // [rsp+B8h] [rbp+58h]

  v49 = 0;
  v4 = a1;
  v5 = a2;
  v47 = EmonOverflowMask & __readmsr(0x38Eu);
  v6 = v47;
  if ( (v47 & 0x4000000000000000LL) != 0 )
  {
    EmonPebsOverflowHandler(910LL);
    v6 = v47 & 0xBFFFFFFFFFFFFFFFuLL;
  }
  v7 = (__int64 *)EmonReservedResourcesList;
  v46 = v5;
  v8 = v5;
  if ( (__int64 *)EmonReservedResourcesList != &EmonReservedResourcesList )
  {
    v9 = 10 * v5;
    do
    {
      v10 = v6 & v7[v9 + 4];
      if ( v10 && v7[2] )
        guard_dispatch_icall_no_overrides(v6 & v7[v9 + 4], v7, a3, a4);
      v7 = (__int64 *)*v7;
      v6 &= ~v10;
    }
    while ( v7 != &EmonReservedResourcesList );
  }
  v11 = !_BitScanForward64((unsigned __int64 *)&v12, v6);
  while ( !v11 )
  {
    v13 = 0;
    v6 &= ~(1LL << v12);
    if ( (unsigned int)v12 >= 0x20 )
    {
      v12 = (unsigned int)(v12 - 32);
      v13 = 1;
    }
    v14 = *(_QWORD *)(KiProcessorBlock[v8] + 88);
    if ( v13 )
    {
      v15 = v13 - 1;
      if ( v15 )
      {
        v16 = v15 - 99;
        if ( v16 )
        {
          if ( v16 == 1 )
            v14 += 72LL;
          else
            v14 = 0LL;
        }
        else
        {
          v14 += 48LL;
        }
      }
      else
      {
        v14 += 24LL;
      }
    }
    v17 = *(_QWORD *)(v14 + 16) + 48 * v12;
    if ( *(_DWORD *)(v17 + 24) )
      goto LABEL_57;
    v18 = *(_DWORD *)v14;
    v19 = 0LL;
    v41 = 0LL;
    LODWORD(v20) = 0;
    v42 = 0LL;
    LOBYTE(v49) = 0;
    v45 = 0LL;
    if ( v18 == 1 )
    {
      v50 = v12 + 32;
      v42 = ~(15LL << (4 * (unsigned __int8)v12)) & __readmsr(0x38Du);
      a4 = __readmsr(0x38Fu);
      _bittestandreset64((__int64 *)&a4, (unsigned int)(v12 + 32));
      v21 = 911;
      v45 = a4;
      v22 = HIDWORD(a4);
      v23 = a4;
    }
    else
    {
      v50 = v12;
      if ( v18 )
        goto LABEL_26;
      v21 = v12 + 390;
      v50 = v12;
      v42 = __readmsr((int)v12 + 390);
      v22 = HIDWORD(v42);
      v23 = v42 & 0xFFAFFFFF;
    }
    v19 = v17;
    __writemsr(v21, __PAIR64__(v22, v23));
    v41 = v17;
LABEL_26:
    v24 = *(unsigned int *)(v19 + 36);
    if ( (_DWORD)v24 )
    {
      KeProfileInterruptWithSource(v4, v24);
      LODWORD(v20) = *(_DWORD *)v19;
      goto LABEL_38;
    }
    v43 = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( HalpTimerProfilingCallback )
      guard_dispatch_icall_no_overrides(v4, v24, v17, a4);
    else
      KeProfileInterruptWithSource(v4, 0LL);
    v25 = HalpProfileData;
    v26 = 296LL * KeGetPcr()->Prcb.Number;
    v27 = *(_DWORD *)(v26 + HalpProfileData + 24);
    if ( v27 )
    {
      LODWORD(v20) = *(_DWORD *)(v26 + HalpProfileData + 16);
      v28 = v26 + 16LL * *(unsigned int *)(v26 + HalpProfileData + 32);
      *(_DWORD *)(v26 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v26 + HalpProfileData + 32) + 1) & 0xF;
      v29 = *(_DWORD *)(v26 + v25 + 20);
      if ( !v29 )
      {
        *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
        if ( !(0x2710 / v27) )
          *(_DWORD *)(v26 + v25 + 20) = 1;
        PoGetProcessorIdleAccounting(&v43);
        v30 = v43;
        goto LABEL_35;
      }
      v34 = v29 - 1;
      *(_DWORD *)(v26 + v25 + 20) = v34;
      if ( !v34 )
      {
        v40 = 0x2710 / v27;
        *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
        if ( !(0x2710 / v27) )
        {
          *(_DWORD *)(v26 + v25 + 20) = 1;
          v40 = 1;
        }
        PoGetProcessorIdleAccounting(&v43);
        v30 = v43;
        if ( v43 == *(_QWORD *)(v26 + v25 + 8) )
        {
          v43 = v40 * (unsigned int)v20;
          v35 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v36 = HalpProfileData;
          if ( v35.QuadPart != *(_QWORD *)(v26 + HalpProfileData) )
          {
            v20 = PerformanceFrequency.QuadPart
                * (v43
                 * (unsigned __int64)*(unsigned int *)(v26 + HalpProfileData + 24)
                 / (v35.QuadPart - *(_QWORD *)(v26 + HalpProfileData)))
                / 0x989680;
            if ( v20 - 4096 > 0x7FFFEFFF )
              LODWORD(v20) = *(_DWORD *)(v26 + HalpProfileData + 28);
            *(_DWORD *)(v26 + HalpProfileData + 16) = v20;
            *(LARGE_INTEGER *)(v26 + v36) = v35;
          }
          *(_DWORD *)(v28 + v25 + 40) = v20;
          *(LARGE_INTEGER *)(v28 + v25 + 48) = v35;
        }
        else
        {
LABEL_35:
          *(_QWORD *)(v26 + v25 + 8) = v30;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v32 = HalpProfileData;
          *(LARGE_INTEGER *)(v26 + HalpProfileData) = PerformanceCounter;
          *(_DWORD *)(v28 + v25 + 40) = v20;
          *(_QWORD *)(v28 + v25 + 48) = *(_QWORD *)(v26 + v32);
        }
      }
      v4 = a1;
    }
    v19 = v41;
LABEL_38:
    if ( *(_DWORD *)v14 )
    {
      if ( *(_DWORD *)v14 == 1 )
      {
        if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
          v33 = (1LL << EmonFixedCounterResolution) - 1;
        else
          v33 = -1LL;
        __writemsr(v12 + 777, v33 & -(__int64)(unsigned int)v20);
        __writemsr(0x38Fu, v45 | (1LL << v50));
      }
      v37 = v42;
    }
    else
    {
      if ( (unsigned int)EmonCounterResolution < 0x40 )
        v39 = (1LL << EmonCounterResolution) - 1;
      else
        v39 = -1LL;
      __writemsr(v12 + 193, v39 & -(__int64)(unsigned int)v20);
      v37 = v42;
      __writemsr(v12 + 390, v42 | 0x500000);
    }
    EmonIsModifiedByBadActorInternalOriginal(v12, (int *)v14, v37, &v49);
    if ( (_BYTE)v49 )
      *(_BYTE *)(v19 + 40) = 1;
LABEL_57:
    v11 = !_BitScanForward64((unsigned __int64 *)&v12, v6);
    v8 = v46;
  }
  result = v47;
  __writemsr(0x390u, v47);
  return result;
}
