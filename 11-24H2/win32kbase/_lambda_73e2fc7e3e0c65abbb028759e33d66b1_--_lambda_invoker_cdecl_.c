/*
 * XREFs of _lambda_73e2fc7e3e0c65abbb028759e33d66b1_::_lambda_invoker_cdecl_ @ 0x1401D40A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_73e2fc7e3e0c65abbb028759e33d66b1_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 1056) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 393) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2823);
      v2 = *(void **)(a1 + 344);
      *(_BYTE *)(a1 + 393) = 1;
      ZwSetEvent(v2, 0LL);
    }
    RIMUnlockExclusive(a1 + 104);
  }
}
