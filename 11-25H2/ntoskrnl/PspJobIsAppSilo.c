/*
 * XREFs of PspJobIsAppSilo @ 0x1405D8E54
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 */

bool __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
    return !PsIsServerSilo(a1);
  return v1;
}
