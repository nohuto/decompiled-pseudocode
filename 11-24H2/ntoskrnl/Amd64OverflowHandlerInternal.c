/*
 * XREFs of Amd64OverflowHandlerInternal @ 0x14056BFB0
 * Callers:
 *     Amd64OverflowHandler @ 0x14056BF90 (Amd64OverflowHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     Amd64IsModifiedByBadActorInternal @ 0x1404943E4 (Amd64IsModifiedByBadActorInternal.c)
 *     KeProfileInterruptWithSource @ 0x140498080 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1404FA590 (PoGetProcessorIdleAccounting.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall Amd64OverflowHandlerInternal(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r11
  unsigned __int64 v6; // r15
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r10d
  int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // ecx
  __int64 v28; // rsi
  int v29; // eax
  LARGE_INTEGER v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v35; // rcx
  __int64 v36; // rbp
  LARGE_INTEGER v37; // rax
  __int64 v38; // r8
  __int64 v39; // [rsp+20h] [rbp-78h]
  unsigned __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h] BYREF
  __int64 v42; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-58h] BYREF
  int v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+10h]
  __int64 v46; // [rsp+B0h] [rbp+18h]
  unsigned int v47; // [rsp+B8h] [rbp+20h]

  v46 = a3;
  v44 = a1;
  v3 = a2;
  LOBYTE(v44) = 0;
  v4 = 0LL;
  v5 = a3;
  LODWORD(v6) = 0x7FFFFFFF;
  result = KiProcessorBlock[a2];
  v8 = *(_QWORD *)(result + 88);
  v42 = v8;
  v9 = *(_QWORD *)(v8 + 16);
  v39 = v9;
  if ( *(_DWORD *)(v8 + 4) )
  {
    while ( *(_DWORD *)(v9 + 48 * v4 + 24) )
    {
LABEL_54:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 4) )
        return result;
    }
    v10 = *(_DWORD *)v8;
    LODWORD(v11) = 0;
    v12 = *(unsigned int *)(v9 + 48 * v4 + 36);
    if ( *(_DWORD *)v8 != 1 )
    {
      if ( *(_DWORD *)v8 != 100 )
      {
        if ( *(_DWORD *)v8 != 101 )
          goto LABEL_14;
        v11 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -48LL )
          LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 52LL);
      }
      v13 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -24LL )
        LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 28LL);
      LODWORD(v11) = v13 + v11;
    }
    v14 = *(_QWORD *)(KiProcessorBlock[v3] + 88);
    if ( v14 )
      LODWORD(v14) = *(_DWORD *)(v14 + 4);
    LODWORD(v11) = v14 + v11;
LABEL_14:
    v15 = (unsigned int)(v11 + v4);
    v16 = 0LL;
    v17 = *((_DWORD *)&Amd64EventSelectRegisters + v15);
    v47 = v17;
    v18 = v10 - 1;
    if ( v18 )
    {
      v19 = v18 - 99;
      if ( v19 )
      {
        if ( v19 != 1 )
        {
LABEL_25:
          v45 = *((_DWORD *)&Amd64PerfCounterRegisters + (unsigned int)(v16 + v4));
          v22 = v45;
          v23 = __readmsr(v45);
          result = (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) & 0xFFFFFFFFFFFFLL;
          if ( result < 0xFFFF80000001LL )
          {
            v40 = __readmsr(v17);
            v24 = v40;
            __writemsr(v17, v40 & 0xFFFFFFFFFFAFFFFFuLL);
            if ( (_DWORD)v12 )
            {
              KeProfileInterruptWithSource(v5, (unsigned int)v12);
              LODWORD(v6) = *(_DWORD *)(v9 + 48 * v4);
            }
            else
            {
              v41 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              if ( HalpTimerProfilingCallback )
                guard_dispatch_icall_no_overrides(v5, (v40 & 0xFFFFFFFFFFAFFFFFuLL) >> 32, v16, v12);
              else
                KeProfileInterruptWithSource(v5, 0LL);
              v25 = HalpProfileData;
              v26 = 296LL * KeGetPcr()->Prcb.Number;
              v27 = *(_DWORD *)(v26 + HalpProfileData + 24);
              if ( v27 )
              {
                LODWORD(v6) = *(_DWORD *)(v26 + HalpProfileData + 16);
                v28 = v26 + 16LL * *(unsigned int *)(v26 + HalpProfileData + 32);
                *(_DWORD *)(v26 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v26 + HalpProfileData + 32) + 1) & 0xF;
                v29 = *(_DWORD *)(v26 + v25 + 20);
                if ( v29 )
                {
                  v32 = v29 - 1;
                  *(_DWORD *)(v26 + v25 + 20) = v32;
                  if ( !v32 )
                  {
                    *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
                    v33 = 0x2710 / v27;
                    if ( !(0x2710 / v27) )
                    {
                      *(_DWORD *)(v26 + v25 + 20) = 1;
                      v33 = 1;
                    }
                    PoGetProcessorIdleAccounting(&v41);
                    if ( v41 == *(_QWORD *)(v26 + v25 + 8) )
                    {
                      v36 = (unsigned int)v6 * v33;
                      v37 = KeQueryPerformanceCounter(&PerformanceFrequency);
                      v38 = HalpProfileData;
                      if ( v37.QuadPart != *(_QWORD *)(v26 + HalpProfileData) )
                      {
                        v6 = PerformanceFrequency.QuadPart
                           * (v36
                            * (unsigned __int64)*(unsigned int *)(v26 + HalpProfileData + 24)
                            / (v37.QuadPart - *(_QWORD *)(v26 + HalpProfileData)))
                           / 0x989680;
                        if ( v6 - 4096 > 0x7FFFEFFF )
                          LODWORD(v6) = *(_DWORD *)(v26 + HalpProfileData + 28);
                        *(_DWORD *)(v26 + HalpProfileData + 16) = v6;
                        *(LARGE_INTEGER *)(v26 + v38) = v37;
                      }
                      *(_DWORD *)(v28 + v25 + 40) = v6;
                      *(LARGE_INTEGER *)(v28 + v25 + 48) = v37;
                    }
                    else
                    {
                      *(_QWORD *)(v26 + v25 + 8) = v41;
                      PerformanceCounter = KeQueryPerformanceCounter(0LL);
                      v35 = HalpProfileData;
                      *(LARGE_INTEGER *)(v26 + HalpProfileData) = PerformanceCounter;
                      *(_DWORD *)(v28 + v25 + 40) = v6;
                      *(_QWORD *)(v28 + v25 + 48) = *(_QWORD *)(v26 + v35);
                    }
                    v8 = v42;
                  }
                }
                else
                {
                  *(_DWORD *)(v26 + v25 + 20) = 0x2710 / v27;
                  if ( !(0x2710 / v27) )
                    *(_DWORD *)(v26 + v25 + 20) = 1;
                  PoGetProcessorIdleAccounting(&v41);
                  *(_QWORD *)(v26 + v25 + 8) = v41;
                  v30 = KeQueryPerformanceCounter(0LL);
                  v31 = HalpProfileData;
                  *(LARGE_INTEGER *)(v26 + HalpProfileData) = v30;
                  *(_DWORD *)(v28 + v25 + 40) = v6;
                  *(_QWORD *)(v28 + v25 + 48) = *(_QWORD *)(v26 + v31);
                }
                v22 = v45;
              }
              v24 = v40;
              v9 = v39;
            }
            if ( !*(_DWORD *)v8 && *(_BYTE *)(*(_QWORD *)(v9 + 48 * v4 + 16) + 8LL) )
              __writemsr(*((_DWORD *)&Amd64PerfCounterRegisters + (unsigned int)(v4 + 1)), 0xFFFFuLL);
            __writemsr(v22, -(__int64)(unsigned int)v6);
            __writemsr(v47, v24 | 0x500000);
            result = Amd64IsModifiedByBadActorInternal(v4, *(_DWORD *)v8, v24, (bool *)&v44);
            v5 = v46;
            if ( (_BYTE)v44 )
              *(_BYTE *)(v9 + 48 * v4 + 40) = 1;
          }
          goto LABEL_54;
        }
        v16 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -48LL )
          LODWORD(v16) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 52LL);
      }
      v20 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -24LL )
        LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 28LL);
      LODWORD(v16) = v20 + v16;
    }
    v21 = *(_QWORD *)(KiProcessorBlock[v3] + 88);
    if ( v21 )
      LODWORD(v21) = *(_DWORD *)(v21 + 4);
    v16 = (unsigned int)(v21 + v16);
    goto LABEL_25;
  }
  return result;
}
