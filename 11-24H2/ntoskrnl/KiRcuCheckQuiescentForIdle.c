/*
 * XREFs of KiRcuCheckQuiescentForIdle @ 0x1404CE9DC
 * Callers:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404BFFFC (KiRcuStartGracePeriodEnumCallback.c)
 * Callees:
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiRcuCheckQuiescentForIdle(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // rdi
  signed __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  unsigned int v6; // edi

  v1 = a1;
  v2 = qword_140F205C8;
  if ( *(char *)(a1[2] + 14567) <= 0 )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v6 = KiRcuReportQuiescentState(v1, v2);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(CurrentIrql);
  return v6;
}
