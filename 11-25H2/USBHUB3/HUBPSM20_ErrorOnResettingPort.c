/*
 * XREFs of HUBPSM20_ErrorOnResettingPort @ 0x140012970
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x140004800 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 */

__int64 __fastcall HUBPSM20_ErrorOnResettingPort(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset(*(__int64 **)(a1 + 960), a2, a3, a4);
}
