/*
 * XREFs of EtwpFinalizeRelogFileHeaderStats @ 0x180092CAC
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x1800912F0 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall EtwpFinalizeRelogFileHeaderStats(LARGE_INTEGER *a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r15
  unsigned int i; // esi
  int v12; // r8d
  bool v13; // zf
  LARGE_INTEGER SystemTimePrecise; // rax

  v5 = 0LL;
  v6 = a3;
  for ( i = 72; ; i += (*(unsigned __int16 *)(i + a2 + 4) + 7) & 0xFFFFFFF8 )
  {
    if ( i >= *(_DWORD *)(a2 + 48) )
      return 0LL;
    if ( i > (unsigned int)v6
      || (unsigned __int64)i + 312 > v6
      || (unsigned int)v5 >= a1[60].LowPart
      || *(_WORD *)(i + a2 + 4) < 0x138u )
    {
      break;
    }
    v12 = a4 + *(_DWORD *)(a1[62].QuadPart + 12 * v5);
    *(_DWORD *)(i + a2 + 68) = v12;
    *(_DWORD *)(i + a2 + 80) += *(_DWORD *)(a1[62].QuadPart + 12 * v5 + 4);
    *(_DWORD *)(i + a2 + 308) += a5 + *(_DWORD *)(a1[62].QuadPart + 12 * v5 + 8);
    if ( !(_DWORD)v5 )
    {
      v13 = (*(_DWORD *)(i + a2 + 64) & 0x100000) == 0;
      *(_DWORD *)(i + a2 + 68) = v12 + 1;
      if ( v13 )
      {
        SystemTimePrecise = a1[45];
      }
      else
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        *(_DWORD *)(i + a2 + 64) &= ~0x100000u;
      }
      *(LARGE_INTEGER *)(i + a2 + 48) = SystemTimePrecise;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  return 3221225485LL;
}
