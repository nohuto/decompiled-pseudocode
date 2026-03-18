/*
 * XREFs of HalpDpReplaceControl @ 0x140B4FC60
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDpPostReplace @ 0x140B4F880 (HalpDpPostReplace.c)
 *     HalpDpPreReplace @ 0x140B4FB3C (HalpDpPreReplace.c)
 *     HalpDpStartProcessor @ 0x140B4FF34 (HalpDpStartProcessor.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B500C0 (HalpInterruptSwapProcessorIdentifiers.c)
 */

__int64 __fastcall HalpDpReplaceControl(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v5; // r14d
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // edi
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // r8
  LARGE_INTEGER v15; // r9
  unsigned int v16; // esi
  int v17; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  int v19; // edx
  __int64 v20; // rdi
  LARGE_INTEGER v21; // rdx
  LARGE_INTEGER v22; // r8
  LARGE_INTEGER v23; // r9
  unsigned int v24; // edi

  v4 = *(_DWORD *)a2;
  v5 = 0;
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          *(_BYTE *)(a2 + 68) = 1;
          if ( v4 )
          {
            v9 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
            v10 = *(_DWORD *)(a2 + 48);
            v11 = v4 + 1;
            while ( v10 < v11 )
            {
              if ( (++v9 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v9, a2, a3, a4);
              v10 = *(_DWORD *)(a2 + 48);
            }
            v12 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v11 )
            {
              if ( (++v12 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
                _mm_pause();
              else
                guard_dispatch_icall_no_overrides(v12, a2, a3, a4);
            }
          }
        }
      }
      else
      {
        HalpDpPostReplace(a2, a2, a3);
      }
    }
    else if ( v4 )
    {
      *(LARGE_INTEGER *)(a2 + 80) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a2 + 72));
      v16 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v17 = v4 + 1;
      while ( *(_DWORD *)(a2 + 48) < v17 )
      {
        if ( (++v16 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(
            v16,
            (LARGE_INTEGER)v13.QuadPart,
            (LARGE_INTEGER)v14.QuadPart,
            (LARGE_INTEGER)v15.QuadPart);
      }
      while ( *(_DWORD *)(a2 + 56) < v4 )
        _mm_pause();
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v19 = *(_DWORD *)a2;
      v20 = 0LL;
      *(LARGE_INTEGER *)(a2 + 96) = PerformanceCounter;
      if ( v19 )
      {
        do
        {
          HalpDpStartProcessor(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v20));
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (unsigned int)v20 < *(_DWORD *)a2 );
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v5 = HalpInterruptSwapProcessorIdentifiers(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v24 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v17 )
      {
        if ( (++v24 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(
            v24,
            (LARGE_INTEGER)v21.QuadPart,
            (LARGE_INTEGER)v22.QuadPart,
            (LARGE_INTEGER)v23.QuadPart);
      }
    }
  }
  else
  {
    HalpDpPreReplace(a2, a2, a3, a4);
  }
  return v5;
}
