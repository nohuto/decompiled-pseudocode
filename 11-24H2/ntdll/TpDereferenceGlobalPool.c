/*
 * XREFs of TpDereferenceGlobalPool @ 0x18006F5F8
 * Callers:
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x1800BF9D8 (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
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
    TppPoolpDereferenceGlobalPool(
      (const void **)&TppPoolpGlobalPool,
      (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
  }
}
