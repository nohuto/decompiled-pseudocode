/*
 * XREFs of HalpTimerStartProfileInterrupt @ 0x14054A0DC
 * Callers:
 *     DefaultEnableMonitoring @ 0x14054C420 (DefaultEnableMonitoring.c)
 * Callees:
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 */

__int64 HalpTimerStartProfileInterrupt()
{
  int v0; // edx
  unsigned int Number; // r8d
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  if ( !HalpProfileTimer )
    return 3221225659LL;
  if ( (*(_DWORD *)(HalpProfileTimer + 184) & 0x80u) != 0 )
    return 3221225865LL;
  Number = KeGetPcr()->Prcb.Number;
  v3 = *(unsigned int *)(296LL * Number + HalpProfileData + 24);
  if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) == 0 && Number
    || (v4 = v3 + 1, LOBYTE(v3) = 1, v0 = HalpSetTimer(HalpProfileTimer, 2u, v4, v3, &v5), v0 >= 0) )
  {
    HalpProfilingActive = 1;
  }
  return (unsigned int)v0;
}
