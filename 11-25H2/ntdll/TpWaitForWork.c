/*
 * XREFs of TpWaitForWork @ 0x18003A590
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18003A2D4 (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x180041190 (TppWorkWait.c)
 */

struct _PEB *__fastcall TpWaitForWork(__int64 a1, __int64 a2)
{
  int v3; // eax
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 168);
    if ( (v3 & 0x10000) == 0
      && (v3 & 0x20000) == 0
      && *(__int64 (__fastcall ***)())(a1 + 8) == TppWorkpCleanupGroupMemberVFuncs
      && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      return (struct _PEB *)TppWorkWait(a1);
    }
  }
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a1);
  return result;
}
