/*
 * XREFs of PspGetJobSilo @ 0x14040EFB0
 * Callers:
 *     PsGetProcessSilo @ 0x14040EEC0 (PsGetProcessSilo.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x14040EF70 (PsGetJobSilo.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1409B2680 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PsGetParentSilo @ 0x140A59700 (PsGetParentSilo.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
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
