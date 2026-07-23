/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x14067687C
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x14067D7B0 (MiReapplyImportOptimizationWorker.c)
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 *     MmApplyVerifierToRunningImage @ 0x140BA6790 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KiEnumerateNmiSxCallback @ 0x1405ADD68 (KiEnumerateNmiSxCallback.c)
 */

__int64 __fastcall MmIsVerifierApplicableToImage(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  int v3; // ebx
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID *v7; // [rsp+50h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = v1 + *(unsigned int *)(a1 + 64);
  if ( (MiFlags & 0x8000) != 0 )
    return 0LL;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( !KiNmiCallbackListHead )
    return 0LL;
  v7 = 0LL;
  v3 = 0;
  while ( (unsigned int)KiEnumerateNmiSxCallback(&v7, &CurrentIrql, &v6) )
  {
    if ( v6 >= v1 && v6 < v2 )
      v3 = 1;
  }
  return v3 != 0 ? 0xC0000C0E : 0;
}
