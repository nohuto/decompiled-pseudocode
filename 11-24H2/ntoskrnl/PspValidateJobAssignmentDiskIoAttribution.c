/*
 * XREFs of PspValidateJobAssignmentDiskIoAttribution @ 0x140A6889C
 * Callers:
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     PspIsSetJobIoAttribution @ 0x14085BBBC (PspIsSetJobIoAttribution.c)
 */

bool __fastcall PspValidateJobAssignmentDiskIoAttribution(__int64 a1, __int64 a2, int a3)
{
  __int64 i; // rax

  if ( ((a3 - 4) & 0xFFFFFFFC) != 0 || a3 == 6 )
    return 1;
  if ( !*(_DWORD *)(a2 + 1580) )
  {
    for ( i = *(_QWORD *)(a2 + 1304); i; i = *(_QWORD *)(i + 1304) )
    {
      if ( *(_DWORD *)(i + 1580) )
        return !*(_DWORD *)(a1 + 1580) && PspIsSetJobIoAttribution((_QWORD *)a1, a2, 0) == 0;
    }
    return 1;
  }
  return !*(_DWORD *)(a1 + 1580) && PspIsSetJobIoAttribution((_QWORD *)a1, a2, 0) == 0;
}
