/*
 * XREFs of HalpRequestGenericErrorRecovery @ 0x140552ED0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGenericErrorSourceRecovery @ 0x14055295C (HalpGenericErrorSourceRecovery.c)
 */

__int64 __fastcall HalpRequestGenericErrorRecovery(__int64 a1, _DWORD *a2)
{
  return HalpGenericErrorSourceRecovery(a1, a2);
}
