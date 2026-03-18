/*
 * XREFs of IopDecDisableableDepends @ 0x140727750
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall IopDecDisableableDepends(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 600), 0xFFFFFFFF) != 1 )
        break;
      v2 = *(_QWORD *)(v1 + 48);
      if ( v2 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v2, 11LL);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
}
