/*
 * XREFs of DpxReleaseSimpleRundown @ 0x1405AC430
 * Callers:
 *     DpxEndpointWrappedCall @ 0x140BC1010 (DpxEndpointWrappedCall.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall DpxReleaseSimpleRundown(__int64 a1)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_QWORD *)a1
                                     + *(_DWORD *)(a1 + 12) * (KeGetPcr()->Prcb.Number & (*(_DWORD *)(a1 + 8) - 1)));
  _InterlockedAdd64(result, 0xFFFFFFFFFFFFFFFEuLL);
  return result;
}
