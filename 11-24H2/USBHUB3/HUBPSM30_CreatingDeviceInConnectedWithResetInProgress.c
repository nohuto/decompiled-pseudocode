/*
 * XREFs of HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1400126F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateNewDSM @ 0x14002F060 (HUBMISC_CreateNewDSM.c)
 */

__int64 __fastcall HUBPSM30_CreatingDeviceInConnectedWithResetInProgress(__int64 a1)
{
  return HUBMISC_CreateNewDSM(*(_QWORD *)(a1 + 960));
}
