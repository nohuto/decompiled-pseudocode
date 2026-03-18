/*
 * XREFs of _lambda_c7aafdfab81c67e8cf983f9f6cce2cc7_::_lambda_invoker_cdecl_ @ 0x1C00D3A40
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_c7aafdfab81c67e8cf983f9f6cce2cc7_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 1056) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 393) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2995LL);
      v2 = *(void **)(a1 + 344);
      *(_BYTE *)(a1 + 393) = 1;
      ZwSetEvent(v2, 0LL);
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
