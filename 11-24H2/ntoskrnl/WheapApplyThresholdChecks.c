/*
 * XREFs of WheapApplyThresholdChecks @ 0x1404205CC
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapApplyThresholdChecks(__int64 a1)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // r11
  __int64 v5; // rcx
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned __int8 *v8; // rcx

  ++*(_DWORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    v7 = 144LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 104) == 2
      || *(_DWORD *)(a1 + 104) == 4
      || *(_DWORD *)(a1 + 104) != 5 && *(_DWORD *)(a1 + 104) != 8 && (unsigned int)(*(_DWORD *)(a1 + 104) - 12) > 1 )
    {
      return 0;
    }
    v7 = 160LL;
  }
  v8 = (unsigned __int8 *)(v7 + a1);
  if ( !v8 || *v8 != 1 && *v8 != 2 && *v8 != 3 && *v8 != 4 && *v8 != 8 && (unsigned int)*v8 - 9 > 1 )
    return 0;
  v3 = *((_DWORD *)v8 + 5);
  v4 = *((unsigned int *)v8 + 6);
  if ( v3 <= 1 )
    return 0;
  v5 = MEMORY[0xFFFFF78000000320];
  if ( (_DWORD)v4 && KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 72)) / 10000000LL > v4 )
  {
    *(_DWORD *)(a1 + 80) = 1;
    *(_QWORD *)(a1 + 72) = v5;
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 80) + 1;
  *(_DWORD *)(a1 + 80) = v6;
  if ( v6 < v3 )
    return 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 1;
}
