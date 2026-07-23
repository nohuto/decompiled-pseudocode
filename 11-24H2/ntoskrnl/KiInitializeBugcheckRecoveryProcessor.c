/*
 * XREFs of KiInitializeBugcheckRecoveryProcessor @ 0x1405C3AF8
 * Callers:
 *     KiInitPrcb @ 0x140B58254 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeBugcheckRecoveryProcessor(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 40656) = 531;
  *(_QWORD *)(a1 + 40688) = 0LL;
  *(_QWORD *)(a1 + 40680) = KiBugCheckRecoveryFreezeProcessorDpc;
  *(_QWORD *)(a1 + 40712) = 0LL;
  *(_QWORD *)(a1 + 40672) = 0LL;
  result = *(_QWORD *)(a1 + 40712);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 40658) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
