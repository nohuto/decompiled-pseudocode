/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x140547A84
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404C6408 (HalpTimerEnableHypervisorTimer.c)
 *     HalpIsPartitionCpuManager @ 0x1404F52CC (HalpIsPartitionCpuManager.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EC28 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547D50 (HalpTimerTestHypervisorTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpHvBuildDeviceId @ 0x140B4E6A0 (HalpHvBuildDeviceId.c)
 */

char HalpTimerInitializeHypervisorTimer()
{
  __int64 v5; // rbx
  int v6; // esi
  unsigned int *v7; // r12
  int v8; // r14d
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  ULONG_PTR *v16; // rax
  int v17; // r8d
  _BYTE v19[4]; // [rsp+38h] [rbp-39h] BYREF
  int v20; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  int v22; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v24[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int128 v29; // [rsp+90h] [rbp+1Fh]

  v23 = 0LL;
  v29 = 0LL;
  v21 = 0LL;
  v19[0] = 0;
  LOBYTE(_RAX) = HalpIsPartitionCpuManager();
  if ( (_BYTE)_RAX )
  {
    if ( qword_140FC1160 )
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
            LODWORD(_RAX) = HalpTimerTestHypervisorTimer(v5, v19);
            HalpHypervisorHpet = 0LL;
            if ( (int)_RAX >= 0 )
            {
              v6 = 1;
              v7 = *(unsigned int **)(v5 + 72);
              v8 = 0;
              if ( v19[0] )
              {
                v9 = *(_DWORD **)(v5 + 288);
                v10 = v9[1];
                HIWORD(v20) = *v9 >> 8;
                BYTE1(v20) = *(_BYTE *)v9;
                LOBYTE(v20) = (8 * *((_BYTE *)v9 + 4)) | (v10 >> 5) & 7;
                HalpHvBuildDeviceId(&v20, v9 + 2, 0LL, &v23);
              }
              else
              {
                v11 = *(_DWORD *)(v5 + 224);
                if ( (v11 & 0x200) != 0 )
                {
                  LODWORD(_RAX) = HalpInterruptGsiToLine(*(_DWORD *)(v5 + 88), &v21);
                  if ( (int)_RAX < 0 )
                    return _RAX;
                }
                else if ( (v11 & 0x100) != 0 )
                {
                  v12 = *(_DWORD *)(v5 + 84);
                  if ( v12 >= 8 )
                  {
                    LODWORD(v21) = 45057;
                    v12 -= 8;
                  }
                  else
                  {
                    LODWORD(v21) = 45056;
                  }
                  HIDWORD(v21) = v12;
                }
                v20 = *(_DWORD *)(v5 + 96);
                v22 = *(_DWORD *)(v5 + 92);
                HalpInterruptApplyOverrides((__int64)&v21, &v22, &v20);
                v6 = v20;
                v8 = v22;
                v23 = 0x8000000000000000uLL;
                LOBYTE(v23) = v21;
              }
              LODWORD(_RAX) = guard_dispatch_icall_no_overrides(*v7, v23);
              if ( (int)_RAX >= 0 )
              {
                if ( v19[0] )
                {
                  *(_DWORD *)(v5 + 236) = 0;
                  *(_DWORD *)(v5 + 232) = DWORD2(v29);
                  *(_QWORD *)(v5 + 240) = HIDWORD(v29);
                  v15 = *(_DWORD *)(v5 + 184) | 0x10;
LABEL_25:
                  HalpHypervisorHpet = v5;
                  *(_DWORD *)(v5 + 184) = v15 | 0x40;
                  LOBYTE(_RAX) = HalpTimerEnableHypervisorTimer(v14, v13);
                  return _RAX;
                }
                v24[4] = -1;
                v26 = *((_QWORD *)&v29 + 1);
                v24[1] = 0;
                v25 = 8LL;
                v27 = 0LL;
                v28 = 212LL;
                v24[0] = v8;
                v24[2] = v6;
                v24[3] = 0;
                v24[5] = 1;
                v16 = HalpInterruptLookupController(v21);
                if ( v16 )
                {
                  LODWORD(_RAX) = HalpInterruptSetRemappedLineStateInternal((__int64)v16, (int *)&v21, (__int64)v24);
                  if ( (int)_RAX >= 0 )
                  {
                    v15 = *(_DWORD *)(v5 + 184) & 0xFFFFFFEF;
                    goto LABEL_25;
                  }
                }
                else
                {
                  LOBYTE(_RAX) = HalpInterruptSetProblemEx(
                                   0LL,
                                   17,
                                   v17,
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
