/*
 * XREFs of PspSetJobTimeLimitCallback @ 0x1407783A0
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryRuntimeProcess @ 0x1409AF430 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall PspSetJobTimeLimitCallback(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 496) & 2) == 0 )
  {
    PsQueryRuntimeProcess(a1, &v4);
    *a2 += v4 * KeMaximumIncrement;
  }
  return 0LL;
}
