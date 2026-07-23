/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x1405CB4AC
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCancelExitLatencyTrace(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 34880);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      result = (unsigned int)PpmExitLatencySamplingPercentage;
      *(_DWORD *)(v1 + 20) = PpmExitLatencySamplingPercentage != 0;
      *(_BYTE *)(v1 + 3) = 0;
    }
  }
  return result;
}
