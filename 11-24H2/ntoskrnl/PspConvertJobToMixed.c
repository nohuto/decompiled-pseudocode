/*
 * XREFs of PspConvertJobToMixed @ 0x1406F8B4C
 * Callers:
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PspBindProcessSessionToJob @ 0x14091B844 (PspBindProcessSessionToJob.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 576) == -2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 1552);
  if ( (v3 & 0x10) == 0
    && ((v3 & 0x40000000) != 0 || ((*(_QWORD *)(a1 + 1792) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || a2) )
  {
    *(_DWORD *)(a1 + 576) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
