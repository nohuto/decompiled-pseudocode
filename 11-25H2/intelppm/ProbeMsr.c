/*
 * XREFs of ProbeMsr @ 0x14002A78C
 * Callers:
 *     InitEnergyCounters @ 0x14002A400 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

char __fastcall ProbeMsr(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  int v9; // [rsp+4h] [rbp-14h]
  int v10; // [rsp+4h] [rbp-14h]
  unsigned __int64 v11; // [rsp+38h] [rbp+20h]

  v11 = __readmsr(0x606u);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = 0LL;
  v9 = 0;
  while ( (unsigned int)v4 < v2 )
  {
    v5 = __readmsr(*(_DWORD *)(a1 + 4 * v4 + 12));
    v11 |= ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5;
    v4 = (unsigned int)++v9;
    v2 = *(_DWORD *)(a1 + 8);
  }
  v6 = *(_DWORD *)(a1 + 28);
  v10 = 0;
  while ( (unsigned int)v3 < v6 )
  {
    v7 = __readmsr(*(_DWORD *)(a1 + 4 * v3 + 32));
    v11 |= ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7;
    v3 = (unsigned int)++v10;
    v6 = *(_DWORD *)(a1 + 28);
  }
  return 1;
}
