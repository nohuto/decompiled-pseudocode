/*
 * XREFs of EtwpUpdateGlobalGroupMasks @ 0x14085C8B8
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD2B8 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD314 (EtwReferenceSpinLockCounters.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     EtwpUpdateKernelGroupsWork @ 0x140A96C80 (EtwpUpdateKernelGroupsWork.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 *     PspGetNextJob @ 0x14085D390 (PspGetNextJob.c)
 */

__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 *v9; // rdx
  __int64 v10; // r9
  bool v11; // zf
  _DWORD *v12; // rbx
  __int128 v13; // xmm1
  void *v14; // rcx
  __int64 NextJob; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  int v25; // esi
  __int64 v27; // r9
  __int64 v28; // r8
  __int128 *v29; // rdx
  int v30; // eax
  __int128 v31; // [rsp+30h] [rbp-39h] BYREF
  __int128 v32; // [rsp+40h] [rbp-29h]
  __int128 v33; // [rsp+50h] [rbp-19h] BYREF
  __int128 v34; // [rsp+60h] [rbp-9h]
  _OWORD v35[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = a3;
  v4 = a2;
  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (unsigned int)v3 < 8
    && ((unsigned int)v4 >= *(_DWORD *)(a1 + 16) || (*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8 * v4) & 1) != 0) )
  {
    v25 = -2147483611;
  }
  else
  {
    v7 = 10LL;
    v8 = a1 - (_QWORD)&v31 + 4556;
    v31 = 0LL;
    v32 = 0LL;
    do
    {
      v9 = &v31;
      v10 = 8LL;
      do
      {
        *(_DWORD *)v9 |= *(_DWORD *)((char *)v9 + v8);
        v9 = (__int128 *)((char *)v9 + 4);
        --v10;
      }
      while ( v10 );
      v8 += 32LL;
      --v7;
    }
    while ( v7 );
    v11 = EtwpBootPhase == 0;
    v12 = (_DWORD *)(a1 + 4524);
    v13 = v32;
    *(_OWORD *)(a1 + 4524) = v31;
    *(_OWORD *)(a1 + 4540) = v13;
    if ( !v11 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        NextJob = PspGetNextJob(v14);
        v14 = (void *)NextJob;
        if ( !NextJob )
          break;
        if ( (*(_DWORD *)(NextJob + 1552) & 0x40000000) != 0 && PsIsServerSilo(NextJob) )
        {
LABEL_11:
          v16 = *((_QWORD *)PsGetServerSiloGlobals((__int64)v14) + 104);
          if ( v16 )
          {
            v27 = 8LL;
            v28 = v16 - (_QWORD)&v31;
            v29 = &v31;
            do
            {
              *(_DWORD *)v29 |= *(_DWORD *)((char *)v29 + v28 + 4524);
              v29 = (__int128 *)((char *)v29 + 4);
              --v27;
            }
            while ( v27 );
          }
          while ( 1 )
          {
            v17 = PspGetNextJob(v14);
            v14 = (void *)v17;
            if ( !v17 )
              goto LABEL_16;
            if ( (*(_DWORD *)(v17 + 1552) & 0x40000000) != 0 && PsIsServerSilo(v17) )
              goto LABEL_11;
          }
        }
      }
    }
LABEL_16:
    v18 = EtwpHostSiloState - (_QWORD)&v31;
    v19 = &v31;
    v20 = 8LL;
    do
    {
      *(_DWORD *)v19 |= *(_DWORD *)((char *)v19 + v18 + 4524);
      v19 = (__int128 *)((char *)v19 + 4);
      --v20;
    }
    while ( v20 );
    v21 = 0LL;
    v22 = 2LL;
    do
    {
      v23 = (__m128)_mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v21]);
      v24 = (__m128)_mm_loadu_si128((const __m128i *)((char *)&v31 + v21 * 16));
      v35[v21++] = _mm_andnot_ps(v24, v23);
      *(__int128 *)((char *)&v32 + v21 * 16) = (__int128)_mm_andnot_ps(v23, v24);
      --v22;
    }
    while ( v22 );
    EtwpDisableKernelTrace(&v31, (__int64)v35, (_QWORD *)a1, (unsigned int)v4);
    v25 = EtwpEnableKernelTrace((char *)&v31, &v33, (_QWORD *)a1, v4);
    if ( v25 < 0 )
    {
      do
      {
        v30 = ~*(_DWORD *)((char *)v12 + (_QWORD)&v33 - a1 - 4524);
        *v12 &= v30;
        v12[8 * v3 + 8] &= v30;
        *(_DWORD *)((char *)v12++ + (_QWORD)&v31 - a1 - 4524) &= v30;
        --v6;
      }
      while ( v6 );
    }
    PerfGlobalGroupMask[0] = v31;
    xmmword_140FC6B50 = v32;
    if ( (BYTE4(v31) & 4) != 0 )
      _interlockedbittestandset(&KiCpuTracingFlags, 0);
    else
      _interlockedbittestandreset(&KiCpuTracingFlags, 0);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v25;
}
