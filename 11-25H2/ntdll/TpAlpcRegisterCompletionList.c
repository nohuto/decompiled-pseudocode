/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x18003E3F0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(_PEB_LDR_DATA *Ldr)
{
  _PEB_LDR_DATA *v1; // rbx
  int EntryInProgress; // eax
  _DWORD *p_Blink; // rdi

  v1 = Ldr;
  if ( !Ldr
    || (EntryInProgress = (int)Ldr[2].EntryInProgress, (EntryInProgress & 0x10000) != 0)
    || (EntryInProgress & 0x20000) != 0
    || Ldr->ShutdownThreadId != TppAlpcpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr);
    p_Blink = &v1[3].InLoadOrderModuleList.Blink;
  }
  else
  {
    p_Blink = &v1[3].InLoadOrderModuleList.Blink;
    if ( ((__int64)v1[3].InLoadOrderModuleList.Blink & 1) != 0 )
      goto LABEL_8;
  }
  TppRaiseInvalidParameter(Ldr);
LABEL_8:
  _InterlockedExchange((volatile __int32 *)&v1[3].InLoadOrderModuleList.Flink + 1, 0);
  *p_Blink |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(v1);
}
