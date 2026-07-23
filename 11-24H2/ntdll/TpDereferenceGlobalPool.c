/*
 * XREFs of TpDereferenceGlobalPool @ 0x18008BED8
 * Callers:
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7798 (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(__int64 a1)
{
  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
