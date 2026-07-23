/*
 * XREFs of MiFreePoolPagesLeft @ 0x1404419D0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C56054 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 4 )
  {
    v1 = qword_140E2CB88;
    v2 = *(_QWORD *)&MiState;
  }
  else
  {
    v1 = qword_140E37690;
    v2 = qword_140E376A0;
  }
  return v2 - v1;
}
