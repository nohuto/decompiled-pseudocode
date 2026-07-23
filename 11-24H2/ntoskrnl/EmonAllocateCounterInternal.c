/*
 * XREFs of EmonAllocateCounterInternal @ 0x140558740
 * Callers:
 *     EmonAllocateCounterEnhanced @ 0x140558660 (EmonAllocateCounterEnhanced.c)
 *     EmonAllocateCounterOriginal @ 0x1405587FC (EmonAllocateCounterOriginal.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall EmonAllocateCounterInternal(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax

  v9 = 6LL * a5;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9 + 24) = a2;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 8 * v9 + 40) = 0;
  *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 16) + 8 * v9 + 8) = KeQueryPerformanceCounter(0LL);
  v10 = *(_QWORD *)(a1 + 16);
  if ( a2 == 2 )
  {
    *(_DWORD *)(v10 + 48LL * a5 + 36) = 24;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * a5) = 0LL;
    result = *(_QWORD *)(a1 + 16);
    **(_DWORD **)(result + 48LL * a5 + 16) = 0;
  }
  else
  {
    *(_DWORD *)(v10 + 48LL * a5 + 36) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * a5) = *(unsigned int *)(a3 + 24);
    result = *(unsigned int *)(a3 + 304);
    **(_DWORD **)(*(_QWORD *)(a1 + 16) + 48LL * a5 + 16) = result;
  }
  return result;
}
