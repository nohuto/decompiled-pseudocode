/*
 * XREFs of MiReassessZeroThreads @ 0x1404125C0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 *     MiLogZeroPageDecision @ 0x140413620 (MiLogZeroPageDecision.c)
 *     MiRestartZeroingPass @ 0x140413810 (MiRestartZeroingPass.c)
 *     MiGetDesiredZeroTime @ 0x140413BA4 (MiGetDesiredZeroTime.c)
 *     MiReduceZeroingThreads @ 0x140413BFC (MiReduceZeroingThreads.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  LARGE_INTEGER *v3; // rsi
  unsigned int LowPart; // r13d
  __int64 v6; // rbx
  KIRQL v7; // r12
  unsigned int HighPart; // ebp
  unsigned int v9; // eax
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 DesiredZeroTime; // r15
  int *p_HighPart; // rbx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __m128i si128; // xmm0
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+18h] BYREF
  LARGE_INTEGER v24; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v3 = *(LARGE_INTEGER **)(a1 + 336);
    LowPart = v3->LowPart;
    v24 = v3[22];
    v6 = *(unsigned int *)(v24.QuadPart + 56);
    if ( byte_140E2DC81 )
      MiReplenishUltraPageTables(v3[14].LowPart, 0LL);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3[26].QuadPart + 15280));
    if ( *(_DWORD *)(a1 + 388) < 0x1000u )
      goto LABEL_22;
    v3[12].QuadPart += a2;
    HighPart = v3[1].HighPart;
    v9 = v3[2].LowPart + 1;
    v3[2].LowPart = v9;
    if ( !HighPart )
      HighPart = 1;
    if ( v9 < HighPart )
    {
LABEL_22:
      v18 = (_DWORD *)(v3[26].QuadPart + 15280);
LABEL_23:
      MiReleaseSpinLockExclusive(v18, v7);
      return;
    }
    PerformanceFrequency.QuadPart = 0LL;
    v22 = LowPart;
    v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v10.QuadPart = 10000000 * v10.QuadPart / PerformanceFrequency.QuadPart;
    v3[13] = v10;
    v11 = v3[12].QuadPart / ((unsigned __int64)(HighPart << 12) >> 9);
    v12 = *(_QWORD *)(384 * v6 + qword_140E2DC38 + 376);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
    DesiredZeroTime = MiGetDesiredZeroTime(v12, LowPart, HighPart);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
    if ( HighPart > v3[1].LowPart )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v3[5].LowPart = 1;
      v3[5].HighPart = 2;
      *(__m128i *)&v3[6].LowPart = si128;
      *(__m128i *)&v3[8].LowPart = si128;
      *(__m128i *)&v3[10].LowPart = si128;
    }
    else
    {
      if ( v11 > DesiredZeroTime + DesiredZeroTime / 0xA && DesiredZeroTime != -1LL )
        goto LABEL_13;
      ++dword_140EF4E5C;
      if ( v3[5].LowPart )
        v3[5].QuadPart = 0LL;
      p_HighPart = &v3[5].HighPart;
      v19 = (unsigned int)v3[5].HighPart;
      if ( (unsigned int)v19 < 6 )
        v3[v19 + 6].QuadPart = v11;
      v20 = *p_HighPart + 1;
      *p_HighPart = v20;
      if ( v20 != 6 )
      {
        LOBYTE(v17) = 1;
LABEL_19:
        MiLogZeroPageDecision((_DWORD)v3, v22, v11, DesiredZeroTime, HighPart, v17);
        if ( v3[1].HighPart != HighPart )
          *p_HighPart = 0;
        MiRestartZeroingPass(v3);
        v18 = (_DWORD *)(v3[26].QuadPart + 15280);
        goto LABEL_23;
      }
      ++v3[36].LowPart;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiAddZeroingThreads)(
              (LARGE_INTEGER)v24.QuadPart,
              LowPart,
              &v22);
      *p_HighPart = 0;
      if ( v17 != 5 )
        goto LABEL_19;
    }
LABEL_13:
    ++dword_140EF4E60;
    if ( v3[5].LowPart != 1 )
      v3[5].QuadPart = 1LL;
    p_HighPart = &v3[5].HighPart;
    v15 = (unsigned int)v3[5].HighPart;
    if ( (unsigned int)v15 < 6 )
      v3[v15 + 6].QuadPart = v11;
    v16 = *p_HighPart + 1;
    *p_HighPart = v16;
    if ( v16 == 3 || HighPart > v3[1].LowPart )
    {
      ++v3[36].HighPart;
      LOBYTE(v17) = MiReduceZeroingThreads(v3, 0LL, &v22);
      *p_HighPart = 0;
    }
    else
    {
      LOBYTE(v17) = 6;
    }
    goto LABEL_19;
  }
}
