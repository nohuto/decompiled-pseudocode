/*
 * XREFs of PspIsSiloInServerSilo @ 0x1405D8E38
 * Callers:
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140310610 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
