/*
 * XREFs of HalpDpReplaceControl @ 0x140B3FC60
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDpPostReplace @ 0x140B3F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B3FB3C (HalpDpPreReplace.c)
 *     HalpDpStartProcessor @ 0x140B3FF34 (HalpDpStartProcessor.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B400C0 (HalpInterruptSwapProcessorIdentifiers.c)
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
  unsigned int v11; // esi
  int v12; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  int v14; // edx
  __int64 v15; // rdi
  unsigned int v16; // edi

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
              if ( (++v7 & dword_140FC071C) != 0 || !qword_140FC0720 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v7);
              v8 = *(_DWORD *)(a2 + 48);
            }
            v10 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v9 )
            {
              if ( (++v10 & dword_140FC071C) != 0 || !qword_140FC0720 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v10);
            }
          }
        }
      }
      else
      {
        HalpDpPostReplace(a2);
      }
    }
    else if ( v2 )
    {
      *(LARGE_INTEGER *)(a2 + 80) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a2 + 72));
      v11 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v12 = v2 + 1;
      while ( *(_DWORD *)(a2 + 48) < v12 )
      {
        if ( (++v11 & dword_140FC071C) != 0 || !qword_140FC0720 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v11);
      }
      while ( *(_DWORD *)(a2 + 56) < v2 )
        _mm_pause();
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = *(_DWORD *)a2;
      v15 = 0LL;
      *(LARGE_INTEGER *)(a2 + 96) = PerformanceCounter;
      if ( v14 )
      {
        do
        {
          HalpDpStartProcessor(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v15));
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *(_DWORD *)a2 );
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v3 = HalpInterruptSwapProcessorIdentifiers(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v16 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v12 )
      {
        if ( (++v16 & dword_140FC071C) != 0 || !qword_140FC0720 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v16);
      }
    }
  }
  else
  {
    HalpDpPreReplace(a2);
  }
  return v3;
}
