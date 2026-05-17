/*
 * XREFs of TpWaitForWork @ 0x18006D890
 * Callers:
 *     LdrpDetectDetour @ 0x18006CBA0 (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F7B3C (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkWait @ 0x18006ED50 (TppWorkWait.c)
 */

void __fastcall TpWaitForWork(__int64 a1)
{
  int v1; // eax

  if ( !a1
    || (v1 = *(_DWORD *)(a1 + 168), (v1 & 0x10000) != 0)
    || (v1 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    TppWorkWait(a1);
  }
}
