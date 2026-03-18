/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x14054A1C4
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD038 (HalpTimerEnableHypervisorTimer.c)
 *     HalpIsPartitionCpuManager @ 0x1404F79EC (HalpIsPartitionCpuManager.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140541328 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpFindTimer @ 0x1405471A0 (HalpFindTimer.c)
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140B4C660 (HalpHvBuildDeviceId.c)
 */

char HalpTimerInitializeHypervisorTimer()
{
  __int64 v5; // rbx
  int v6; // esi
  unsigned int *v7; // r12
  char v8; // r15
  int v9; // r14d
  _DWORD *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  ULONG_PTR *v20; // rax
  int v21; // r8d
  _BYTE v23[4]; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  int v26; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v28[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1h]
  __int64 v30; // [rsp+78h] [rbp+7h]
  __int64 v31; // [rsp+80h] [rbp+Fh]
  __int64 v32; // [rsp+88h] [rbp+17h]
  __int128 v33; // [rsp+90h] [rbp+1Fh] BYREF

  v27 = 0LL;
  v33 = 0LL;
  v25 = 0LL;
  v23[0] = 0;
  LOBYTE(_RAX) = HalpIsPartitionCpuManager();
  if ( (_BYTE)_RAX )
  {
    if ( qword_140FC0F00 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        _RAX = (__int64)HalpFindTimer(3, 32, 24576, 3840, 0);
        v5 = _RAX;
        if ( _RAX )
        {
          LODWORD(_RAX) = HalpTimerInitialize(_RAX);
          if ( (int)_RAX >= 0 )
          {
            *(_DWORD *)(v5 + 184) |= 4u;
            HalpHypervisorHpet = v5;
            LODWORD(_RAX) = HalpTimerTestHypervisorTimer(v5, v23);
            HalpHypervisorHpet = 0LL;
            if ( (int)_RAX >= 0 )
            {
              v6 = 1;
              v7 = *(unsigned int **)(v5 + 72);
              v8 = 0;
              v9 = 0;
              if ( v23[0] )
              {
                v10 = *(_DWORD **)(v5 + 288);
                v11 = v10[1];
                HIWORD(v24) = *v10 >> 8;
                BYTE1(v24) = *(_BYTE *)v10;
                LOBYTE(v24) = (8 * *((_BYTE *)v10 + 4)) | (v11 >> 5) & 7;
                HalpHvBuildDeviceId(&v24, v10 + 2, 0LL, &v27);
              }
              else
              {
                v13 = *(_DWORD *)(v5 + 224);
                if ( (v13 & 0x200) != 0 )
                {
                  LODWORD(_RAX) = HalpInterruptGsiToLine(*(unsigned int *)(v5 + 88), &v25);
                  if ( (int)_RAX < 0 )
                    return _RAX;
                  v8 = *((_BYTE *)v7 + 4);
                }
                else if ( (v13 & 0x100) != 0 )
                {
                  v14 = *(_DWORD *)(v5 + 84);
                  if ( v14 >= 8 )
                  {
                    LODWORD(v25) = 45057;
                    v14 -= 8;
                  }
                  else
                  {
                    LODWORD(v25) = 45056;
                  }
                  HIDWORD(v25) = v14;
                }
                v24 = *(_DWORD *)(v5 + 96);
                v26 = *(_DWORD *)(v5 + 92);
                HalpInterruptApplyOverrides((__int64)&v25, &v26, &v24);
                v6 = v24;
                v9 = v26;
                v27 = 0x8000000000000000uLL;
                LOBYTE(v27) = v25;
              }
              LOBYTE(v12) = v8;
              LODWORD(_RAX) = guard_dispatch_icall_no_overrides(*v7, v27, v12, &v33);
              if ( (int)_RAX >= 0 )
              {
                if ( v23[0] )
                {
                  *(_DWORD *)(v5 + 236) = 0;
                  *(_DWORD *)(v5 + 232) = DWORD2(v33);
                  *(_QWORD *)(v5 + 240) = HIDWORD(v33);
                  v19 = *(_DWORD *)(v5 + 184) | 0x10;
LABEL_25:
                  HalpHypervisorHpet = v5;
                  *(_DWORD *)(v5 + 184) = v19 | 0x40;
                  LOBYTE(_RAX) = HalpTimerEnableHypervisorTimer(v16, v15, v17, v18);
                  return _RAX;
                }
                v28[4] = -1;
                v30 = *((_QWORD *)&v33 + 1);
                v28[1] = 0;
                v29 = 8LL;
                v31 = 0LL;
                v32 = 212LL;
                v28[0] = v9;
                v28[2] = v6;
                v28[3] = 0;
                v28[5] = 1;
                v20 = HalpInterruptLookupController(v25);
                if ( v20 )
                {
                  LODWORD(_RAX) = HalpInterruptSetRemappedLineStateInternal(
                                    (__int64)v20,
                                    (unsigned int *)&v25,
                                    (__int64)v28);
                  if ( (int)_RAX >= 0 )
                  {
                    v19 = *(_DWORD *)(v5 + 184) & 0xFFFFFFEF;
                    goto LABEL_25;
                  }
                }
                else
                {
                  LOBYTE(_RAX) = HalpInterruptSetProblemEx(
                                   0LL,
                                   17,
                                   v21,
                                   (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                                   0xCC4u);
                }
              }
            }
          }
        }
      }
    }
  }
  return _RAX;
}
