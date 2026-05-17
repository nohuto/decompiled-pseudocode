/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x18003E3F0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *v3; // rbx
  int EntryInProgress; // eax
  _DWORD *p_Blink; // rdi

  v3 = Ldr;
  if ( !Ldr
    || (EntryInProgress = (int)Ldr[2].EntryInProgress, (EntryInProgress & 0x10000) != 0)
    || (EntryInProgress & 0x20000) != 0
    || Ldr->ShutdownThreadId != TppAlpcpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    p_Blink = &v3[3].InLoadOrderModuleList.Blink;
  }
  else
  {
    p_Blink = &v3[3].InLoadOrderModuleList.Blink;
    if ( ((__int64)v3[3].InLoadOrderModuleList.Blink & 1) != 0 )
      goto LABEL_8;
  }
  TppRaiseInvalidParameter(Ldr, a2, a3);
LABEL_8:
  _InterlockedExchange((volatile __int32 *)&v3[3].InLoadOrderModuleList.Flink + 1, 0);
  *p_Blink |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(v3);
}
