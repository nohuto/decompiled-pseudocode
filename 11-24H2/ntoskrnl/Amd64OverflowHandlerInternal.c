/*
 * XREFs of Amd64OverflowHandlerInternal @ 0x140569440
 * Callers:
 *     Amd64OverflowHandler @ 0x140569420 (Amd64OverflowHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     Amd64IsModifiedByBadActorInternal @ 0x14048EE74 (Amd64IsModifiedByBadActorInternal.c)
 *     KeProfileInterruptWithSource @ 0x140492A60 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1404F7E70 (PoGetProcessorIdleAccounting.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r10d
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned int v26; // ecx
  __int64 v27; // rsi
  int v28; // eax
  LARGE_INTEGER v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v34; // rcx
  __int64 v35; // rbp
  LARGE_INTEGER v36; // rax
  __int64 v37; // r8
  __int64 v38; // [rsp+20h] [rbp-78h]
  unsigned __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  __int64 v41; // [rsp+38h] [rbp-60h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-58h] BYREF
  int v43; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+10h]
  __int64 v45; // [rsp+B0h] [rbp+18h]
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v45 = a3;
  v43 = a1;
  v3 = a2;
  LOBYTE(v43) = 0;
  v4 = 0LL;
  v5 = a3;
  LODWORD(v6) = 0x7FFFFFFF;
  result = KiProcessorBlock[a2];
  v8 = *(_QWORD *)(result + 88);
  v41 = v8;
  v9 = *(_QWORD *)(v8 + 16);
  v38 = v9;
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
    v12 = *(_DWORD *)(v9 + 48 * v4 + 36);
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
    LODWORD(v11) = 0;
    v16 = *((_DWORD *)&Amd64EventSelectRegisters + v15);
    v46 = v16;
    v17 = v10 - 1;
    if ( v17 )
    {
      v18 = v17 - 99;
      if ( v18 )
      {
        if ( v18 != 1 )
        {
LABEL_25:
          v44 = *((_DWORD *)&Amd64PerfCounterRegisters + (unsigned int)(v11 + v4));
          v21 = v44;
          v22 = __readmsr(v44);
          result = (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) & 0xFFFFFFFFFFFFLL;
          if ( result < 0xFFFF80000001LL )
          {
            v39 = __readmsr(v16);
            v23 = v39;
            __writemsr(v16, v39 & 0xFFFFFFFFFFAFFFFFuLL);
            if ( v12 )
            {
              KeProfileInterruptWithSource(v5, v12);
              LODWORD(v6) = *(_DWORD *)(v9 + 48 * v4);
            }
            else
            {
              v40 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              if ( HalpTimerProfilingCallback )
                guard_dispatch_icall_no_overrides(v5, (v39 & 0xFFFFFFFFFFAFFFFFuLL) >> 32);
              else
                KeProfileInterruptWithSource(v5, 0LL);
              v24 = HalpProfileData;
              v25 = 296LL * KeGetPcr()->Prcb.Number;
              v26 = *(_DWORD *)(v25 + HalpProfileData + 24);
              if ( v26 )
              {
                LODWORD(v6) = *(_DWORD *)(v25 + HalpProfileData + 16);
                v27 = v25 + 16LL * *(unsigned int *)(v25 + HalpProfileData + 32);
                *(_DWORD *)(v25 + HalpProfileData + 32) = ((unsigned __int8)*(_DWORD *)(v25 + HalpProfileData + 32) + 1) & 0xF;
                v28 = *(_DWORD *)(v25 + v24 + 20);
                if ( v28 )
                {
                  v31 = v28 - 1;
                  *(_DWORD *)(v25 + v24 + 20) = v31;
                  if ( !v31 )
                  {
                    *(_DWORD *)(v25 + v24 + 20) = 0x2710 / v26;
                    v32 = 0x2710 / v26;
                    if ( !(0x2710 / v26) )
                    {
                      *(_DWORD *)(v25 + v24 + 20) = 1;
                      v32 = 1;
                    }
                    PoGetProcessorIdleAccounting(&v40);
                    if ( v40 == *(_QWORD *)(v25 + v24 + 8) )
                    {
                      v35 = (unsigned int)v6 * v32;
                      v36 = KeQueryPerformanceCounter(&PerformanceFrequency);
                      v37 = HalpProfileData;
                      if ( v36.QuadPart != *(_QWORD *)(v25 + HalpProfileData) )
                      {
                        v6 = PerformanceFrequency.QuadPart
                           * (v35
                            * (unsigned __int64)*(unsigned int *)(v25 + HalpProfileData + 24)
                            / (v36.QuadPart - *(_QWORD *)(v25 + HalpProfileData)))
                           / 0x989680;
                        if ( v6 - 4096 > 0x7FFFEFFF )
                          LODWORD(v6) = *(_DWORD *)(v25 + HalpProfileData + 28);
                        *(_DWORD *)(v25 + HalpProfileData + 16) = v6;
                        *(LARGE_INTEGER *)(v25 + v37) = v36;
                      }
                      *(_DWORD *)(v27 + v24 + 40) = v6;
                      *(LARGE_INTEGER *)(v27 + v24 + 48) = v36;
                    }
                    else
                    {
                      *(_QWORD *)(v25 + v24 + 8) = v40;
                      PerformanceCounter = KeQueryPerformanceCounter(0LL);
                      v34 = HalpProfileData;
                      *(LARGE_INTEGER *)(v25 + HalpProfileData) = PerformanceCounter;
                      *(_DWORD *)(v27 + v24 + 40) = v6;
                      *(_QWORD *)(v27 + v24 + 48) = *(_QWORD *)(v25 + v34);
                    }
                    v8 = v41;
                  }
                }
                else
                {
                  *(_DWORD *)(v25 + v24 + 20) = 0x2710 / v26;
                  if ( !(0x2710 / v26) )
                    *(_DWORD *)(v25 + v24 + 20) = 1;
                  PoGetProcessorIdleAccounting(&v40);
                  *(_QWORD *)(v25 + v24 + 8) = v40;
                  v29 = KeQueryPerformanceCounter(0LL);
                  v30 = HalpProfileData;
                  *(LARGE_INTEGER *)(v25 + HalpProfileData) = v29;
                  *(_DWORD *)(v27 + v24 + 40) = v6;
                  *(_QWORD *)(v27 + v24 + 48) = *(_QWORD *)(v25 + v30);
                }
                v21 = v44;
              }
              v23 = v39;
              v9 = v38;
            }
            if ( !*(_DWORD *)v8 && *(_BYTE *)(*(_QWORD *)(v9 + 48 * v4 + 16) + 8LL) )
              __writemsr(*((_DWORD *)&Amd64PerfCounterRegisters + (unsigned int)(v4 + 1)), 0xFFFFuLL);
            __writemsr(v21, -(__int64)(unsigned int)v6);
            __writemsr(v46, v23 | 0x500000);
            result = Amd64IsModifiedByBadActorInternal(v4, *(_DWORD *)v8, v23, (bool *)&v43);
            v5 = v45;
            if ( (_BYTE)v43 )
              *(_BYTE *)(v9 + 48 * v4 + 40) = 1;
          }
          goto LABEL_54;
        }
        v11 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -48LL )
          LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 52LL);
      }
      v19 = *(_QWORD *)(KiProcessorBlock[v3] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v3] + 88) != -24LL )
        LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v3] + 88) + 28LL);
      LODWORD(v11) = v19 + v11;
    }
    v20 = *(_QWORD *)(KiProcessorBlock[v3] + 88);
    if ( v20 )
      LODWORD(v20) = *(_DWORD *)(v20 + 4);
    LODWORD(v11) = v20 + v11;
    goto LABEL_25;
  }
  return result;
}
