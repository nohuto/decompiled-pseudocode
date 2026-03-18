/*
 * XREFs of KeContextToKframes @ 0x1404FBAC0
 * Callers:
 *     KyRaiseException @ 0x1403E65D0 (KyRaiseException.c)
 *     KiContinueEx @ 0x1403E6A90 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     KiRestoreProcessorState @ 0x1405CA37C (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 * Callees:
 *     KxContextToKframes @ 0x140407390 (KxContextToKframes.c)
 */

__int64 __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
