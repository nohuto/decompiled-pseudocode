/*
 * XREFs of PdcReleaseRwLockExclusive2 @ 0x140A52844
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2pActivationClientCallback @ 0x14078DC20 (Pdcv2pActivationClientCallback.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 */

LONG __fastcall PdcReleaseRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  LONG result; // eax

  if ( a2 )
    *a2 = 1;
  if ( !*(_QWORD *)a1 || *(struct _KTHREAD **)(a1 + 8) != KeGetCurrentThread() || *(int *)(a1 + 16) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
    *(_QWORD *)(a1 + 8) = 0LL;
  result = KeReleaseMutex(*(PRKMUTEX *)a1, 0);
  if ( a2 )
    *a2 = 0;
  return result;
}
