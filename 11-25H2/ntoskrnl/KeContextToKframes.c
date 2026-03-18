/*
 * XREFs of KeContextToKframes @ 0x1404F93B0
 * Callers:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiContinueEx @ 0x140260E20 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140263BB0 (KyRaiseException.c)
 *     KiRestoreProcessorState @ 0x1405C5D5C (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 * Callees:
 *     KxContextToKframes @ 0x140263370 (KxContextToKframes.c)
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
