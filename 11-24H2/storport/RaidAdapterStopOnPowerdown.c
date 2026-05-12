/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x140034A30
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterSendPowerToMiniport @ 0x14000F3E0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidPowerPassToMiniPort @ 0x14001018C (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     GetRaidAdapter @ 0x140034AAC (GetRaidAdapter.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 */

__int64 __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 RaidAdapter; // rbx
  __int64 result; // rax

  RaidAdapter = GetRaidAdapter(a1, a2, a3);
  if ( RaidIsAdapterControlSupported(RaidAdapter + 376, 6) )
  {
    RaidAdapterSendPowerToMiniport((_QWORD *)RaidAdapter, (__int64)a2);
  }
  else
  {
    *(_BYTE *)(RaidAdapter + 4561) = 1;
    result = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerDownSrbComplete);
    if ( (int)result >= 0 )
      return result;
  }
  return RaidAdapterDevicePowerstopAdapter(a2);
}
