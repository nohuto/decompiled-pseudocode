/*
 * XREFs of HalpRequestGenericErrorRecovery @ 0x1405557D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGenericErrorSourceRecovery @ 0x14055525C (HalpGenericErrorSourceRecovery.c)
 */

__int64 __fastcall HalpRequestGenericErrorRecovery(__int64 a1, _DWORD *a2)
{
  return HalpGenericErrorSourceRecovery(a1, a2);
}
