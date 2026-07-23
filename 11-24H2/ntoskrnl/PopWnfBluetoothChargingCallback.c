/*
 * XREFs of PopWnfBluetoothChargingCallback @ 0x1405CD380
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfBluetoothChargingCallback(__int64 a1)
{
  int v1; // ebx
  KIRQL v2; // al
  char v4[4]; // [rsp+20h] [rbp-18h] BYREF
  int v5[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v5[0] = 1;
  v1 = ExQueryWnfStateData(a1, &v6, v4, v5);
  if ( v1 >= 0 )
  {
    if ( v5[0] )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_140F0B3E5 = v4[0];
      if ( PopCsResiliencyStats[0] && v4[0] && !byte_140F0C383 )
        byte_140F0C383 = 1;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
