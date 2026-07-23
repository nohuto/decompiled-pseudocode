/*
 * XREFs of HalpDpReplaceControl @ 0x140B51CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDpPostReplace @ 0x140B518D0 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B51B8C (HalpDpPreReplace.c)
 *     HalpDpStartProcessor @ 0x140B51F84 (HalpDpStartProcessor.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B52110 (HalpInterruptSwapProcessorIdentifiers.c)
 */

__int64 __fastcall HalpDpReplaceControl(int a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // r14d
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // ebp
  unsigned int v10; // edi
  LARGE_INTEGER v11; // rdx
  unsigned int v12; // esi
  int v13; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  int v15; // edx
  __int64 v16; // rdi
  LARGE_INTEGER v17; // rdx
  unsigned int v18; // edi

  v2 = *(_DWORD *)a2;
  v3 = 0;
  if ( a1 )
  {
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          *(_BYTE *)(a2 + 68) = 1;
          if ( v2 )
          {
            v7 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
            v8 = *(_DWORD *)(a2 + 48);
            v9 = v2 + 1;
            while ( v8 < v9 )
            {
              if ( (++v7 & dword_140FC111C) != 0 || !qword_140FC1120 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v7, a2);
              v8 = *(_DWORD *)(a2 + 48);
            }
            v10 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v9 )
            {
              if ( (++v10 & dword_140FC111C) != 0 || !qword_140FC1120 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v10, a2);
            }
          }
        }
      }
      else
      {
        HalpDpPostReplace(a2, a2);
      }
    }
    else if ( v2 )
    {
      *(LARGE_INTEGER *)(a2 + 80) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a2 + 72));
      v12 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v13 = v2 + 1;
      while ( *(_DWORD *)(a2 + 48) < v13 )
      {
        if ( (++v12 & dword_140FC111C) != 0 || !qword_140FC1120 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v12, (LARGE_INTEGER)v11.QuadPart);
      }
      while ( *(_DWORD *)(a2 + 56) < v2 )
        _mm_pause();
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v15 = *(_DWORD *)a2;
      v16 = 0LL;
      *(LARGE_INTEGER *)(a2 + 96) = PerformanceCounter;
      if ( v15 )
      {
        do
        {
          HalpDpStartProcessor(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v16));
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *(_DWORD *)a2 );
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v3 = HalpInterruptSwapProcessorIdentifiers(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v18 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v13 )
      {
        if ( (++v18 & dword_140FC111C) != 0 || !qword_140FC1120 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v18, (LARGE_INTEGER)v17.QuadPart);
      }
    }
  }
  else
  {
    HalpDpPreReplace(a2, a2);
  }
  return v3;
}
