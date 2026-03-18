/*
 * XREFs of Endpoint_AreTransfersPending @ 0x140035E68
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x14002D25C (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     ESM_CheckingIfEndpointCanBeResetAfterHalt @ 0x140033030 (ESM_CheckingIfEndpointCanBeResetAfterHalt.c)
 * Callees:
 *     TR_AreTransfersPending @ 0x140035EC8 (TR_AreTransfersPending.c)
 */

char __fastcall Endpoint_AreTransfersPending(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rdx

  if ( !*(_BYTE *)(a1 + 37) )
    return TR_AreTransfersPending(*(_QWORD *)(a1 + 88));
  for ( i = 1; ; ++i )
  {
    v3 = *(_QWORD *)(a1 + 136);
    if ( i > *(_DWORD *)(v3 + 8) )
      break;
    if ( (unsigned __int8)TR_AreTransfersPending(*(_QWORD *)(104LL * (i - 1) + v3 + 48)) )
      return 1;
  }
  return 0;
}
