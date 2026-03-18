/*
 * XREFs of MiFreePoolPagesLeft @ 0x140449280
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140C53EC4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 4 )
  {
    v1 = qword_140E2CA48;
    v2 = *(_QWORD *)&MiState;
  }
  else
  {
    v1 = qword_140E37550;
    v2 = qword_140E37560;
  }
  return v2 - v1;
}
