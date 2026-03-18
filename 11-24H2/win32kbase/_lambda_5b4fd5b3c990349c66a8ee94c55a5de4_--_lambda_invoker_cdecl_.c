/*
 * XREFs of _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401A8F20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x140033720 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireExclusiveUserCrit @ 0x1400339B0 (EtwTraceAcquireExclusiveUserCrit.c)
 */

void __fastcall lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  EtwTraceAcquireExclusiveUserCrit();
  LOBYTE(v4) = 1;
  ExAcquireFastResourceShared(a1, a2 + 32, v4);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 24) & 0xFFFFFFF3 | 4;
  EtwTraceAcquiredSharedUserCrit();
}
