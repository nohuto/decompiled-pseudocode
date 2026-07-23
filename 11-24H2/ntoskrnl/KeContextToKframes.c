/*
 * XREFs of KeContextToKframes @ 0x1404F9380
 * Callers:
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     KiContinueEx @ 0x1403D4630 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     KiRestoreProcessorState @ 0x1405C7AAC (KiRestoreProcessorState.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 * Callees:
 *     KxContextToKframes @ 0x1403FF870 (KxContextToKframes.c)
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
