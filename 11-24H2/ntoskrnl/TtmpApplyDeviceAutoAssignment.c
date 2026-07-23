/*
 * XREFs of TtmpApplyDeviceAutoAssignment @ 0x140768F08
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140768C60 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall TtmpApplyDeviceAutoAssignment(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)(a2 + 600);
  if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
  {
    *(_DWORD *)(a2 + 596) = 0;
    *v2 |= 0x40u;
  }
  *v2 |= 0x20u;
}
