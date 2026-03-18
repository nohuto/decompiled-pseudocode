/*
 * XREFs of Endpoint_IsCandidateForSplitTransactionHSIIWorkaround @ 0x1400112A8
 * Callers:
 *     Endpoint_Disable_Internal @ 0x140010904 (Endpoint_Disable_Internal.c)
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax

  if ( (*(_QWORD *)(*(_QWORD *)a1 + 744LL) & 0x100000LL) == 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 36) <= 1u || *(_DWORD *)(v1 + 20) > 1u )
    return 0;
  v2 = *(_DWORD *)(a1 + 120);
  return v2 == 3 || v2 == 7;
}
