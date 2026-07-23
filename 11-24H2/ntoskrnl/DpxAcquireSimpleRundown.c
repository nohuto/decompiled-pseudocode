/*
 * XREFs of DpxAcquireSimpleRundown @ 0x1405AC3E0
 * Callers:
 *     DpxEndpointWrappedCall @ 0x140BC1010 (DpxEndpointWrappedCall.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

signed __int64 __fastcall DpxAcquireSimpleRundown(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(*(_QWORD *)a1
                                 + *(_DWORD *)(a1 + 12) * (KeGetPcr()->Prcb.Number & (*(_DWORD *)(a1 + 8) - 1)));
  v3 = 0;
  for ( result = _InterlockedExchangeAdd64(v1, 2uLL); (result & 1) != 0; result = *v1 )
    KeYieldProcessorEx(&v3);
  return result;
}
