/*
 * XREFs of RaidNtStatusToStorStatus @ 0x140033780
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140042470 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorPortNvmeofExtendedFunction @ 0x140074180 (StorPortNvmeofExtendedFunction.c)
 *     StorEtwMiniportLogByteStream @ 0x1400A8AB0 (StorEtwMiniportLogByteStream.c)
 *     NvmeAdapterStorMQAddController @ 0x1400D95B8 (NvmeAdapterStorMQAddController.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  if ( a1 <= -1073741661 )
  {
    if ( a1 != -1073741661 )
    {
      if ( a1 == -2147483643 )
        return 3238002692LL;
      if ( a1 != -1073741822 )
      {
        if ( a1 == -1073741811 )
          return 3238002694LL;
        if ( a1 != -1073741789 )
        {
          v1 = -1056964607;
          if ( a1 == -1073741670 )
            return (unsigned int)-1056964605;
          return v1;
        }
        return 3238002692LL;
      }
      return 3238002690LL;
    }
    return 3238002697LL;
  }
  switch ( a1 )
  {
    case -1073741637:
      return 3238002690LL;
    case -1073741496:
      return 3238002696LL;
    case -1073741436:
      return 3238002697LL;
  }
  result = 0LL;
  if ( a1 <= -1 )
    return 3238002689LL;
  return result;
}
