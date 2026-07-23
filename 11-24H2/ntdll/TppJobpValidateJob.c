/*
 * XREFs of TppJobpValidateJob @ 0x1800863AC
 * Callers:
 *     TpReleaseJobNotification @ 0x180085760 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x180086370 (TpWaitForJobNotification.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x1800866B0 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppJobpValidateJob(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1
    && (unsigned int)TppValidateCleanupGroupMember(a1 + 72, a2, a3, a1)
    && *(__int64 (__fastcall ***)())(v3 + 80) == TppJobpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1LL;
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}
