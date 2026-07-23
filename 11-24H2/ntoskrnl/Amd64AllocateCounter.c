/*
 * XREFs of Amd64AllocateCounter @ 0x140567A3C
 * Callers:
 *     Amd64EnableMonitoring @ 0x140568470 (Amd64EnableMonitoring.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpAllocateHalCounters @ 0x14053BC68 (HalpAllocateHalCounters.c)
 *     Amd64CheckCoreEventConstraints @ 0x140567D64 (Amd64CheckCoreEventConstraints.c)
 */

__int64 __fastcall Amd64AllocateCounter(signed __int32 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4, int *a5)
{
  int v7; // esi
  __int64 HalCounters; // rax
  __int64 v9; // rdx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 i; // r13
  unsigned int v17; // r8d
  __int64 j; // rcx
  __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _BYTE v31[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+28h] [rbp-40h]

  v31[0] = 0;
  *a4 = 0;
  v7 = 0;
  HalCounters = HalpAllocateHalCounters();
  if ( (int)HalCounters < 0 )
    return 2147483665LL;
  if ( !a2 )
    return 3221225485LL;
  v11 = *(_DWORD *)(v9 + 312);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v7 = 101;
    }
    else
    {
      v7 = 100;
    }
  }
  LODWORD(HalCounters) = KeGetPcr()->Prcb.Number;
  v13 = (unsigned int)HalCounters;
  v32 = (unsigned int)HalCounters;
  v14 = *(_QWORD *)(KiProcessorBlock[HalCounters] + 88);
  if ( v7 )
  {
    if ( v7 == 100 )
      v14 += 48LL;
    else
      v14 += 72LL;
  }
  v15 = *(_QWORD *)(v14 + 16);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v17 = *(_DWORD *)(v14 + 4);
    if ( (unsigned int)i >= v17 )
    {
      _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
      return 2147483665LL;
    }
    if ( (unsigned int)(v7 - 100) <= 1 )
    {
      if ( a1 != 1 )
        return 3221225659LL;
      for ( j = 0LL; (unsigned int)j < v17; j = (unsigned int)(j + 1) )
      {
        if ( *a2 == *(_DWORD *)(v15 + 48 * j + 36) )
        {
          v19 = *(_QWORD *)(v15 + 48 * j + 16);
          _m_prefetchw((const void *)(v19 + 16));
          v20 = *(_QWORD *)(v19 + 16);
          while ( (unsigned __int64)(v20 + 1) > 1 )
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), v20 + 1, v20);
            if ( v21 == v20 )
            {
              *a3 = j;
              *a5 = v7;
              *a4 = 1;
              return 0LL;
            }
          }
          if ( v20 )
            __fastfail(0xEu);
          break;
        }
      }
    }
    if ( *(_DWORD *)(v15 + 48 * i + 24) != 3 )
      continue;
    LODWORD(v22) = 0;
    if ( v7 != 100 )
    {
      if ( v7 != 101 )
        goto LABEL_38;
      v22 = *(_QWORD *)(KiProcessorBlock[v13] + 88) + 48LL;
      if ( *(_QWORD *)(KiProcessorBlock[v13] + 88) != -48LL )
        LODWORD(v22) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v13] + 88) + 52LL);
    }
    v23 = *(_QWORD *)(KiProcessorBlock[v13] + 88) + 24LL;
    if ( *(_QWORD *)(KiProcessorBlock[v13] + 88) != -24LL )
      LODWORD(v23) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v13] + 88) + 28LL);
    v24 = v23 + v22;
    v25 = *(_QWORD *)(KiProcessorBlock[v13] + 88);
    if ( v25 )
      LODWORD(v25) = *(_DWORD *)(v25 + 4);
    LODWORD(v22) = v25 + v24;
LABEL_38:
    if ( (__readmsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v22 + i))) & 0xF004000FFLL) != 0 )
      continue;
    v26 = a2 + 76;
    if ( v7 )
      break;
    if ( (unsigned __int8)Amd64CheckCoreEventConstraints((unsigned int)i, 0LL, *v26, v31) )
      goto LABEL_46;
    v13 = v32;
LABEL_44:
    ;
  }
  if ( (unsigned int)(v7 - 100) <= 1
    && _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 48 * i + 24), a1, 3) != 3 )
  {
    goto LABEL_44;
  }
LABEL_46:
  *(_BYTE *)(v15 + 48 * i + 40) = 0;
  *(LARGE_INTEGER *)(v15 + 48 * i + 8) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(v15 + 48 * i + 24) = a1;
  if ( a1 == 2 )
  {
    v27 = *(_QWORD **)(v15 + 48 * i + 16);
    *(_QWORD *)(v15 + 48 * i) = 0LL;
    *(_DWORD *)(v15 + 48 * i + 36) = 24;
    *v27 = 0LL;
  }
  else
  {
    v28 = *(_QWORD **)(v15 + 48 * i + 16);
    *(_DWORD *)(v15 + 48 * i + 36) = *a2;
    *(_QWORD *)(v15 + 48 * i) = (unsigned int)a2[6];
    *v28 = *v26;
    if ( (unsigned int)(v7 - 100) <= 1 )
      *(_QWORD *)(*(_QWORD *)(v15 + 48 * i + 16) + 16LL) = 1LL;
    if ( v31[0] )
    {
      *(_BYTE *)(*(_QWORD *)(v15 + 48 * i + 16) + 8LL) = 1;
      v29 = 6LL * (unsigned int)(i + 1);
      *(_BYTE *)(v15 + 48LL * (unsigned int)(i + 1) + 40) = 0;
      *(LARGE_INTEGER *)(v15 + 8 * v29 + 8) = KeQueryPerformanceCounter(0LL);
      v30 = *(_QWORD **)(v15 + 48LL * (unsigned int)(i + 1) + 16);
      *(_DWORD *)(v15 + 8 * v29 + 24) = a1;
      *(_DWORD *)(v15 + 8 * v29 + 36) = 33;
      *v30 = 0xF000000FFLL;
    }
  }
  *a3 = i;
  *a5 = v7;
  return 0LL;
}
