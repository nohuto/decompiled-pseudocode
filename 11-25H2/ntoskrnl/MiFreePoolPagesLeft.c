/*
 * XREFs of MiFreePoolPagesLeft @ 0x14044B688
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C42C94 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 4 )
  {
    v1 = qword_140E2C808;
    v2 = *(_QWORD *)&MiState;
  }
  else
  {
    v1 = qword_140E37310;
    v2 = qword_140E37320;
  }
  return v2 - v1;
}
