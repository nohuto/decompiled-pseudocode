/*
 * XREFs of PspGetJobSilo @ 0x14041A350
 * Callers:
 *     PsGetProcessSilo @ 0x14041A260 (PsGetProcessSilo.c)
 *     PsIsProcessInSilo @ 0x14041A2C0 (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x14041A310 (PsGetJobSilo.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  for ( ; a1; a1 = *(_QWORD *)(a1 + 1304) )
  {
    if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
      break;
  }
  return a1;
}
