/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x1800877D0
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(_PEB_LDR_DATA *Ldr)
{
  __int64 v1; // rbx
  int EntryInProgress; // eax
  _DWORD *v3; // rdi

  v1 = (__int64)Ldr;
  if ( !Ldr
    || (EntryInProgress = (int)Ldr[2].EntryInProgress, (EntryInProgress & 0x10000) != 0)
    || (EntryInProgress & 0x20000) != 0
    || Ldr->ShutdownThreadId != TppAlpcpCleanupGroupMemberVFuncs
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr);
    v3 = (_DWORD *)(v1 + 288);
  }
  else
  {
    v3 = (_DWORD *)(v1 + 288);
    if ( (*(_BYTE *)(v1 + 288) & 1) != 0 )
      goto LABEL_8;
  }
  TppRaiseInvalidParameter(Ldr);
LABEL_8:
  _InterlockedExchange((volatile __int32 *)(v1 + 284), 0);
  *v3 |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(v1);
}
