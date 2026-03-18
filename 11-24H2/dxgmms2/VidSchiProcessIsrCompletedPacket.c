/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x140005250
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x140005720 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int8 v15; // cl
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rcx
  signed __int64 v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // eax
  char v28; // al
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // [rsp+40h] [rbp-88h]
  int v35; // [rsp+44h] [rbp-84h]
  _QWORD v36[2]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v37; // [rsp+58h] [rbp-70h]
  __int128 v38; // [rsp+68h] [rbp-60h] BYREF
  __int64 v39; // [rsp+78h] [rbp-50h]
  int v40; // [rsp+80h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = a2;
  v8 = *a4;
  v35 = a3;
  v34 = *a4;
  if ( (_DWORD)v6 == *(_DWORD *)(a1 + 72) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    if ( (_DWORD)v9 == (_DWORD)v6 )
      return v5;
    v10 = *(unsigned int *)(a1 + 1428);
    v11 = *(_QWORD *)(a1 + 8 * v10 + 1440);
    if ( !v11 )
      break;
    if ( *(_DWORD *)(v11 + 88) == 3 || (_DWORD)v8 == 9 && *(_DWORD *)(v11 + 104) == (_DWORD)v6 )
      return 1;
    _InterlockedExchange((volatile __int32 *)(a1 + 1428), ((_BYTE)v10 + 1) & 0xF);
    v12 = *(unsigned int *)(a1 + 1572);
    *(_DWORD *)(a1 + 516) = ((unsigned __int8)*(_DWORD *)(a1 + 516) + 1) & 0xF;
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1584);
    v14 = ((_BYTE)v12 + 1) & 0xF;
    _InterlockedExchange((volatile __int32 *)(a1 + 1572), ((_BYTE)v12 + 1) & 0xF);
    v15 = (_BYTE)a3 << 6;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + 104);
    v9 = *(_QWORD *)(v11 + 104);
    if ( a3 )
    {
      ++*(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 64) = v9;
      *(_QWORD *)(a1 + 72) = v9;
      ++*(_QWORD *)(v4 + 488);
      *(_DWORD *)(v11 + 92) ^= ((unsigned __int8)*(_DWORD *)(v11 + 92) ^ v15) & 0x40;
      if ( (_DWORD)v8 != 9 )
        ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 104) + 40LL) + 2848LL);
    }
    else
    {
      *(_DWORD *)(v11 + 92) ^= ((unsigned __int8)*(_DWORD *)(v11 + 92) ^ v15) & 0x40;
    }
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 10;
    if ( *(_QWORD *)(v11 + 56) )
    {
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v11 + 56) + 52LL) = 10;
    }
    *(_DWORD *)(v11 + 16) = 1;
    v36[0] = 0LL;
    v37 = 0LL;
    v36[1] = v13;
    VidSchiUpdateContextRunningTimeAtISR(v36, v8);
    v16 = *(_QWORD *)(a1 + 8 * v14 + 1584);
    if ( v16 && v16 != v13 )
      *(_QWORD *)(v16 + 464) = *(_QWORD *)(v13 + 464);
    if ( (*(_DWORD *)(v11 + 92) & 0x200) != 0 )
    {
      v17 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(*(_QWORD *)(v11 + 56) + 168LL) + 3432);
      if ( _InterlockedExchange((volatile __int32 *)(v17 + 44420), 0) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 44432), 0LL, 0LL);
        v21 = *(_QWORD *)(v17 + 44304);
        v22 = v20;
        v23 = PerformanceCounter.QuadPart - v21;
        if ( v22 )
        {
          if ( v23 > v22 )
          {
            v24 = v23 / v22;
            v25 = v24;
            if ( (_DWORD)v24 )
            {
              v26 = v21 + v22 * v24;
              *(_QWORD *)(v17 + 44312) += (unsigned int)v24;
              v27 = *(_DWORD *)(v17 + 44416) + 1;
              *(_DWORD *)(v17 + 44416) = v27;
              if ( v27 < *(_DWORD *)(v17 + 83092) )
              {
                v28 = 1;
              }
              else
              {
                *(_DWORD *)(v17 + 44328) += v25;
                v28 = 0;
                *(_DWORD *)(v17 + 44416) = 0;
                *(_QWORD *)(v17 + 44320) = v26;
              }
              *(_BYTE *)(v17 + 44344) = v28;
              *(_QWORD *)(v17 + 44304) = v26;
              if ( *(_BYTE *)(v17 + 8) )
              {
                if ( !*(_BYTE *)(v4 + 156) )
                {
                  v29 = *(_QWORD *)(v4 + 8);
                  v39 = 0LL;
                  v40 = 0;
                  v38 = 0LL;
                  v30 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
                          v29,
                          0LL,
                          0LL,
                          &v38);
                  v31 = 0LL;
                  if ( v30 >= 0 )
                    v31 = *((_QWORD *)&v38 + 1);
                  *(_QWORD *)(v17 + 44336) = v31;
                }
              }
            }
          }
        }
      }
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 144LL) = *(_QWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v11 + 56)
                                                                                           + 168LL)
                                                                         + 3432)
                                                             + 44304LL);
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 136LL) = *(_QWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v11 + 56)
                                                                                           + 168LL)
                                                                         + 3432)
                                                             + 44312LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 3020));
    VidSchiProfilePerformanceTick(8, v4, a1, 0, 0LL, 0LL, v11, 0LL);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 2032), (PSLIST_ENTRY)(v11 + 32));
    v8 = v34;
    a3 = v35;
  }
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v32 = *(_QWORD *)(v4 + 16);
    v33 = *(unsigned int *)(a1 + 152);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1LL, v6, v33, v32);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140005696LL);
  }
  *(_DWORD *)(a1 + 2152) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 2145) = 1;
  return result;
}
