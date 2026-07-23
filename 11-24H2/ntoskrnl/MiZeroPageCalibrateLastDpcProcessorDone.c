/*
 * XREFs of MiZeroPageCalibrateLastDpcProcessorDone @ 0x140695538
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MiZeroInflectionPointReached @ 0x140694DA8 (MiZeroInflectionPointReached.c)
 */

__int64 __fastcall MiZeroPageCalibrateLastDpcProcessorDone(__int64 a1)
{
  unsigned int v2; // edi
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER v4; // rcx
  __int64 v5; // rsi
  LARGE_INTEGER v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // esi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 24) )
  {
    _InterlockedOr(v11, 0);
    PerformanceFrequency.QuadPart = 0LL;
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v3.QuadPart = 10000000 * v3.QuadPart / PerformanceFrequency.QuadPart;
    v4 = *(LARGE_INTEGER *)(a1 + 16);
    v2 = 1;
    v5 = *(unsigned int *)(a1 + 192);
    v6 = v4;
    if ( v3.QuadPart >= (unsigned __int64)v4.QuadPart )
      v6 = v3;
    v7 = v6.QuadPart - v4.QuadPart;
    if ( !v7 )
      v7 = 1LL;
    v8 = *(int *)(a1 + 8) + 2 * v5;
    v9 = v5 + 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v8) = v7;
    *(_DWORD *)(a1 + 192) = v9;
    if ( (unsigned int)MiZeroInflectionPointReached(a1) || v9 == *(_DWORD *)(a1 + 32) )
    {
      *(_DWORD *)(a1 + 192) = 0;
      if ( *(_DWORD *)(a1 + 8) )
        return 2;
      else
        *(_DWORD *)(a1 + 8) = 1;
    }
  }
  else
  {
    v2 = 1;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return v2;
}
