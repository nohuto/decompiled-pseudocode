/*
 * XREFs of ESM_ResettingControlEndpoint @ 0x14002EE50
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_ResetControlEndpoint @ 0x14002EE74 (Endpoint_SM_ResetControlEndpoint.c)
 */

__int64 __fastcall ESM_ResettingControlEndpoint(__int64 a1)
{
  Endpoint_SM_ResetControlEndpoint(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
