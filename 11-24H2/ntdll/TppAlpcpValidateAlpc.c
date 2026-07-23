/*
 * XREFs of TppAlpcpValidateAlpc @ 0x18008663C
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x180084A10 (TpAlpcUnregisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180085280 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x180086590 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800866B0 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(&Ldr->ShutdownInProgress, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)())(v4 + 80) == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}
