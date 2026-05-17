/*
 * XREFs of TpIsTimerSet @ 0x18003EDA0
 * Callers:
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

_BOOL8 __fastcall TpIsTimerSet(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3)
{
  int v3; // eax

  if ( a1 )
  {
    if ( !*(_BYTE *)(a1 + 353) )
    {
      v3 = *(_DWORD *)(a1 + 168);
      if ( (v3 & 0x10000) == 0
        && (v3 & 0x20000) == 0
        && *(__int64 (__fastcall ***)())(a1 + 8) == TppTimerpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return *(_QWORD *)(a1 + 328) != 0LL;
      }
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3);
  return 0LL;
}
