/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1400376D4
 * Callers:
 *     VidSchiExecuteMmIoFlipAtISR @ 0x140037630 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

char __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  BOOL v7; // esi
  LARGE_INTEGER v9; // r9
  LONGLONG v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  signed __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int128 v19; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  PerformanceCounter.LowPart = _InterlockedExchange((volatile __int32 *)(a2 + 44420), 0);
  v7 = a3 != 0;
  v9.QuadPart = 0LL;
  if ( !PerformanceCounter.LowPart )
  {
    LODWORD(v10) = a3 != 0;
    if ( a3 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v9 = PerformanceCounter;
      LODWORD(v10) = v7;
    }
LABEL_4:
    if ( !(_DWORD)v10 )
      return PerformanceCounter.LowPart;
    goto LABEL_8;
  }
  v9 = KeQueryPerformanceCounter(0LL);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 44432), 0LL, 0LL);
  v14 = *(_QWORD *)(a2 + 44304);
  v15 = v13;
  LODWORD(v10) = v7;
  PerformanceCounter.QuadPart = v9.QuadPart - v14;
  if ( !v15 )
    goto LABEL_4;
  if ( PerformanceCounter.QuadPart <= v15 )
    goto LABEL_4;
  PerformanceCounter.QuadPart /= v15;
  v10 = (v9.QuadPart - v14) / v15;
  if ( a3 )
    goto LABEL_4;
  if ( !PerformanceCounter.LowPart )
    return PerformanceCounter.LowPart;
  v9.QuadPart = v14 + v15 * PerformanceCounter.QuadPart;
LABEL_8:
  *(_QWORD *)(a2 + 44312) += (unsigned int)v10;
  v11 = *(_DWORD *)(a2 + 44416) + 1;
  *(_DWORD *)(a2 + 44416) = v11;
  if ( v11 < *(_DWORD *)(a2 + 83092) )
  {
    LOBYTE(PerformanceCounter.LowPart) = 1;
  }
  else
  {
    *(_DWORD *)(a2 + 44328) += v10;
    LOBYTE(PerformanceCounter.LowPart) = 0;
    *(_DWORD *)(a2 + 44416) = 0;
    *(LARGE_INTEGER *)(a2 + 44320) = v9;
  }
  *(_BYTE *)(a2 + 44344) = PerformanceCounter.LowPart;
  *(LARGE_INTEGER *)(a2 + 44304) = v9;
  if ( *(_BYTE *)(a2 + 8) && !*(_BYTE *)(a1 + 156) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v18 = 0LL;
    LODWORD(v19) = 0;
    v17 = 0LL;
    PerformanceCounter.LowPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[64])(
                                   v12,
                                   0LL,
                                   0LL,
                                   &v17);
    if ( (PerformanceCounter.LowPart & 0x80000000) == 0 )
      v3 = *((_QWORD *)&v17 + 1);
    *(_QWORD *)(a2 + 44336) = v3;
  }
  return PerformanceCounter.LowPart;
}
