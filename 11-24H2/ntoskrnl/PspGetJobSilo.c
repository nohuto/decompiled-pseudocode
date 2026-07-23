/*
 * XREFs of PspGetJobSilo @ 0x1404071B0
 * Callers:
 *     PsGetProcessSilo @ 0x1404070C0 (PsGetProcessSilo.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x140407170 (PsGetJobSilo.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1409A9A10 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PsGetParentSilo @ 0x140A50EA0 (PsGetParentSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
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
