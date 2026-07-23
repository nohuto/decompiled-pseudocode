/*
 * XREFs of EmonOverflowHandlerInternalV2Enhanced @ 0x14055A6C0
 * Callers:
 *     EmonOverflowHandlerEnhanced @ 0x140559E00 (EmonOverflowHandlerEnhanced.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeProfileInterruptWithSource @ 0x140492A60 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1404F7E70 (PoGetProcessorIdleAccounting.c)
 *     EmonIsModifiedByBadActorInternalEnhanced @ 0x14055992C (EmonIsModifiedByBadActorInternalEnhanced.c)
 *     EmonPebsOverflowHandler @ 0x14055B32C (EmonPebsOverflowHandler.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall EmonOverflowHandlerInternalV2Enhanced(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // r14
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  int v17; // edx
  __int64 v18; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // rdx^4
  unsigned int v21; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned int v26; // ecx
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  LARGE_INTEGER v34; // rax
  __int64 v35; // r8
  __int64 v36; // r8
  unsigned __int64 result; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+20h] [rbp-40h]
  __int64 v40; // [rsp+28h] [rbp-38h]
  unsigned __int64 v41; // [rsp+30h] [rbp-30h]
  __int64 v42; // [rsp+38h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-18h]
  __int64 v45; // [rsp+50h] [rbp-10h]
  unsigned __int64 v46; // [rsp+58h] [rbp-8h]
  int v48; // [rsp+B0h] [rbp+50h] BYREF
  int v49; // [rsp+B8h] [rbp+58h]

  v48 = 0;
  v2 = a1;
  v3 = a2;
  v46 = EmonOverflowMask & __readmsr(0x38Eu);
  v4 = v46;
  if ( (v46 & 0x4000000000000000LL) != 0 )
  {
    EmonPebsOverflowHandler(910LL);
    v4 = v46 & 0xBFFFFFFFFFFFFFFFuLL;
  }
  v5 = (__int64 *)EmonReservedResourcesList;
  v45 = v3;
  v6 = v3;
  if ( (__int64 *)EmonReservedResourcesList != &EmonReservedResourcesList )
  {
    v7 = 10 * v3;
    do
    {
      v8 = v4 & v5[v7 + 4];
      if ( v8 && v5[2] )
        guard_dispatch_icall_no_overrides(v4 & v5[v7 + 4], v5);
      v5 = (__int64 *)*v5;
      v4 &= ~v8;
    }
    while ( v5 != &EmonReservedResourcesList );
  }
  v9 = !_BitScanForward64((unsigned __int64 *)&v10, v4);
  while ( !v9 )
  {
    v11 = 0;
    v4 &= ~(1LL << v10);
    if ( (unsigned int)v10 >= 0x20 )
    {
      v10 = (unsigned int)(v10 - 32);
      v11 = 1;
    }
    v12 = *(_QWORD *)(KiProcessorBlock[v6] + 88);
    if ( v11 )
    {
      v13 = v11 - 1;
      if ( v13 )
      {
        v14 = v13 - 99;
        if ( v14 )
        {
          if ( v14 == 1 )
            v12 += 72LL;
          else
            v12 = 0LL;
        }
        else
        {
          v12 += 48LL;
        }
      }
      else
      {
        v12 += 24LL;
      }
    }
    v15 = *(_QWORD *)(v12 + 16) + 48 * v10;
    if ( *(_DWORD *)(v15 + 24) )
      goto LABEL_59;
    LODWORD(v16) = 0;
    if ( (unsigned int)v10 > *(_DWORD *)(v12 + 8) || *(_DWORD *)(v15 + 28) == 3 )
      goto LABEL_59;
    v17 = *(_DWORD *)v12;
    v18 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    LOBYTE(v48) = 0;
    v44 = 0LL;
    if ( v17 == 1 )
    {
      v49 = v10 + 32;
      v41 = ~(15LL << (4 * (unsigned __int8)v10)) & __readmsr(0x38Du);
      v22 = __readmsr(0x38Fu);
      _bittestandreset64((__int64 *)&v22, (unsigned int)(v10 + 32));
      v19 = 911;
      v44 = v22;
      v20 = HIDWORD(v22);
      v21 = v22;
    }
    else
    {
      v49 = v10;
      if ( v17 )
        goto LABEL_28;
      v19 = v10 + 390;
      v49 = v10;
      v41 = __readmsr((int)v10 + 390);
      v20 = HIDWORD(v41);
      v21 = v41 & 0xFFAFFFFF;
    }
    v18 = v15;
    __writemsr(v19, __PAIR64__(v20, v21));
    v40 = v15;
LABEL_28:
    v23 = *(unsigned int *)(v18 + 36);
    if ( (_DWORD)v23 )
    {
      KeProfileInterruptWithSource(v2, v23);
      LODWORD(v16) = *(_DWORD *)v18;
      goto LABEL_40;
    }
    v42 = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( HalpTimerProfilingCallback )
      guard_dispatch_icall_no_overrides(v2, v23);
    else
      KeProfileInterruptWithSource(v2, 0LL);
    v24 = HalpProfileData;
    v25 = 296LL * KeGetPcr()->Prcb.Number;
    v26 = *(_DWORD *)(v25 + HalpProfileData + 24);
    if ( v26 )
    {
      LODWORD(v16) = *(_DWORD *)(v25 + HalpProfileData + 16);
      v27 = v25 + 16LL * *(unsigned int *)(v25 + HalpProfileData + 32);
      *(_DWORD *)(v25 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v25 + HalpProfileData + 32) + 1) & 0xF;
      v28 = *(_DWORD *)(v25 + v24 + 20);
      if ( !v28 )
      {
        *(_DWORD *)(v25 + v24 + 20) = 0x2710 / v26;
        if ( !(0x2710 / v26) )
          *(_DWORD *)(v25 + v24 + 20) = 1;
        PoGetProcessorIdleAccounting(&v42);
        v29 = v42;
        goto LABEL_37;
      }
      v33 = v28 - 1;
      *(_DWORD *)(v25 + v24 + 20) = v33;
      if ( !v33 )
      {
        v39 = 0x2710 / v26;
        *(_DWORD *)(v25 + v24 + 20) = 0x2710 / v26;
        if ( !(0x2710 / v26) )
        {
          *(_DWORD *)(v25 + v24 + 20) = 1;
          v39 = 1;
        }
        PoGetProcessorIdleAccounting(&v42);
        v29 = v42;
        if ( v42 == *(_QWORD *)(v25 + v24 + 8) )
        {
          v42 = v39 * (unsigned int)v16;
          v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v35 = HalpProfileData;
          if ( v34.QuadPart != *(_QWORD *)(v25 + HalpProfileData) )
          {
            v16 = PerformanceFrequency.QuadPart
                * (v42
                 * (unsigned __int64)*(unsigned int *)(v25 + HalpProfileData + 24)
                 / (v34.QuadPart - *(_QWORD *)(v25 + HalpProfileData)))
                / 0x989680;
            if ( v16 - 4096 > 0x7FFFEFFF )
              LODWORD(v16) = *(_DWORD *)(v25 + HalpProfileData + 28);
            *(_DWORD *)(v25 + HalpProfileData + 16) = v16;
            *(LARGE_INTEGER *)(v25 + v35) = v34;
          }
          *(_DWORD *)(v27 + v24 + 40) = v16;
          *(LARGE_INTEGER *)(v27 + v24 + 48) = v34;
        }
        else
        {
LABEL_37:
          *(_QWORD *)(v25 + v24 + 8) = v29;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v31 = HalpProfileData;
          *(LARGE_INTEGER *)(v25 + HalpProfileData) = PerformanceCounter;
          *(_DWORD *)(v27 + v24 + 40) = v16;
          *(_QWORD *)(v27 + v24 + 48) = *(_QWORD *)(v25 + v31);
        }
      }
      v2 = a1;
    }
    v18 = v40;
LABEL_40:
    if ( *(_DWORD *)v12 )
    {
      if ( *(_DWORD *)v12 == 1 )
      {
        if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
          v32 = (1LL << EmonFixedCounterResolution) - 1;
        else
          v32 = -1LL;
        __writemsr(v10 + 777, v32 & -(__int64)(unsigned int)v16);
        __writemsr(0x38Fu, v44 | (1LL << v49));
      }
      v36 = v41;
    }
    else
    {
      if ( (unsigned int)EmonCounterResolution < 0x40 )
        v38 = (1LL << EmonCounterResolution) - 1;
      else
        v38 = -1LL;
      __writemsr(v10 + 193, v38 & -(__int64)(unsigned int)v16);
      v36 = v41;
      __writemsr(v10 + 390, v41 | 0x500000);
    }
    EmonIsModifiedByBadActorInternalEnhanced(v10, (int *)v12, v36, &v48);
    if ( (_BYTE)v48 )
      *(_BYTE *)(v18 + 40) = 1;
LABEL_59:
    v9 = !_BitScanForward64((unsigned __int64 *)&v10, v4);
    v6 = v45;
  }
  result = v46;
  __writemsr(0x390u, v46);
  return result;
}
