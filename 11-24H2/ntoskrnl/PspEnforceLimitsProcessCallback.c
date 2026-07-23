/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x14085DE20
 * Callers:
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rcx
  _QWORD v7[14]; // [rsp+20h] [rbp-19h] BYREF

  memset_0(v7, 0, 0x68uLL);
  if ( (*(_DWORD *)(a1 + 496) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v7);
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 672) + 1352LL);
    v5 = v7[1];
    *v4 += v7[0];
    v4[3] += v7[3];
    v4[2] += v7[2];
    v4[11] += v7[11];
    v4[12] += v7[12];
    v4[4] += v7[4];
    v4[5] += v7[5];
    v4[6] += v7[6];
    v4[7] += v7[7];
    v4[8] += v7[8];
    v4[9] += v7[9];
    v4[10] += v7[10];
    v4[1] += v5;
    if ( !a2[2] && *a2 && v5 > *a2 && ObReferenceObjectSafeWithTag(a1, 0x624A7350u) )
      a2[2] = a1;
  }
  return 0LL;
}
